/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 5
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
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
#include "4434351225_00.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,DATA_TYPE POLYBENCH_2D(K,xK,yK,xk,yk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl),int seed)
{
srand(seed);
int i_0, i_1, i_2;
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
    for (i_1 = 0; i_1 < yg; i_1++) {
        for (i_2 = 0; i_2 < zg; i_2++) {
            G[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xh; i_0++) {
    H[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xi; i_0++) {
    for (i_1 = 0; i_1 < yi; i_1++) {
        I[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xj; i_0++) {
    J[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xk; i_0++) {
    for (i_1 = 0; i_1 < yk; i_1++) {
        K[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xl; i_0++) {
    for (i_1 = 0; i_1 < yl; i_1++) {
        for (i_2 = 0; i_2 < zl; i_2++) {
            L[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,DATA_TYPE POLYBENCH_2D(K,xK,yK,xk,yk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i_0]);
    }
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    for (i_0 = 0; i_0 < xi; i_0++) {
        for (i_1 = 0; i_1 < yi; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, I[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    for (i_0 = 0; i_0 < xj; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, J[i_0]);
    }
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    for (i_0 = 0; i_0 < xk; i_0++) {
        for (i_1 = 0; i_1 < yk; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, K[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    for (i_0 = 0; i_0 < xl; i_0++) {
        for (i_1 = 0; i_1 < yl; i_1++) {
            for (i_2 = 0; i_2 < zl; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, L[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("L");
#endif
#ifdef CHECKSUM
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
        sum_H += H[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
    POLYBENCH_DUMP_BEGIN("I");
    DATA_TYPE sum_I = 0;
    for (i_0 = 0; i_0 < xi; i_0++) {
        for (i_1 = 0; i_1 < yi; i_1++) {
            sum_I += I[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_I);
    POLYBENCH_DUMP_END("I");
    POLYBENCH_DUMP_BEGIN("J");
    DATA_TYPE sum_J = 0;
    for (i_0 = 0; i_0 < xj; i_0++) {
        sum_J += J[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_J);
    POLYBENCH_DUMP_END("J");
    POLYBENCH_DUMP_BEGIN("K");
    DATA_TYPE sum_K = 0;
    for (i_0 = 0; i_0 < xk; i_0++) {
        for (i_1 = 0; i_1 < yk; i_1++) {
            sum_K += K[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_K);
    POLYBENCH_DUMP_END("K");
    POLYBENCH_DUMP_BEGIN("L");
    DATA_TYPE sum_L = 0;
    for (i_0 = 0; i_0 < xl; i_0++) {
        for (i_1 = 0; i_1 < yl; i_1++) {
            for (i_2 = 0; i_2 < zl; i_2++) {
                sum_L += L[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_L);
    POLYBENCH_DUMP_END("L");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4434351225_00(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,DATA_TYPE POLYBENCH_1D(H,xH,xh),int xi,int yi,DATA_TYPE POLYBENCH_2D(I,xI,yI,xi,yi),int xj,DATA_TYPE POLYBENCH_1D(J,xJ,xj),int xk,int yk,DATA_TYPE POLYBENCH_2D(K,xK,yK,xk,yk),int xl,int yl,int zl,DATA_TYPE POLYBENCH_3D(L,xL,yL,zL,xl,yl,zl)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_M; i_0++) {
        for (int i_1 = 0; i_1 < i_0; i_1++) {
            for (int i_2 = 0; i_2 < -i_1+PB_M; i_2++) {
                B[i_2] = E[i_0-1][i_2][i_1] + E[i_0-1][i_2+i_1][i_2] + F[i_2+i_1][0] * G[i_2][i_0][i_1] + 4;
            }
        }
    }
    for (int i_3 = 1; i_3 < PB_M-2; i_3++) {
        B[i_3] = F[i_3+1][i_3] + H[i_3+1] - I[i_3][i_3] - H[i_3-1] - J[i_3] + J[i_3-1] + J[i_3] * B[i_3+1] + B[i_3+2] - 4;
    }
    for (int i_4 = 0; i_4 < PB_M-1; i_4++) {
        for (int i_5 = 1; i_5 < PB_M-1; i_5++) {
            B[i_5-1] = I[i_5][i_4] + K[i_5+1][i_4] + F[i_5-1][i_4+1] - F[i_4][i_5] + 4;
        }
    }
    for (int i_6 = 1; i_6 < PB_P; i_6++) {
        for (int i_7 = i_6; i_7 < PB_Q-1; i_7++) {
            for (int i_8 = 2; i_8 < PB_M; i_8++) {
                B[i_8-2] = L[i_7][i_6][i_6] - E[i_8][i_7-1][i_6+1] - L[i_6-1][i_8][i_7+1] - L[i_8+1][i_6][i_7-1] * 3;
            }
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
int xg = xG;
int yg = yG;
int zg = zG;
int xh = xH;
int xi = xI;
int yi = yI;
int xj = xJ;
int xk = xK;
int yk = yK;
int xl = xL;
int yl = yL;
int zl = zL;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
POLYBENCH_1D_ARRAY_DECL(H, DATA_TYPE, xH,xh);
POLYBENCH_2D_ARRAY_DECL(I, DATA_TYPE, xI,yI,xi,yi);
POLYBENCH_1D_ARRAY_DECL(J, DATA_TYPE, xJ,xj);
POLYBENCH_2D_ARRAY_DECL(K, DATA_TYPE, xK,yK,xk,yk);
POLYBENCH_3D_ARRAY_DECL(L, DATA_TYPE, xL,yL,zL,xl,yl,zl);
init_array(xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L), INIT_SEED);
kernel_4434351225_00(xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,POLYBENCH_ARRAY(H), xi,yi,POLYBENCH_ARRAY(I), xj,POLYBENCH_ARRAY(J), xk,yk,POLYBENCH_ARRAY(K), xl,yl,zl,POLYBENCH_ARRAY(L)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
POLYBENCH_FREE_ARRAY(I);
POLYBENCH_FREE_ARRAY(J);
POLYBENCH_FREE_ARRAY(K);
POLYBENCH_FREE_ARRAY(L);
return 0;
}
