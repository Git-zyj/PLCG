/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 5
id: 6
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4422111225_06.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            A[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                sum_A += A[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            sum_C += C[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        sum_E += E[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4422111225_06(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L+1; i_0++) {
        for (int i_1 = 1; i_1 < PB_Q-1; i_1++) {
            for (int i_2 = 0; i_2 < min(PB_Q-1, i_0); i_2++) {
                A[i_0-1][i_1+1][i_2+1] = A[i_0-1][i_1-1][i_2+1] + 5;
            }
        }
    }
    for (int i_3 = 2; i_3 < PB_L-2; i_3++) {
        for (int i_4 = 1; i_4 < PB_L+1; i_4++) {
            for (int i_5 = 0; i_5 < PB_Q-1; i_5++) {
                for (int i_6 = 0; i_6 < PB_Q-1; i_6++) {
                    A[i_4-1][i_5+1][i_6+1] = 6;
                }
            }
        }
        C[i_3][i_3] = E[i_3-1] * C[i_3-2][i_3-2] - C[i_3-1][i_3-1] - C[i_3+2][i_3+2] - 5;
        for (int i_7 = 0; i_7 < PB_Q-1; i_7++) {
            for (int i_8 = i_3; i_8 < PB_Q-1; i_8++) {
                A[i_3-1][i_7+1][i_8+1] = 4;
            }
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int ya = yA;
int za = zA;
int xc = xC;
int yc = yC;
int xe = xE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_4422111225_06(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
