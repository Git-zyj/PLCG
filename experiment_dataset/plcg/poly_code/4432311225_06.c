/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 3
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
#include "4432311225_06.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            for (i_3 = 0; i_3 < va; i_3++) {
                A[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2][i_3]);
                }
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("E");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    sum_A += A[i_0][i_1][i_2][i_3];
                }
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            sum_E += E[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4432311225_06(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 3; i_0 < PB_L-3; i_0++) {
        for (int i_1 = 1; i_1 < PB_P+1; i_1++) {
            for (int i_2 = 0; i_2 < min(-i_0+PB_M-1, i_0); i_2++) {
                for (int i_3 = 1; i_3 < PB_Q; i_3++) {
                    A[i_2+i_0-1][i_0+1][i_1-1][i_3] = A[i_2+i_0][i_0+2][i_1-1][i_3] + A[i_2+i_0+1][i_0+3][i_1-1][i_3-1] - 6;
                }
            }
        }
        for (int i_4 = 0; i_4 < PB_Q-2; i_4++) {
            for (int i_5 = 0; i_5 < -i_0+PB_M+3; i_5++) {
                for (int i_6 = 1; i_6 < PB_P+1; i_6++) {
                    A[i_5+i_0-3][i_0+1][i_6-1][i_4+2] = 2;
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < PB_M-2; i_7++) {
        for (int i_8 = 0; i_8 < PB_M; i_8++) {
            C[i_7][i_8] = E[i_8][i_7-1] * C[i_7+2][i_8] - C[i_7+1][i_8] * 2;
        }
        for (int i_9 = 1; i_9 < PB_M+1; i_9++) {
            C[i_9-1][i_7+2] = 2;
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
int va = vA;
int xc = xC;
int yc = yC;
int xe = xE;
int ye = yE;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_4432311225_06(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
