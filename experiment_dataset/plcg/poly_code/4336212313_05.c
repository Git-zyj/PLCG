/*
arg_depth: 4
arg_nstmts: 3
arg_bounds_index: 3
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 3
arg_bounds_distance: 1
arg_prob_dep_write_exist: 3
id: 5
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4336212313_05.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            for (i_3 = 0; i_3 < vc; i_3++) {
                C[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            for (i_3 = 0; i_3 < ve; i_3++) {
                E[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                for (i_3 = 0; i_3 < ve; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("E");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    sum_C += C[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                for (i_3 = 0; i_3 < ve; i_3++) {
                    sum_E += E[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4336212313_05(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L; i_0++) {
        A[i_0][i_0] = D[0] + A[i_0-1][i_0-1] - 5;
    }
    for (int i_1 = 1; i_1 < PB_L-1; i_1++) {
        A[i_1][i_1] = A[i_1][i_1] - A[i_1-1][i_1-1] - A[i_1+1][i_1+1] + A[i_1+1][i_1+1] - 3;
        for (int i_2 = 2; i_2 < i_1; i_2++) {
            for (int i_3 = i_1; i_3 < PB_P-1; i_3++) {
                for (int i_4 = 1; i_4 < -i_1+PB_M; i_4++) {
                    C[i_1][i_4-1][i_3][i_2-1] = E[i_4+i_1][i_3+1][i_2][i_2-1] + C[i_1][i_4-1][i_3][i_2-2] + 3;
                }
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
int xc = xC;
int yc = yC;
int zc = zC;
int vc = vC;
int xd = xD;
int xe = xE;
int ye = yE;
int ze = zE;
int ve = vE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_4D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,vE,xe,ye,ze,ve);
init_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_4336212313_05(xa,ya,POLYBENCH_ARRAY(A), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
