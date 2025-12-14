/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 5
id: 0
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4412251215_00.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xf; i_0++) {
    F[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xg; i_0++) {
    for (i_1 = 0; i_1 < yg; i_1++) {
        G[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xh; i_0++) {
    for (i_1 = 0; i_1 < yh; i_1++) {
        H[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh))
{
int i_0, i_1;
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0]);
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i_0 = 0; i_0 < xh; i_0++) {
        for (i_1 = 0; i_1 < yh; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("H");
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
            sum_B += B[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
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
        sum_F += F[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            sum_G += G[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i_0 = 0; i_0 < xh; i_0++) {
        for (i_1 = 0; i_1 < yh; i_1++) {
            sum_H += H[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4412251215_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_M-1; i_0++) {
        A[i_0] = E[i_0] * F[i_0] + E[i_0] + E[i_0+1] + A[i_0+1] * 5;
    }
    for (int i_1 = 1; i_1 < PB_Q-1; i_1++) {
        for (int i_2 = 1; i_2 < min(-i_1+PB_L-1, PB_P-1); i_2++) {
            B[i_1+1][i_2] = G[i_2+i_1+1][i_1] - G[i_1][i_2+1] - G[i_2][i_1+1] * G[i_2+1][i_1] + F[i_2-1] * H[i_2][i_1+1] + B[i_1+1][i_2-1] - B[i_1+2][i_2-1] + 4;
            B[i_1][i_2+1] = H[i_2][i_1+1] - 3;
        }
        A[i_1] = F[i_1] - E[i_1] * E[i_1] * H[i_1][i_1] * E[i_1] - F[i_1] - F[i_1] * F[i_1-1] - E[i_1+1] + 2;
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
int xe = xE;
int xf = xF;
int xg = xG;
int yg = yG;
int xh = xH;
int yh = yH;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE, xG,yG,xg,yg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), INIT_SEED);
kernel_4412251215_00(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
return 0;
}
