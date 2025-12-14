/*
arg_depth: 3
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 4
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3436111223_04.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
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
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
    }
    POLYBENCH_DUMP_END("D");
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
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
void kernel_3436111223_04(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_Q; i_0++) {
        for (int i_1 = 0; i_1 < PB_Q-2; i_1++) {
            for (int i_2 = 0; i_2 < PB_Q; i_2++) {
                A[i_2][i_1+1][0] = A[i_2+2][i_1+2][0] * A[i_2+1][i_1+1][0] + A[i_2+1][i_1][0] * 2;
            }
        }
    }
    for (int i_3 = 0; i_3 < PB_M; i_3++) {
        D[i_3] = E[i_3] * 1;
        for (int i_4 = 0; i_4 < i_3; i_4++) {
            for (int i_5 = 0; i_5 < PB_P; i_5++) {
                C[i_4][i_5] = 4;
            }
        }
    }
    for (int i_6 = 2; i_6 < PB_L-2; i_6++) {
        D[i_6] = D[i_6-2] + D[i_6+2] * 5;
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
int xd = xD;
int xc = xC;
int yc = yC;
int xe = xE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xd,POLYBENCH_ARRAY(D), xc,yc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3436111223_04(xa,ya,za,POLYBENCH_ARRAY(A), xd,POLYBENCH_ARRAY(D), xc,yc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xd,POLYBENCH_ARRAY(D), xc,yc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
