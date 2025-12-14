/*
arg_depth: 3
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 5
id: 8
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3434231215_08.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int seed)
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
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
        F[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xg; i_0++) {
    G[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xh; i_0++) {
    for (i_1 = 0; i_1 < yh; i_1++) {
        H[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh))
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
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    for (i_0 = 0; i_0 < xg; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0]);
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
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                sum_A += A[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
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
            sum_F += F[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i_0 = 0; i_0 < xg; i_0++) {
        sum_G += G[i_0];
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
void kernel_3434231215_08(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_M-1; i_0++) {
        for (int i_1 = 1; i_1 < PB_Q; i_1++) {
            for (int i_2 = i_1; i_2 < min(min(-i_1+PB_M, PB_Q-1), -i_0+PB_N-1); i_2++) {
                A[i_0-1][i_1-1][i_1] = E[i_0][i_2][1] + E[i_2][i_1+1][i_0-1] + E[i_1][i_2-1][i_0+1] + E[i_2+i_0+1][i_2+i_1][1] - A[i_2][i_1-1][i_1] - A[i_0-1][i_2][i_2+1] + 4;
            }
        }
        B[i_0] = F[i_0][i_0-1] * G[i_0] * B[i_0+1] + B[i_0-1] - 5;
        for (int i_3 = 0; i_3 < i_0; i_3++) {
            for (int i_4 = 0; i_4 < min(PB_M, -i_0+PB_L); i_4++) {
                B[i_4] = H[i_3][i_4+i_0] * 1;
            }
        }
        for (int i_5 = 0; i_5 < i_0; i_5++) {
            B[i_5] = F[i_5][i_0-1] - H[i_0-1][i_5] + 2;
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
int xb = xB;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
int xg = xG;
int xh = xH;
int yh = yH;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), INIT_SEED);
kernel_3434231215_08(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
return 0;
}
