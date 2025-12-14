/*
arg_depth: 3
arg_nstmts: 3
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
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
#include "3334331113_08.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
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
}
static void print_array(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
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
#endif
#ifdef CHECKSUM
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3334331113_08(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_N-1; i_0++) {
        for (int i_1 = 0; i_1 < PB_N-1; i_1++) {
            for (int i_2 = 1; i_2 < PB_M+1; i_2++) {
                C[i_0+1] = D[i_1+1][i_2-1][i_0-1] - 3;
            }
        }
        C[i_0] = E[i_0] * E[i_0] + E[i_0+1] + E[i_0] + F[i_0] - 2;
    }
    for (int i_3 = 0; i_3 < PB_L-1; i_3++) {
        for (int i_4 = 0; i_4 < PB_M-1; i_4++) {
            C[i_4+1] = G[i_4+1][1] + G[i_4][i_3+1] - C[i_4] - 6;
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xc = xC;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int xf = xF;
int xg = xG;
int yg = yG;
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE, xG,yG,xg,yg);
init_array(xc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), INIT_SEED);
kernel_3334331113_08(xc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
