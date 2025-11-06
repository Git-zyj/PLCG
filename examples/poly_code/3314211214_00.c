/*
arg_depth: 3
arg_nstmts: 3
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
arg_prob_dep_write_exist: 4
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
#include "3314211214_00.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i,j,k,l;
for (i = 0; i < xa; i++) {
    for (j = 0; j < ya; j++) {
        A[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xb; i++) {
    for (j = 0; j < yb; j++) {
        B[i][j] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i = 0; i < xd; i++) {
    for (j = 0; j < yd; j++) {
        for (k = 0; k < zd; k++) {
            D[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i = 0; i < xe; i++) {
    for (j = 0; j < ye; j++) {
        for (k = 0; k < ze; k++) {
            E[i][j][k] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
{
int i,j,k,l;
POLYBENCH_DUMP_START;
if (DUMP) {
    POLYBENCH_DUMP_BEGIN("A");
    for (i = 0; i < xa; i++) {
        for (j = 0; j < ya; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j]);
        }
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i = 0; i < xb; i++) {
        for (j = 0; j < yb; j++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("D");
    for (i = 0; i < xd; i++) {
        for (j = 0; j < yd; j++) {
            for (k = 0; k < zd; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            for (k = 0; k < ze; k++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i][j][k]);
            }
        }
    }
    POLYBENCH_DUMP_END("E");
}
if (CHECKSUM) {
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i = 0; i < xa; i++) {
        for (j = 0; j < ya; j++) {
            sum_A += A[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i = 0; i < xb; i++) {
        for (j = 0; j < yb; j++) {
            sum_B += B[i][j];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i = 0; i < xd; i++) {
        for (j = 0; j < yd; j++) {
            for (k = 0; k < zd; k++) {
                sum_D += D[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i = 0; i < xe; i++) {
        for (j = 0; j < ye; j++) {
            for (k = 0; k < ze; k++) {
                sum_E += E[i][j][k];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
}
POLYBENCH_DUMP_FINISH;
}
void kernel_3314211214_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
#pragma scop
    for (int i = 0; i < PB_P; i++) {
        for (int j = 1; j < PB_P+1; j++) {
            A[i][j-1] = A[i+1][j-1] + 2;
        }
        for (int k = 1; k < PB_Q+1; k++) {
            for (int l = 0; l < i; l++) {
                B[k][i+1] = D[i][l][k-1] + E[l][k][i] - B[k+1][i+1] * B[l][i+2] - B[k+1][l+1] - 6;
            }
        }
    }
    for (int m = 0; m < PB_L; m++) {
        for (int n = 1; n < PB_P-1; n++) {
            for (int o = 2; o < min(m,PB_P+2); o++) {
                A[n-1][o-2] = E[o][m][n+1] - 3;
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
int ya = yA;
int xb = xB;
int yb = yB;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3314211214_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
