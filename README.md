# PLCG — Parameter-driven Loop Code Generator

PLCG synthesizes large numbers of diverse, PolyBench-style C loop kernels (SCoPs) from a
parameter-driven model of loop properties (loop depth, schedule, array accesses, dependencies),
optimizes them with a PLCG-modified PLuTo and classifies the applied loop transformations. It is
the corpus generator behind **LOOPRAG** ("Enhancing Loop Transformation Optimization with
Retrieval-Augmented Large Language Models", ASPLOS 2026) and the basis of the ISPASS
experiments.

This is the `main` development branch: newer generator code, the LOOPRAG/TSVC/LORE
preprocessing tooling and the ISPASS-related analysis. For the frozen artifact that reproduces
the LOOPRAG corpus, use `ASPLOS26Summer`.

## Branches

| branch | purpose |
| --- | --- |
| `main` | development: rewritten generator, dataset preprocessing (polybench / tsvc / lore), ISPASS experiments. Uses pluto **0.12.0**. |
| `ASPLOS26Summer` | LOOPRAG artifact: the corpus-generation pipeline of `v1.0.0`, restructured for reproduction. Uses pluto **0.11.4**. |
| `ISPASS26` | dataset-synthesis experiments for the ISPASS paper. |
| `v1.0.0` | the exact version whose pipeline synthesized `looprag_135364.json`. |

## Repository Layout

```text
random_generation.py                  # step 1: parameter-driven synthesis
loop_properties_generator.py          # parameter model -> loop properties
c_code_generator.py                   # loop properties -> PolyBench-style C kernels
optimization_and_analysis.py          # step 2: PLCG pluto optimisation + dataflow reports
loop_transformation_classifier.py     # step 3: loop-transformation detection
rag_preprocess.py                     # step 4: retrieval-corpus preparation
info_preprocess.py                    # dataset feature extraction (polybench / tsvc / lore)
extraction_tools.py                   # looprag stdout parsing helpers
Generation*.py                        # orchestrators (default, 349920-combination, YARPGen)
polybench/                            # PolyBench header/utilities used by the kernels
Compilers/pluto/                      # submodule: upstream pluto 0.12.0 + PLCG patch
patches/pluto-0.12.0-plcg.patch       # the PLCG modifications to pluto
scripts/setup_pluto.sh                # build pluto + render the pipeline wrappers
scripts/run_pipeline.sh               # corpus pipeline, four stages
scripts/smoke_test.sh                 # toolchain health check
scripts/reproduce.sh                  # docker entry point for all of the above
scripts/package_deps.sh               # snapshot pluto's dependencies for offline builds
tests/smoke/                          # kernel used by the smoke test
```

Generated artefacts (regenerated on every run, not tracked): `examples/` (synthesised kernels,
optimised code, dataflow reports, classification CSV, corpus JSON).

## The PLCG PLuTo

`Compilers/pluto` is a git submodule pinned to upstream
[bondhugula/pluto](https://github.com/bondhugula/pluto) **0.12.0** (`a18ffa03`). The PLCG
modifications are kept as `patches/pluto-0.12.0-plcg.patch` and touch only two files:

- `include/pluto/pluto.h` — the `plcg_info` / `custom_context` options;
- `tool/main.cpp` — `get_params_info()` (parameter bounds read from `<kernel>.h`), the
  `--custom-context` and `--plcg-info` flags, and the `[plcg-info]` before/after reports.

`scripts/setup_pluto.sh` fetches pluto's nested dependencies (isl, cloog-isl, piplib, polylib,
candl, clan, openscop, pet), applies the patch, builds, and renders the two wrappers used by the
pipeline — `polycc_parallel` and `inscop_parallel` — with the paths of the local checkout
(nothing is hard-coded, and the build works on any machine).

## Quickstart (docker)

The whole toolchain lives in the image: autotools/gmp/mpfr for pluto and the Python stack for
the pipeline. The host only needs docker.

```bash
./scripts/reproduce.sh image      # build the image (once)
./scripts/reproduce.sh smoke      # build pluto + run the smoke test
./scripts/reproduce.sh pipeline   # full corpus pipeline (synthesis -> pluto -> classification -> corpus)
./scripts/reproduce.sh shell      # interactive shell in the container
```

Without docker (any Linux with autotools, gmp, mpfr, flex/bison, python3):

```bash
python3 -m pip install -r requirements.txt
./scripts/setup_pluto.sh
./scripts/smoke_test.sh
./scripts/run_pipeline.sh --gen-option 2
```

## Pipeline Stages

1. `python3 random_generation.py --option 2` — parameter-driven kernel synthesis; parameter JSONs
   in `examples/input/`, C programs in `examples/poly_code/`;
2. `python3 optimization_and_analysis.py` — PLCG pluto optimisation
   (`-q --parallel --tile --nocloogbacktrack --plcg-info`) and dataflow reports
   (`examples/pluto_code/`, `examples/stdout/`);
3. `python3 loop_transformation_classifier.py` — transformation detection
   (`examples/classification_output.csv`);
4. `python3 rag_preprocess.py` — retrieval corpus (`examples/*.json`).

Dataset preprocessing (polybench / tsvc / lore) runs through `info_preprocess.py`; see the
usage below the `Quick Start`-style examples in the file's docstring.

## Verification

```bash
./scripts/reproduce.sh patch    # the PLCG patch still applies to a pristine pluto 0.12.0
python3 -m compileall -q .      # python sources
./scripts/smoke_test.sh         # builds on a tiny kernel: asserts .pluto.c and both
                                # [plcg-info] before/after reports are produced
```

CI runs the patch check and the smoke test on every push (`.github/workflows/ci.yml`).

## Reproduction Scope

- Synthesis is randomized (seed 0) and toolchain-dependent: a re-run reproduces the same
  process and parameterization, not a byte-identical corpus.
- The historical artefacts that used to live in `examples/` and `baselines/` were moved out of
  this repository (they are outputs, not sources). Backups live in
  `D:\plcg_local_backup\<date>\` on the development machine; restore with
  `tar -xzf examples.tar.gz -C .` when comparing against old runs.
- Building requires autotools, gmp, mpfr, flex/bison (image: `Dockerfile`); the pluto
  dependencies can be fetched as submodules or from the snapshot produced by
  `scripts/package_deps.sh`.
