/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 3
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 8
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214231323_08.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        for (i_2 = 0; i_2 < zf; i_2++) {
            F[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("F");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        sum_A += A[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                sum_B += B[i_0][i_1][i_2];
            }
        }
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                sum_E += E[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                sum_F += F[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214231323_08(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 2; i_0 < PB_L-2; i_0++) {
        A[i_0+1] = C[i_0] * A[i_0] - 4;
        for (int i_1 = 1; i_1 < PB_N-1; i_1++) {
            for (int i_2 = i_0; i_2 < -i_0+PB_M; i_2++) {
                B[i_1][i_2][i_0-1] = D[i_1][i_0-1] + E[i_1][i_0][i_1] + E[i_1+1][i_2+i_0][i_1] - E[i_1][i_0][i_2] * F[i_1][i_2][i_0] * B[i_1][i_0-2][i_2-1] + B[i_2][i_0+2][i_1-1] * B[i_1-1][i_2-2][i_0-1] - B[i_2][i_1][i_0] - 3;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_3214231323_08(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
