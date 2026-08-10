# PLCG — Parameter-driven Loop Code Generator

PLCG synthesizes large numbers of diverse, PolyBench-style C loop kernels (SCoPs) from a
parameter-driven model of loop properties (loop depth, schedule, array accesses, dependencies),
then optimizes them with a modified PLuTo and classifies the applied loop transformations. It is
the corpus generator used by **LOOPRAG** ("Enhancing Loop Transformation Optimization with
Retrieval-Augmented Large Language Models", ASPLOS 2026).

## Branches

| branch / tag | purpose |
| --- | --- |
| `ASPLOS26Summer` | LOOPRAG artifact version: corpus-generation code of `v1.0.0` restructured so that the modified PLuTo is a submodule (see below). **Use this for reproducing the LOOPRAG corpus.** |
| `v1.0.0` | The exact version whose pipeline synthesized `looprag_135364.json`. Kept for reference; it vendors the modified PLuTo as plain tracked files. |
| `main` | Development branch (newer generation code and ISPASS-related analysis). |

## Repository Layout

```text
Generation.py                         # legacy orchestrator (v1.0.0 style)
random_generation.py                  # step 1: parameter-driven synthesis (--option 1/2/3)
code_generator.py / generate_json.py  # parameter model -> PolyBench-style C with SCoP
polybench_files_generation.py         # PolyBench-style program rendering
input/  poly_code/                    # generated parameter JSONs and C files
loop_transformation_classifier/
    optimization_and_analysis.py      # step 2: pluto_DA optimization + dataflow reports
    classifier.py                     # step 3: loop-transformation detection
    rag_preparation.py                # step 4: build the retrieval corpus JSON
    extraction_tools.py               # loop-feature extraction from pluto stdout
Compilers/pluto_DA/                   # submodule: upstream pluto 0.11.4 + LOOPRAG patch
patches/pluto_DA.patch                # the LOOPRAG-specific pluto source modifications
scripts/
    setup_pluto_DA.sh                 # patch + deps + build + wrapper generation
    build_corpus.sh                   # run the four pipeline stages end-to-end
    make_multiprocessing_wrappers.py  # derive polycc/inscop multiprocessing wrappers
third_party/pluto_DA_deps.tar.gz      # vendored pluto 0.11.4 dependencies (fallback)
```

## The pluto_DA Submodule

`Compilers/pluto_DA` is a git submodule pinned to upstream
[bondhugula/pluto](https://github.com/bondhugula/pluto) **0.11.4**
(commit `182dcaa`). The LOOPRAG-specific modifications are kept as
`patches/pluto_DA.patch` (C sources only):

- `include/pluto/libpluto.h` — `customSchedule` / `customcontext` options;
- `src/main.c` — `customScheduling()` (`.trans` file), `get_params_info()` (parameter bounds from
  `<file>.h`), `--custom-schedule` / `--custom-context` CLI flags, `[zyj-debug]` diagnostics;
- `src/pluto_codegen_if.c` — context equalities -> inequalities for the custom context;
- `src/program.c` — polylib-format dependency/domain output and option initialization;
- `src/constraints.c`, `src/framework.c` — debug comments only.

The corpus pipeline additionally needs two wrapper scripts that are **generated** at build time
(never shipped with hard-coded paths):

- `polycc_multiprocessing` — the built `polycc` plus a multiprocessing delta (unique temp files,
  `--tile/--innerpar/...` options); paths are inherited from `configure`;
- `inscop_multiprocessing` — the multiprocessing-safe rewrite of `inscop`.

## Quickstart (Linux)

```bash
# 1) initialize submodules (plcg is usually cloned as a submodule of LOOPRAG)
git submodule update --init --recursive

# 2) build the modified pluto (applies patch, builds deps fallback, generates wrappers)
./scripts/setup_pluto_DA.sh

# 3) regenerate the corpus (option-2 synthesis -> pluto_DA -> classification -> corpus)
./scripts/build_corpus.sh
```

`build_corpus.sh` runs:

1. `python3 random_generation.py --option 2` — 34,992 parameter combinations x random instances
   (JSON parameter models in `input/`, C programs in `poly_code/`);
2. `python3 loop_transformation_classifier/optimization_and_analysis.py -dp ./poly_code -op . -pp ./Compilers/pluto_DA`
   — PLuTo optimization (`-q --tile --parallel --custom-context --nocloogbacktrack`) and dataflow
   reports (`pluto_code/`, `stdout/`);
3. `python3 loop_transformation_classifier/classifier.py --target_path .` — transformation
   detection (`classification_output.csv`);
4. `python3 loop_transformation_classifier/rag_preparation.py -dp . -op . -d looprag` — the final
   corpus JSON `looprag_<N>.json` (copy it into `LOOPRAG/data/raw_data/`).

Generation is randomized (seed 0) and toolchain-dependent, so a re-run reproduces the same
process and parameterization but not necessarily the byte-identical 135,364-file set.

## Requirements

- Linux with `gcc`, `autotools` (pluto build), `bash`, `python3`;
- Python packages: `numpy`, `pandas`, `scipy` (scipy is used by `generate_json.py`).

## Filename Encoding of Generated Codes

Generated files are named by their parameter values, e.g. `2324222224_0.c`:

| position | parameter | meaning (example value 2) |
| --- | --- | --- |
| 1 | `arg_depth` | maximum loop depth, range (1, 2) |
| 2 | `arg_nstmts` | number of statements (3) |
| 3 | `arg_bounds_index` | schedule index range (0..2), statement density |
| 4 | `arg_prob_bounds_exist` | probability (%)/10 of specified loop bounds (4 = 40%) |
| 5 | `arg_narrays_per_dim` | array alternatives per dimension (2) |
| 6 | `arg_narrays_read` | max reads per statement (2) |
| 7 | `arg_bounds_coef` | constant-coefficient bound for array indexes (2) |
| 8 | `arg_ndeps_read` | max read dependencies per statement (2) |
| 9 | `arg_bounds_distance` | dependence-distance bound per dimension (2) |
| 10 | `arg_dep_write_exist` | probability (%)/10 of WAW dependence (4 = 40%) |
| id | instance id | nth random instance for this parameter tuple |

## Notes

- `ISPASS_results/` and other analysis artifacts belong to the `main` development branch and are
  not part of the LOOPRAG corpus pipeline.
- The `v1.0.0` tag vendors the modified pluto as plain tracked files; the `ASPLOS26Summer`
  branch replaces that with the submodule + patch setup.
