#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222211123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
{
srand(seed);
int i_0, i_1;
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
}
static void print_array(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222211123_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  lbp=ceild(-PB_M-29,32);
  ubp=floord(PB_M-2,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=max(0,-t1-1);t2<=min(floord(PB_M-1,32),floord(-32*t1+PB_M-1,32));t2++) {
      if ((PB_M >= 3) && (t1 >= 0) && (t2 == 0)) {
        lbv=max(1,32*t1);
        ubv=min(PB_M-2,32*t1+31);
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          B[0][t4-1] = B[0 +2][t4+1] + 3;;
        }
      }
      if ((PB_P >= 1) && (t1 <= -1)) {
        for (t3=max(32*t2,-32*t1-30);t3<=min(min(min(floord(-32*t1+PB_M,2),PB_M-1),-32*t1+PB_P),32*t2+31);t3++) {
          lbv=max(1,32*t1+t3);
          ubv=min(min(PB_P,-t3+PB_M),32*t1+t3+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][(t4-1)] = C[t3-1][(t4-1)] * D[(t4-1)+t3] * 2;;
          }
        }
      }
      if ((PB_M <= PB_P+1) && (32*t1 == PB_M-2) && (t2 == 0)) {
        if ((PB_M+30)%32 == 0) {
          B[1][(PB_M-2)] = C[1 -1][(PB_M-2)] * D[(PB_M-2)+1] * 2;;
        }
      }
      if (t1 >= 0) {
        for (t3=max(1,32*t2);t3<=min(min(min(min(floord(-32*t1+PB_M,2),PB_M-3),-32*t1+PB_P),32*t2+31),-32*t1+PB_M-2);t3++) {
          if (t1 == 0) {
            B[t3][(t3-1)] = C[t3-1][(t3-1)] * D[(t3-1)+t3] * 2;;
          }
          lbv=max(32*t1+t3,t3+1);
          ubv=min(min(min(PB_P,PB_M-2),-t3+PB_M),32*t1+t3+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][t4-1] = B[t3+2][t4+1] + 3;;
            B[t3][(t4-1)] = C[t3-1][(t4-1)] * D[(t4-1)+t3] * 2;;
          }
          lbv=-t3+PB_M+1;
          ubv=min(min(PB_P,PB_M-2),32*t1+t3+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][t4-1] = B[t3+2][t4+1] + 3;;
          }
          if ((PB_M <= PB_P+1) && (t1 >= ceild(PB_M-33,32)) && (t2 == 0) && (t3 == 1)) {
            B[1][(PB_M-2)] = C[1 -1][(PB_M-2)] * D[(PB_M-2)+1] * 2;;
          }
          lbv=PB_P+1;
          ubv=min(PB_M-2,32*t1+t3+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][t4-1] = B[t3+2][t4+1] + 3;;
          }
        }
      }
      if (t1 >= 0) {
        for (t3=max(ceild(-32*t1+PB_M+1,2),32*t2);t3<=min(min(min(PB_M-3,-32*t1+PB_P),32*t2+31),-32*t1+PB_M-2);t3++) {
          lbv=max(32*t1+t3,t3+1);
          ubv=min(PB_M-2,32*t1+t3+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][t4-1] = B[t3+2][t4+1] + 3;;
          }
        }
      }
      if ((PB_M <= min(4,PB_P+2)) && (PB_M >= 3) && (t1 == 0) && (t2 == 0)) {
        lbv=PB_M-2;
        ubv=min(2,PB_P);
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          B[(PB_M-2)][(t4-1)] = C[(PB_M-2)-1][(t4-1)] * D[(t4-1)+(PB_M-2)] * 2;;
        }
      }
      if (t1 >= 0) {
        for (t3=max(max(1,32*t2),-32*t1+PB_P+1);t3<=min(min(PB_M-3,32*t2+31),-32*t1+PB_M-2);t3++) {
          lbv=max(32*t1+t3,t3+1);
          ubv=min(PB_M-2,32*t1+t3+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t3][t4-1] = B[t3+2][t4+1] + 3;;
          }
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
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
init_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3222211123_00(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
