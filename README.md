# LoopRAG: Loop Transformation-Aware RAG Preprocessing

## Overview

This project extracts loop-level features from optimized code (via PLuTo compiler) for RAG (Retrieval-Augmented Generation) preprocessing. It supports three benchmark datasets: **polybench** (looprag format), **tsvc**, and **lore**.

## Data Format: looprag

The stdout format used by polybench, tsvc, and lore benchmarks is called the **looprag** format. Key characteristics:

- Starts with `param_name:` / `param_val:` pairs (or `[zyj-debug]` prefix)
- Uses `[zyj-debug] Before affine transformations` and `[zyj-debug] After affine transformations` markers
- Contains `Read accesses` / `Write accesses` sections per statement
- Dependencies in format: `--- Dep N from Sx to Sy; ... Type: RAW/WAR/WAW`

`extraction_tools.py` auto-detects the format when reading `.stdout` files.

## Quick Start

### 1. Info Preprocessing (extract features from benchmarks)

```bash
# Polybench dataset
python info_preprocess.py \
    --dataset-type polybench \
    --benchmark-list D:\looprag\data\raw_data\benchmark\polybench\utilities\benchmark_list \
    --pluto-code-dir D:\looprag\data\pluto_code\polybench_pluto_code \
    --raw-data-dir D:\looprag\data\raw_data\benchmark\polybench \
    --dataset LARGE_DATASET \
    -o ./output

# TSVC dataset
python info_preprocess.py \
    --dataset-type tsvc \
    --benchmark-list D:\looprag\data\raw_data\benchmark\tsvc\benchmark_list \
    --pluto-code-dir D:\looprag\data\pluto_code\tsvc_pluto_code \
    --raw-data-dir D:\looprag\data\raw_data\benchmark\tsvc \
    -o ./output

# LORE dataset
python info_preprocess.py \
    --dataset-type lore \
    --benchmark-list D:\looprag\data\raw_data\benchmark\LORE_artificial\benchmark_list \
    --pluto-code-dir D:\looprag\data\pluto_code\lore_pluto_code \
    --raw-data-dir D:\looprag\data\raw_data\benchmark\LORE_artificial \
    -o ./output
```

**Output:** JSON files with `feature_info` and `property_info` (before/after affine transformations).

### 2. Code Synthesis (for plcg dataset)

```bash
python ./Generation.py
```

**Output:**
- Intermediate JSON files: `./examples/input/`
- Code and header files: `./examples/poly_code/`

### 3. Post-Synthesis Processing

#### 3.1 Code Optimization & Analysis
```bash
python ./optimization_and_analysis.py
```
**Output:**
- Optimized code (.pluto.c): `./examples/pluto_code/`
- Data flow info (.stdout): `./examples/stdout/`

#### 3.2 Loop Transformation Classification
```bash
python ./loop_transformation_classifier.py
```
**Output:** `./examples/classification_output.csv`

#### 3.3 Feature Extraction & Selection
```bash
python ./rag_preprocess.py
```
**Output:** `./examples/plcg-v2_xxx.json`

## Module Reference

### `extraction_tools.py`
Core extraction class. Key methods:
- `extract_stdout_from_file(stdout_path)` -- Auto-detects format (plcg vs looprag) and extracts iterators, statements, dependencies, schedules, loop types, statement arrays, and global params
- `extract_loop_bounds_from_codelet(c_codelet, original_stmts)` -- Extracts loop nest bounds from C code, supporting if-conditions
- `get_all_info(stdout_path, h_file_path, ...)` -- Full pipeline: extracts stdout info, computes feature matrices, extracts loop bounds, and builds property_info dict
- `get_info(stdout_path)` -- Simplified: just extracts feature_info from stdout

### `resolve_global_params.py`
Parameter resolvers for different benchmark datasets:
- `PolybenchResolver` -- Resolves `_PB_*` params from `.h` files with `#ifdef DATASET` blocks
- `TsvcResolver` -- Resolves params from `common.h` with simple `#define` values
- `LoreResolver` -- Resolves params from `/* start param define */` blocks in `.c` files

### `info_preprocess.py`
Extracts feature_info and property_info from benchmark codelets without classification or dataset filtering. Supports `--dataset-type` flag for polybench, tsvc, and lore.

### `rag_preprocess.py`
Full RAG preprocessing pipeline: loads classification data, filters datasets by transformation types, extracts features, and outputs JSON.

### `loop_transformation_classifier.py`
Classifies loop transformations applied by PLuTo (tiling, interchange, skewing, fusion, distribution, reverse, shifting).

## Dataset Directory Structure

```
D:\looprag\data\
├── raw_data\benchmark\
│   ├── polybench\              # .c + .h files, utilities/benchmark_list
│   ├── tsvc\                   # cfiles/*.c, cfiles/common.h, benchmark_list
│   └── LORE_artificial\        # subdirs/*.c, lore.h, benchmark_list
└── pluto_code\
    ├── polybench_pluto_code\   # stdout/, pluto_code/
    ├── tsvc_pluto_code\        # stdout/, pluto_code/
    └── lore_pluto_code\        # stdout/, pluto_code/
```

## Compilation Commands

### Basic Compilation (No Monitoring)
```bash
gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c \
    -I examples/poly_code -lm -o examples/execution/{filename}.out
```

### With Execution Time Reporting
```bash
gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c \
    -I examples/poly_code -lm -DPOLYBENCH_TIME -o examples/execution/{filename}.out
```

## File Naming & Parameters (plcg dataset)

**Example:** `2324222224_00.c`

| # | Parameter | Value | Description |
|---|---|---|---|
| 1* | `arg_depth` | 2 | Max loop depth of SCoP |
| 2* | `arg_nstmts` | 3 | Number of statements |
| 3* | `arg_bounds_index` | 2 | Max loop branches per level |
| 4 | `arg_prob_bounds_exist` | 4 | Probability of iterators in bounds: 40% |
| 5* | `arg_narrays_per_dim` | 2 | Alternative arrays per dimension |
| 6 | `arg_avg_narrays_read_per_stmt` | 2 | Avg array reads per statement |
| 7 | `arg_bounds_coef` | 2 | Max coefficient for array indexes |
| 8 | `arg_avg_ndeps_read_per_stmt` | 2 | Avg WAR/RAW deps per statement |
| 9 | `arg_bounds_distance` | 2 | Max dependence distance |
| 10* | `arg_dep_write_exist` | 4 | Probability of WAW dep: 40% |
| 11 | `id` | 00 | First code in batch |

*Core parameters
