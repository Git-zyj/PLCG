#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2222131223_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
{
int i_0, i_1;
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
        for (i_1 = 0; i_1 < yd; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("D");
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
        for (i_1 = 0; i_1 < yd; i_1++) {
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2222131223_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 3) {
  for (t1=0;t1<=floord(3*PB_L-3,16);t1++) {
    lbp=max(ceild(4*t1,5),ceild(32*t1-PB_L+1,32));
    ubp=min(min(floord(5*PB_L-5,32),floord(128*t1+PB_L+122,160)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if (t1 == t2) {
        for (t3=max(1,ceild(32*t1-PB_L+2,4));t3<=2;t3++) {
          for (t4=max(32*t1,4*t3+1);t4<=min(32*t1+31,4*t3+PB_L-2);t4++) {
            B[t3][(-4*t3+t4)+1] = C[(-4*t3+t4)-1] + B[(-4*t3+t4)+1][t3-1] + 2;;
          }
        }
      }
      for (t3=max(max(3,ceild(32*t2-PB_L+2,4)),32*t1-32*t2);t3<=min(floord(32*t2-1,5),32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(32*t2+31,4*t3+PB_L-2);t4++) {
          B[t3][(-4*t3+t4)+1] = C[(-4*t3+t4)-1] + B[(-4*t3+t4)+1][t3-1] + 2;;
        }
      }
      if ((16*t1 == 3*PB_L-3) && (32*t2 == 5*PB_L-5)) {
        if ((PB_L+31)%32 == 0) {
          B[(PB_L-1)+1][(PB_L-2)] = C[(PB_L-1)+1] - D[(PB_L-2)-1][(PB_L-1)] - D[(PB_L-2)][(PB_L-1)] * D[(PB_L-1)][(PB_L-2)] + D[(PB_L-1)][(PB_L-2)] - B[(PB_L-1)+1][(PB_L-2)-2] + 4;;
        }
      }
      for (t3=max(max(max(3,ceild(32*t2-PB_L+2,4)),ceild(32*t2,5)),32*t1-32*t2);t3<=min(min(PB_L-1,8*t2+7),32*t1-32*t2+31);t3++) {
        for (t4=max(32*t2,4*t3+1);t4<=4*t3+2;t4++) {
          B[t3][(-4*t3+t4)+1] = C[(-4*t3+t4)-1] + B[(-4*t3+t4)+1][t3-1] + 2;;
        }
        for (t4=max(32*t2,4*t3+3);t4<=min(min(5*t3,32*t2+31),4*t3+PB_L-2);t4++) {
          B[t3][(-4*t3+t4)+1] = C[(-4*t3+t4)-1] + B[(-4*t3+t4)+1][t3-1] + 2;;
          B[t3+1][(-4*t3+t4-1)] = C[t3+1] - D[(-4*t3+t4-1)-1][t3] - D[(-4*t3+t4-1)][t3] * D[t3][(-4*t3+t4-1)] + D[t3][(-4*t3+t4-1)] - B[t3+1][(-4*t3+t4-1)-2] + 4;;
        }
        for (t4=5*t3+1;t4<=min(32*t2+31,4*t3+PB_L-2);t4++) {
          B[t3][(-4*t3+t4)+1] = C[(-4*t3+t4)-1] + B[(-4*t3+t4)+1][t3-1] + 2;;
        }
        if ((t2 >= ceild(5*PB_L-36,32)) && (t3 == PB_L-1)) {
          B[(PB_L-1)+1][(PB_L-2)] = C[(PB_L-1)+1] - D[(PB_L-2)-1][(PB_L-1)] - D[(PB_L-2)][(PB_L-1)] * D[(PB_L-1)][(PB_L-2)] + D[(PB_L-1)][(PB_L-2)] - B[(PB_L-1)+1][(PB_L-2)-2] + 4;;
        }
      }
    }
  }
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xb = xB;
int yb = yB;
int xc = xC;
int xd = xD;
int yd = yD;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_2222131223_00(xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
