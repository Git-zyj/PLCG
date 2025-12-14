/*
arg_depth: 4
arg_nstmts: 4
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 9
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "4414131221_09.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        for (i_2 = 0; i_2 < zf; i_2++) {
            F[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xg; i_0++) {
    G[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg))
{
int i_0, i_1, i_2, i_3;
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
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i_0]);
    }
    POLYBENCH_DUMP_END("G");
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
        sum_G += G[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_4414131221_09(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int xg,DATA_TYPE POLYBENCH_1D(G,xG,xg)){
polybench_start_instruments;
#pragma scop
    for (int i_0 = 1; i_0 < PB_P-1; i_0++) {
        for (int i_1 = 1; i_1 < min(i_0, -i_0+PB_P); i_1++) {
            for (int i_2 = 1; i_2 < -i_0+PB_Q; i_2++) {
                B[i_2][i_1-1] = E[i_0][i_1][i_2][i_0] * F[i_2][i_0+1][i_1] - F[i_0][i_1+1][i_2-1] + F[i_2-1][i_1+i_0][i_2+i_0] + 3;
            }
        }
        for (int i_3 = 0; i_3 < i_0; i_3++) {
            B[i_3][i_0-1] = G[0] - B[i_0][i_3] - 5;
        }
    }
    for (int i_4 = 1; i_4 < PB_N-2; i_4++) {
        C[i_4] = G[i_4] + C[i_4+2] * 3;
        D[i_4] = G[i_4] - G[i_4] + G[i_4-1] + G[i_4+1] + C[i_4] + D[i_4-1] * 6;
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int yb = yB;
int xc = xC;
int xd = xD;
int xe = xE;
int ye = yE;
int ze = zE;
int ve = vE;
int xf = xF;
int yf = yF;
int zf = zF;
int xg = xG;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_4D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,vE,xe,ye,ze,ve);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
POLYBENCH_1D_ARRAY_DECL(G, DATA_TYPE, xG,xg);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G), INIT_SEED);
kernel_4414131221_09(xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), xg,POLYBENCH_ARRAY(G)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
return 0;
}
