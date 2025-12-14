/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 3
id: 0
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4434111113_00.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,int vf,DATA_TYPE POLYBENCH_4D(F,xF,yF,zF,vF,xf,yf,zf,vf),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            for (i_3 = 0; i_3 < vd; i_3++) {
                D[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        for (i_2 = 0; i_2 < zf; i_2++) {
            for (i_3 = 0; i_3 < vf; i_3++) {
                F[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,int vf,DATA_TYPE POLYBENCH_4D(F,xF,yF,zF,vF,xf,yf,zf,vf))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                for (i_3 = 0; i_3 < vf; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("F");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    sum_D += D[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        sum_C += C[i_0];
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
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                for (i_3 = 0; i_3 < vf; i_3++) {
                    sum_F += F[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4434111113_00(int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,int yf,int zf,int vf,DATA_TYPE POLYBENCH_4D(F,xF,yF,zF,vF,xf,yf,zf,vf)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_L+1; i_0++) {
        for (int i_1 = 0; i_1 < PB_M; i_1++) {
            for (int i_2 = 0; i_2 < min(PB_L, i_1); i_2++) {
                for (int i_3 = 0; i_3 < PB_L-1; i_3++) {
                    D[i_1][i_2][i_0-1][i_3+1] = 4;
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < PB_L; i_4++) {
        B[i_4] = B[i_4+1] - C[i_4] * 3;
        C[i_4] = E[i_4] * E[i_4-1] * 4;
    }
    for (int i_5 = 0; i_5 < PB_L; i_5++) {
        for (int i_6 = i_5; i_6 < PB_L; i_6++) {
            for (int i_7 = 0; i_7 < -i_5+PB_P; i_7++) {
                for (int i_8 = 1; i_8 < PB_P; i_8++) {
                    D[i_7][i_6][i_8-1][i_5] = F[i_6][i_5][i_8][i_7+i_5] * 4;
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
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
int xb = xB;
int xc = xC;
int xe = xE;
int xf = xF;
int yf = yF;
int zf = zF;
int vf = vF;
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_4D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,vF,xf,yf,zf,vf);
init_array(xd,yd,zd,vd,POLYBENCH_ARRAY(D), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E), xf,yf,zf,vf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_4434111113_00(xd,yd,zd,vd,POLYBENCH_ARRAY(D), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E), xf,yf,zf,vf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xd,yd,zd,vd,POLYBENCH_ARRAY(D), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xe,POLYBENCH_ARRAY(E), xf,yf,zf,vf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
