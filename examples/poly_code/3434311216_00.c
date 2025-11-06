/*
arg_depth: 3
arg_nstmts: 4
arg_bounds_index: 3
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 3
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 6
id: 0
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <polybench.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "3434311216_00.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
#ifndef POLYBENCH_DUMP_ARRAYS
#define DUMP 0
#else
#define DUMP 1
#endif
#ifndef POLYBENCH_CHECKSUM_ARRAYS
#define CHECKSUM 0
#else
#define CHECKSUM 1
#endif
static void init_array(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xc; i++) {
    C[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xe; i++) {
    for (j = 0; j < ye; j++) {
        E[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xf; i++) {
    F[i] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i = 0; i < xg; i++) {
    for (j = 0; j < yg; j++) {
        for (k = 0; k < zg; k++) {
            G[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xh; i++) {
    for (j = 0; j < yh; j++) {
        for (k = 0; k < zh; k++) {
            H[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("C");
    for (i = 0; i < xc; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("E");
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j]);
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i = 0; i < xf; i++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i]);
    }
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            for (k = 0; k < zg; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, G[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    for (i = 0; i < xh; i++) {
        for (j = 0; j < yh; j++) {
            for (k = 0; k < zh; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, H[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("H");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i = 0; i < xc; i++) {
        sum_C += C[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            sum_E += E[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i = 0; i < xf; i++) {
        sum_F += F[i];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
    POLYBENCH_DUMP_BEGIN("G");
    DATA_TYPE sum_G = 0;
    for (i = 0; i < xg; i++) {
        for (j = 0; j < yg; j++) {
            for (k = 0; k < zg; k++) {
                sum_G += G[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_G);
    POLYBENCH_DUMP_END("G");
    POLYBENCH_DUMP_BEGIN("H");
    DATA_TYPE sum_H = 0;
    for (i = 0; i < xh; i++) {
        for (j = 0; j < yh; j++) {
            for (k = 0; k < zh; k++) {
                sum_H += H[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_H);
    POLYBENCH_DUMP_END("H");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_3434311216_00(int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int xg,int yg,int zg,DATA_TYPE POLYBENCH_3D(G,xG,yG,zG,xg,yg,zg),int xh,int yh,int zh,DATA_TYPE POLYBENCH_3D(H,xH,yH,zH,xh,yh,zh)){
polybench_start_instruments;
#pragma scop
    for (int i = 0; i < PB_L; i++) {
        for (int j = 0; j < PB_M; j++) {
            C[j] = E[j][i] * 5;
        }
    }
    for (int k = 0; k < PB_M; k++) {
        C[k] = 5;
    }
    for (int l = 1; l < PB_M-1; l++) {
        C[l] = F[l] - C[l-1] * C[l+1] * 6;
    }
    for (int m = 1; m < PB_P; m++) {
        for (int n = 1; n < PB_M; n++) {
            for (int o = 1; o < PB_M+1; o++) {
                C[o-1] = G[n][o][m] * H[n][m-1][n-1] - 3;
            }
        }
    }
#pragma endscop
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xc = xC;
int xe = xE;
int ye = yE;
int xf = xF;
int xg = xG;
int yg = yG;
int zg = zG;
int xh = xH;
int yh = yH;
int zh = zH;
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
POLYBENCH_3D_ARRAY_DECL(G, DATA_TYPE, xG,yG,zG,xg,yg,zg);
POLYBENCH_3D_ARRAY_DECL(H, DATA_TYPE, xH,yH,zH,xh,yh,zh);
init_array(xc,POLYBENCH_ARRAY(C), xe,ye,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H), INIT_SEED);
kernel_3434311216_00(xc,POLYBENCH_ARRAY(C), xe,ye,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H));
polybench_prevent_dce(print_array(xc,POLYBENCH_ARRAY(C), xe,ye,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), xg,yg,zg,POLYBENCH_ARRAY(G), xh,yh,zh,POLYBENCH_ARRAY(H)));
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
POLYBENCH_FREE_ARRAY(G);
POLYBENCH_FREE_ARRAY(H);
return 0;
}
