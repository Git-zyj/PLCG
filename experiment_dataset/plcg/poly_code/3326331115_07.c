/*
arg_depth: 3
arg_nstmts: 3
arg_bounds_index: 2
arg_prob_bounds_exist: 6
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 5
id: 7
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3326331115_07.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
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
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        for (i_1 = 0; i_1 < yb; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("B");
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
void kernel_3326331115_07(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,int yg,DATA_TYPE POLYBENCH_2D(G,xG,yG,xg,yg),int xh,int yh,DATA_TYPE POLYBENCH_2D(H,xH,yH,xh,yh)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 0; i_0 < PB_P; i_0++) {
        for (int i_1 = i_0; i_1 < PB_L-2; i_1++) {
            for (int i_2 = 2; i_2 < -i_1+PB_L-2; i_2++) {
                B[i_2+i_1][i_2-2] = D[i_0][i_2][i_2+i_1] + E[i_2][i_1][i_0] + F[i_2][i_0][i_1] + B[i_2+i_1+2][i_1] * 2;
            }
        }
    }
    for (int i_3 = 1; i_3 < PB_L-1; i_3++) {
        for (int i_4 = 0; i_4 < -i_3+PB_L-1; i_4++) {
            B[i_4+i_3+1][i_3-1] = G[i_4][i_4] - D[i_4+i_3][i_4][i_3] - H[i_4+1][i_3-1] + 5;
        }
    }
    for (int i_5 = 0; i_5 < PB_L-1; i_5++) {
        for (int i_6 = 0; i_6 < min(i_5, -i_5+PB_L-1); i_6++) {
            B[i_6+i_5+1][i_5] = G[i_6][i_5+1] - H[i_5][i_5+1] * 5;
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int yb = yB;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
int yg = yG;
int xh = xH;
int yh = yH;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_2D_ARRAY_DECL(G, DATA_TYPE, xG,yG,xg,yg);
POLYBENCH_2D_ARRAY_DECL(H, DATA_TYPE, xH,yH,xh,yh);
init_array(xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H), INIT_SEED);
kernel_3326331115_07(xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,yg,POLYBENCH_ARRAY(G), xh,yh,POLYBENCH_ARRAY(H)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
return 0;
}
