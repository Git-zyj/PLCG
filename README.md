# Getting Started

## Quick Start
Execute the following command to sythesize 2048 code in ./examples:

```bash
python ./Dataset_Generation.py
```

# Details

## Preparation

1. Modify output paths by editing these variables in `path_settings.py`:
   - `DATASET_PATH`
   - `target_path`
   - etc.

2. Set the number of synthesized codes and parameters manually, or use our recommended approach:
   ```bash
   python ./random_generation.py
   ```
   We provide multiple alternatives for different code amounts and parameter values.

## Code Synthesis

### Generate Intermediate Files
```bash
python ./random_generation.py
```
**Output:**
- Intermediate JSON files: `./examples/input/`
- Code and header files: `./examples/poly_code/`

## Post-Synthesis Processing (for experiments, PLuTo for PLCG is need)

### 1. Code Optimization & Analysis
```bash
python ./optimization_and_analysis.py
```
**Output:**
- Optimized code (.pluto.c): `./examples/pluto_code/`
- Data flow info (.stdout): `./examples/stdout/`

### 2. Loop Transformation Classification
```bash
python ./loop_transformation_classifier.py
```
**Output:** `./examples/classification_output.csv`

### 3. Feature Extraction & Selection
```bash
python ./rag_proprocess.py
```
**Output:** `./examples/plcg-v2_xxx.json` (extracts loop features and selects based on transformations)

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

### Generate Reference Array Sum
```bash
gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c \
    -I examples/poly_code -lm -DUSE_INIT_SEED -DCHECKSUM -o examples/execution/{filename}.out
examples/execution/{filename}.out 0 2>out.log
```

### Generate Reference Array Elements
```bash
gcc -O3 -fopenmp examples/poly_code/{filename}.c examples/poly_code/polybench.c \
    -I examples/poly_code -lm -DUSE_INIT_SEED -DCHECKELEM -o examples/execution/{filename}.out
examples/execution/{filename}.out 0 2>out.log
```

## File Naming & Parameters

**Example:** `2324222224_00.c`

### Parameter Breakdown (* = Core parameters)

1. **(*)** `arg_depth` = 2  
   Maximum loop depth of SCoP → Loop dimension range: (1, 2)

2. **(*)** `arg_nstmts` = 3  
   Number of statements in SCoP → 3 statements

3. **(*)** `arg_bounds_index` = 2  
   Maximum loop branches per level → Scheduling index range: (0, 1, 2)

4. `arg_prob_bounds_exist` = 4  
   Probability of iterators in loop bounds: 40% (halves at each nest level)

5. **(*)** `arg_narrays_per_dim` = 2  
   Alternative arrays per dimension → 2 arrays available per dimension

6. `arg_avg_narrays_read_per_stmt` = 2  
   Average array reads per statement → 2×3 = 6 total reads

7. `arg_bounds_coef` = 2  
   Maximum absolute value for array index coefficients → Range: (-2, -1, 0, 1, 2)

8. `arg_avg_ndeps_read_per_stmt` = 2  
   Average WAR/RAW dependencies per statement → 2×3 = 6 total read dependencies

9. `arg_bounds_distance` = 2  
   Maximum absolute dependence distance → Range: (-2, -1, 0, 1, 2)

10. **(*)** `arg_dep_write_exist` = 4  
    Probability of WAW dependence per statement: 40% (effective: 64% due to bidirectional generation)

11. `id` = 00  
    First code generated in batch with these parameters