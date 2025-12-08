#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222132111_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 1
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
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
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("E");
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
        for (i_1 = 0; i_1 < yc; i_1++) {
            sum_C += C[i_0][i_1];
        }
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
                sum_E += E[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222132111_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 5) {
  lbp=0;
  ubp=floord(PB_L-2,16);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=max(0,ceild(32*t1-PB_L-30,32));t2<=min(floord(PB_L-3,32),t1);t2++) {
      for (t3=max(max(2,32*t2),32*t1-PB_L+1);t3<=min(16*t1-1,32*t2+31);t3++) {
        for (t4=0;t4<=t3-1-7;t4+=8) {
          lbv=32*t1;
          ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
          }
        }
        for (;t4<=t3-1;t4++) {
          lbv=32*t1;
          ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
          }
        }
      }
      for (t3=max(max(2,16*t1),32*t2);t3<=min(min(PB_L-3,32*t1+30),32*t2+31);t3++) {
        for (t4=0;t4<=t3-1-7;t4+=8) {
          lbv=max(32*t1,t3);
          ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
          }
        }
        for (;t4<=t3-1;t4++) {
          lbv=max(32*t1,t3);
          ubv=min(32*t1+31,t3+PB_L-1);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[(-t3+t5)+2][t3-1] = C[(-t3+t5)][0] - 2;;
          }
        }
        lbv=max(32*t1,t3+1);
        ubv=min(2*t3,32*t1+31);
#pragma ivdep
#pragma vector always
        for (t5=lbv;t5<=ubv;t5++) {
          B[t3+2][(-t3+t5-1)] = C[t3][(-t3+t5-1)] - C[t3-2][(-t3+t5-1)+2] * C[(-t3+t5-1)][t3] + D[(-t3+t5-1)] + E[(-t3+t5-1)+1][t3+2][(-t3+t5-1)] + B[t3+1][(-t3+t5-1)+1] + 5;;
        }
      }
      if ((t1 == t2) && (t1 <= floord(PB_L-34,32))) {
        for (t4=0;t4<=32*t1+30-7;t4+=8) {
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
        }
        for (;t4<=32*t1+30;t4++) {
          B[0 +2][(32*t1+31)-1] = C[0][0] - 2;;
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
int yc = yC;
int xd = xD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3222132111_00(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
