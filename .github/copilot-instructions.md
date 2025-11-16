<!-- Copilot instructions tailored for the PLCG loop-generator repository. -->
# Copilot / AI agent instructions (concise)

Purpose: help an AI coding agent become productive quickly in this repo (code generation -> optimization -> analysis).

- **Big picture**: This repo synthesizes C loop kernels (JSON -> C), runs loop optimizers (PLuTo), and analyzes resulting transformations.
  - Generation pipeline: `loop_properties_generator.py` -> `c_code_generator.py` (produces JSON and `.c` files).
  - Orchestration scripts: `random_generation.py` (main generator, parallel options), `test.py` (more robust runner), `Generation.py` (simple orchestrator calling generator + classifier).
  - Analysis/classification: `loop_transformation_classifier/optimization_and_analysis.py` invokes PLuTo (Compilers/pluto or Compilers/pluto_DA) and stores outputs under the dataset `pluto_code` and `stdout` folders; `loop_transformation_classifier/loop_transformation_classifier.py` summarizes transformations.

- **Key paths & configuration**
  - `path_settings.py` defines `DATASET_PATH`, `json_input_path`, and `target_path`. Default uses `./examples` under the project root.
  - Generated JSONs go to `json_input_path` and generated C files go to `target_path` (e.g., `examples/input`, `examples/poly_code`).

- **How to run (examples)**
  - Quick single debug generation: `python random_generation.py` (option 0 inside file).
  - Large/small scale runs (use `test.py` or `random_generation.py`): the scripts expose option-based modes (0..5). Example: `python test.py` runs with option set in the script; modify `option` variable or call `RandomGenerator(option=3).run()` for medium scale.
  - Full pipeline (generate -> PLuTo -> classify):
    - `python Generation.py` — runs `random_generation.py`, then `loop_transformation_classifier/optimization_and_analysis.py`, then the classifier.
    - For `optimization_and_analysis.py` you may need PLuTo paths: `python optimization_and_analysis.py -dp .. -op . -pp ../../Compilers/pluto_DA`

- **Compile / test generated C** (from repo README):
  - Bare compile: `gcc poly_code/{file}.c polybench/polybench.c -I polybench/ -I poly_code -lm -o execution/{file}.out`
  - With timing: add `-DPOLYBENCH_TIME`.
  - With reference outputs: add `-DUSE_INIT_SEED -DPOLYBENCH_CHECKSUM_ARRAYS` or `-DPOLYBENCH_DUMP_ARRAYS` then run `./execution/{file}.out 0 2>out.log`.

- **Naming / parameters convention**
  - Generated filenames encode parameter choices (e.g. `2324222224_0.c`). See top-level `README.md` for field meanings: `arg_depth`, `arg_nstmts`, `arg_bounds_index`, `arg_prob_bounds_exist`, `arg_narrays_per_dim`, etc. Use those to link tests to generation parameters.

- **Patterns and conventions an agent should follow**
  - Prefer using `path_settings.DATASET_PATH` rather than hard-coded `./examples` paths.
  - Use the `Loop_Properties_Generator` and `C_Code_Generator` APIs for deterministic generation instead of duplicating JSON layout logic.
  - Logging: generation scripts write logs into the dataset path (see `random_generation.py` and `test.py`). Inspect those logs for error traces and counters.
  - Parallelism: `random_generation.py` and `test.py` use `multiprocessing.Pool` or `concurrent.futures.ProcessPoolExecutor`. Keep CPU-count caps (`min(mp.cpu_count(), 16)`) to avoid oversubscription.

- **Integration points & external dependencies**
  - PLuTo: `Compilers/pluto` (and `Compilers/pluto_DA`) are used by the classifier pipeline. Ensure PLuTo is executable and paths passed to `optimization_and_analysis.py` are correct.
  - `polybench` support files are in `polybench/` and are required when compiling generated C programs.

- **Files that show the canonical usage to copy from**
  - `random_generation.py` (generation flow, logging, dir setup).
  - `test.py` (robust runner with configurable options, batching, better logging and path handling).
  - `Generation.py` (simple end-to-end script to run the whole pipeline).
  - `loop_transformation_classifier/optimization_and_analysis.py` (how PLuTo is invoked and outputs are saved).

- **When editing code**
  - Keep changes small and local: follow existing function/class APIs (`Loop_Properties_Generator.generate_json_file`, `C_Code_Generator.generate_c_code`).
  - Maintain deterministic seeds: scripts set `random.seed(0)` and `np.random.seed(0)`; preserve or intentionally change seeds when appropriate.
  - Update `path_settings.py` if adding new dataset roots; avoid global absolute paths in patches.

- **Troubleshooting tips**
  - If no `.c` files appear, check `random_generation` logs under `DATASET_PATH` and ensure `Loop_Properties_Generator` did not raise exceptions.
  - If PLuTo fails, run `optimization_and_analysis.py` manually with `-pp` pointing to `Compilers/pluto` or `Compilers/pluto_DA` and inspect `stdout` output files.

If any part of this summary is unclear or you want more detail about a particular script, tell me which area to expand (generation, PLuTo integration, compilation examples, or parameter naming), and I will iterate.
