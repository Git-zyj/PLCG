/*
arg_depth: 3
arg_nstmts: 4
arg_bounds_index: 1
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 3
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
#include "3416351315_08.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,int yj,DATA_TYPE POLYBENCH_2D(J,xJ,yJ,xj,yj),int xk,int yk,int zk,DATA_TYPE POLYBENCH_3D(K,xK,yK,zK,xk,yk,zk),int seed)
{
srand(seed);
int i_0, i_1, i_2;
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
        F[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xg; i_0++) {
    for (i_1 = 0; i_1 < yg; i_1++) {
        for (i_2 = 0; i_2 < zg; i_2++) {
            G[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xh; i_0++) {
    for (i_1 = 0; i_1 < yh; i_1++) {
        H[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xi; i_0++) {
    I[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xj; i_0++) {
    for (i_1 = 0; i_1 < yj; i_1++) {
        J[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xk; i_0++) {
    for (i_1 = 0; i_1 < yk; i_1++) {
        for (i_2 = 0; i_2 < zk; i_2++) {
            K[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,int yj,DATA_TYPE POLYBENCH_2D(J,xJ,yJ,xj,yj),int xk,int yk,int zk,DATA_TYPE POLYBENCH_3D(K,xK,yK,zK,xk,yk,zk))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            for (i_2 = 0; i_2 < zg; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0][i_1][i_2]);
            }
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
    POLYBENCH_DUMP_BEGIN("I");
    for (i_0 = 0; i_0 < xi; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i_0]);
    }
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    for (i_0 = 0; i_0 < xj; i_0++) {
        for (i_1 = 0; i_1 < yj; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    for (i_0 = 0; i_0 < xk; i_0++) {
        for (i_1 = 0; i_1 < yk; i_1++) {
            for (i_2 = 0; i_2 < zk; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, K[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("K");
#endif
#ifdef CHECKSUM
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
            sum_F += F[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i_0 = 0; i_0 < xg; i_0++) {
        for (i_1 = 0; i_1 < yg; i_1++) {
            for (i_2 = 0; i_2 < zg; i_2++) {
                sum_G += G[i_0][i_1][i_2];
            }
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
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i_0 = 0; i_0 < xi; i_0++) {
        sum_I += I[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i_0 = 0; i_0 < xj; i_0++) {
        for (i_1 = 0; i_1 < yj; i_1++) {
            sum_J += J[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    DATA_TYPE sum_K = 0;
    for (i_0 = 0; i_0 < xk; i_0++) {
        for (i_1 = 0; i_1 < yk; i_1++) {
            for (i_2 = 0; i_2 < zk; i_2++) {
                sum_K += K[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_K);
    POLYBENCH_DUMP_END("K");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3416351315_08(int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int xi,DATA_TYPE POLYBENCH_1D(I,xI,xi),int xj,int yj,DATA_TYPE POLYBENCH_2D(J,xJ,yJ,xj,yj),int xk,int yk,int zk,DATA_TYPE POLYBENCH_3D(K,xK,yK,zK,xk,yk,zk)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_P-1; i_0++) {
        for (int i_1 = 1; i_1 < -i_0+PB_N-1; i_1++) {
            for (int i_2 = i_1; i_2 < min(-i_0+PB_L, PB_M-1); i_2++) {
                D[i_2][i_1+1] = E[i_1][i_0][i_2] - F[i_2][i_1-1] * E[i_1][i_2+1][i_1] * E[i_1+i_0+1][i_2][i_0] - E[i_1][i_2-1][i_1+i_0] + G[i_1][i_2+i_0][i_0+1] - E[i_0][i_2-1][i_1-1] - 4;
            }
        }
        for (int i_3 = i_0; i_3 < PB_P; i_3++) {
            D[i_0][i_3] = H[i_3][0] + I[i_0] + 1;
        }
    }
    for (int i_4 = 1; i_4 < PB_P; i_4++) {
        for (int i_5 = 1; i_5 < min(i_4, PB_Q-1); i_5++) {
            for (int i_6 = 1; i_6 < min(PB_P, -i_5+PB_L); i_6++) {
                D[i_4+1][i_5] = J[i_5+1][i_6-1] - E[i_6][i_4-1][i_5] * K[i_6][i_4][i_5] - G[i_5][i_4][i_5-1] * K[i_6][i_4][i_5+1] - K[i_6+i_5][i_4-1][i_5] * G[i_4-1][i_5][i_6] + G[i_4+1][i_6+1][i_5] - 3;
            }
            D[i_4][i_5] = D[i_4-1][i_5-1] + D[i_4+1][i_5-1] - D[i_4+1][i_5] * 4;
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
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
int xg = xG;
int yg = yG;
int zg = zG;
int xh = xH;
int yh = yH;
int xi = xI;
int xj = xJ;
int yj = yJ;
int xk = xK;
int yk = yK;
int zk = zK;
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
POLYBENCH_1D_ARRAY_DECL(I, DATA_TYPE, xI,xi);
POLYBENCH_2D_ARRAY_DECL(J, DATA_TYPE, xJ,yJ,xj,yj);
POLYBENCH_3D_ARRAY_DECL(K, DATA_TYPE, xK,yK,zK,xk,yk,zk);
init_array(xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,yj,POLYBENCH_ARRAY(J), xk,yk,zk,POLYBENCH_ARRAY(K), INIT_SEED);
kernel_3416351315_08(xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,yj,POLYBENCH_ARRAY(J), xk,yk,zk,POLYBENCH_ARRAY(K));
polybench_prevent_dce(print_array(xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), xi,POLYBENCH_ARRAY(I), xj,yj,POLYBENCH_ARRAY(J), xk,yk,zk,POLYBENCH_ARRAY(K)));
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
POLYBENCH_FREE_ARRAY(K);
return 0;
}
