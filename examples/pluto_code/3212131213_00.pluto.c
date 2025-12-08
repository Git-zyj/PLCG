#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212131213_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("A");
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
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
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
void kernel_3212131213_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  for (t1=0;t1<=floord(PB_M-1,16);t1++) {
    lbp=max(0,ceild(32*t1-PB_M,32));
    ubp=min(floord(PB_M-1,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if (32*t1 == 32*t2+PB_M) {
        for (t3=32*t1-PB_M;t3<=min(min(PB_M-2,-PB_M+PB_N+1),32*t1-PB_M+31);t3++) {
          if (PB_M%32 == 0) {
            A[t3][(PB_M-1)] = C[(PB_M-1)-1][t3] + C[t3+(PB_M-1)-1][(PB_M-1)-1] * A[t3+1][(PB_M-1)+1] - A[t3+1][(PB_M-1)] + 5;;
          }
        }
      }
      if ((PB_N >= 1) && (t1 <= min(floord(PB_M-1,32),floord(PB_N+1,32))) && (t2 == 0)) {
        lbv=max(2,32*t1);
        ubv=min(min(PB_M,PB_N+1),32*t1+31);
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          A[0][(t4-1)] = C[(t4-1)-1][0] + C[0 +(t4-1)-1][(t4-1)-1] * A[0 +1][(t4-1)+1] - A[0 +1][(t4-1)] + 5;;
        }
      }
      if (t1 <= floord(32*t2+PB_M-1,32)) {
        for (t3=max(1,32*t2);t3<=min(min(min(min(floord(PB_N-1,2),PB_M-2),32*t2+31),32*t1-32*t2+29),-32*t1+32*t2+PB_N+1);t3++) {
          lbv=max(1,32*t1-32*t2);
          ubv=t3+1;
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3][t4-1] = C[t3][1] - C[t3-1][t4] * D[t3] + D[t3] - 5;;
          }
          lbv=max(32*t1-32*t2,t3+2);
          ubv=min(min(PB_M-1,32*t1-32*t2+31),-t3+PB_N+1);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3][(t4-1)] = C[(t4-1)-1][t3] + C[t3+(t4-1)-1][(t4-1)-1] * A[t3+1][(t4-1)+1] - A[t3+1][(t4-1)] + 5;;
            A[t3][t4-1] = C[t3][1] - C[t3-1][t4] * D[t3] + D[t3] - 5;;
          }
          if ((t1 >= ceild(32*t2+PB_M-31,32)) && (t3 <= -PB_M+PB_N+1)) {
            A[t3][(PB_M-1)] = C[(PB_M-1)-1][t3] + C[t3+(PB_M-1)-1][(PB_M-1)-1] * A[t3+1][(PB_M-1)+1] - A[t3+1][(PB_M-1)] + 5;;
          }
          lbv=-t3+PB_N+2;
          ubv=min(PB_M-1,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3][t4-1] = C[t3][1] - C[t3-1][t4] * D[t3] + D[t3] - 5;;
          }
        }
      }
      for (t3=max(max(1,ceild(PB_N,2)),32*t2);t3<=min(min(min(PB_M-2,32*t2+31),32*t1-32*t2+29),-32*t1+32*t2+PB_N+1);t3++) {
        lbv=max(1,32*t1-32*t2);
        ubv=min(PB_M-1,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          A[t3][t4-1] = C[t3][1] - C[t3-1][t4] * D[t3] + D[t3] - 5;;
        }
      }
      if (t1 <= floord(32*t2+PB_M-1,32)) {
        for (t3=max(max(1,32*t2),-32*t1+32*t2+PB_N+2);t3<=min(min(PB_M-1,32*t2+31),32*t1-32*t2+29);t3++) {
          lbv=max(1,32*t1-32*t2);
          ubv=min(PB_M-1,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3][t4-1] = C[t3][1] - C[t3-1][t4] * D[t3] + D[t3] - 5;;
          }
        }
      }
      if ((t1 == 2*t2) && (t1 <= floord(-PB_M+PB_N+2,16)) && (t1 >= ceild(PB_M-30,16))) {
        lbv=max(1,16*t1);
        ubv=PB_M-1;
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          if (t1%2 == 0) {
            A[(PB_M-1)][t4-1] = C[(PB_M-1)][1] - C[(PB_M-1)-1][t4] * D[(PB_M-1)] + D[(PB_M-1)] - 5;;
          }
        }
      }
      for (t3=max(32*t2,32*t1-32*t2+30);t3<=min(PB_M-1,32*t2+31);t3++) {
        lbv=max(1,32*t1-32*t2);
        ubv=min(PB_M-1,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
        for (t4=lbv;t4<=ubv;t4++) {
          A[t3][t4-1] = C[t3][1] - C[t3-1][t4] * D[t3] + D[t3] - 5;;
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
int xa = xA;
int ya = yA;
int xc = xC;
int yc = yC;
int xd = xD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212131213_00(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
