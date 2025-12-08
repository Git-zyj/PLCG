#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2212132221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
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
        sum_A += A[i_0];
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
void kernel_2212132221_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_N >= 2) {
  for (t1=max(-1,-PB_N+2);t1<=floord(3*PB_N-3,16);t1++) {
    lbp=max(ceild(t1,2),ceild(48*t1-3*PB_N+5,64));
    ubp=min(min(floord(16*t1+PB_N+13,32),floord(32*t1+PB_N+24,32)),floord(16*t1+9*PB_N-1,96));
#pragma omp parallel for private(lbv,ubv,t3,t4)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(8*t2,16*t1-16*t2);t3<=(min(min(min(floord(32*t2-PB_N-1,2),PB_N-2),8*t2+7),16*t1-16*t2+15))-7;t3+=8) {
        A[t3] = C[t3][t3-1] - C[t3][0] - D[t3] - A[t3+2] + A[t3-1] + 5;;
        A[(t3+1)] = C[(t3+1)][(t3+1)-1] - C[(t3+1)][0] - D[(t3+1)] - A[(t3+1)+2] + A[(t3+1)-1] + 5;;
        A[(t3+2)] = C[(t3+2)][(t3+2)-1] - C[(t3+2)][0] - D[(t3+2)] - A[(t3+2)+2] + A[(t3+2)-1] + 5;;
        A[(t3+3)] = C[(t3+3)][(t3+3)-1] - C[(t3+3)][0] - D[(t3+3)] - A[(t3+3)+2] + A[(t3+3)-1] + 5;;
        A[(t3+4)] = C[(t3+4)][(t3+4)-1] - C[(t3+4)][0] - D[(t3+4)] - A[(t3+4)+2] + A[(t3+4)-1] + 5;;
        A[(t3+5)] = C[(t3+5)][(t3+5)-1] - C[(t3+5)][0] - D[(t3+5)] - A[(t3+5)+2] + A[(t3+5)-1] + 5;;
        A[(t3+6)] = C[(t3+6)][(t3+6)-1] - C[(t3+6)][0] - D[(t3+6)] - A[(t3+6)+2] + A[(t3+6)-1] + 5;;
        A[(t3+7)] = C[(t3+7)][(t3+7)-1] - C[(t3+7)][0] - D[(t3+7)] - A[(t3+7)+2] + A[(t3+7)-1] + 5;;
      }
      for (;t3<=min(min(min(floord(32*t2-PB_N-1,2),PB_N-2),8*t2+7),16*t1-16*t2+15);t3++) {
        A[t3] = C[t3][t3-1] - C[t3][0] - D[t3] - A[t3+2] + A[t3-1] + 5;;
      }
      for (t3=max(ceild(32*t2-PB_N,2),ceild(16*t1-1,3));t3<=min(min(min(floord(16*t1+29,3),floord(32*t1-32*t2+PB_N+28,4)),PB_N-2),16*t1-16*t2-1);t3++) {
        for (t4=max(max(32*t2,3*t3+2),-32*t1+32*t2+6*t3-28);t4<=min(min(32*t2+31,2*t3+PB_N),-32*t1+32*t2+6*t3+3);t4++) {
          A[(-3*t3+t4-1)] = D[0] + C[(-3*t3+t4-1)+t3][(-3*t3+t4-1)] - C[(-3*t3+t4-1)-1][t3] + 4;;
        }
      }
      for (t3=max(max(1,ceild(32*t2-PB_N,2)),ceild(16*t1-1,3));t3<=min(min(floord(16*t1+29,3),floord(32*t1-32*t2+PB_N+28,4)),8*t2-1);t3++) {
        for (t4=max(32*t2,-32*t1+32*t2+6*t3-28);t4<=min(min(32*t2+31,2*t3+PB_N),-32*t1+32*t2+6*t3+3);t4++) {
          A[(-3*t3+t4-1)] = D[0] + C[(-3*t3+t4-1)+t3][(-3*t3+t4-1)] - C[(-3*t3+t4-1)-1][t3] + 4;;
        }
      }
      for (t3=max(max(max(1,ceild(32*t2-PB_N,2)),8*t2),16*t1-16*t2);t3<=min(min(min(floord(32*t1-32*t2+PB_N+28,4),PB_N-2),8*t2+7),16*t1-16*t2+15);t3++) {
        if ((t1 == 0) && (t2 == 0) && (t3 == 1)) {
          A[1] = C[1][1 -1] - C[1][0] - D[1] - A[1 +2] + A[1 -1] + 5;;
        }
        if ((2*t1 == 3*t2-1) && (16*t1 == 3*t3-29)) {
          if ((t1+2)%3 == 0) {
            A[((16*t1+29)/3)] = C[((16*t1+29)/3)][((16*t1+29)/3)-1] - C[((16*t1+29)/3)][0] - D[((16*t1+29)/3)] - A[((16*t1+29)/3)+2] + A[((16*t1+29)/3)-1] + 5;;
          }
        }
        for (t4=max(max(32*t2,3*t3+2),-32*t1+32*t2+6*t3-28);t4<=min(2*t3+PB_N,4*t3-1);t4++) {
          A[(-3*t3+t4-1)] = D[0] + C[(-3*t3+t4-1)+t3][(-3*t3+t4-1)] - C[(-3*t3+t4-1)-1][t3] + 4;;
        }
        if ((t1 >= ceild(16*t2+t3-14,16)) && (t3 >= 2) && (t3 <= floord(PB_N,2))) {
          A[t3] = C[t3][t3-1] - C[t3][0] - D[t3] - A[t3+2] + A[t3-1] + 5;;
          A[(t3-1)] = D[0] + C[(t3-1)+t3][(t3-1)] - C[(t3-1)-1][t3] + 4;;
        }
        if (t3 >= ceild(PB_N+1,2)) {
          A[t3] = C[t3][t3-1] - C[t3][0] - D[t3] - A[t3+2] + A[t3-1] + 5;;
        }
        for (t4=max(4*t3+1,-32*t1+32*t2+6*t3-28);t4<=min(min(32*t2+31,2*t3+PB_N),-32*t1+32*t2+6*t3+3);t4++) {
          A[(-3*t3+t4-1)] = D[0] + C[(-3*t3+t4-1)+t3][(-3*t3+t4-1)] - C[(-3*t3+t4-1)-1][t3] + 4;;
        }
      }
      for (t3=max(ceild(32*t2-PB_N,2),ceild(32*t1-32*t2+PB_N+29,4));t3<=min(min(PB_N-2,8*t2+7),16*t1-16*t2+15);t3++) {
        A[t3] = C[t3][t3-1] - C[t3][0] - D[t3] - A[t3+2] + A[t3-1] + 5;;
      }
      for (t3=max(16*t1-16*t2,8*t2+8);t3<=min(min(floord(16*t1+29,3),floord(32*t1-32*t2+PB_N+28,4)),PB_N-2);t3++) {
        for (t4=max(3*t3+2,-32*t1+32*t2+6*t3-28);t4<=min(32*t2+31,2*t3+PB_N);t4++) {
          A[(-3*t3+t4-1)] = D[0] + C[(-3*t3+t4-1)+t3][(-3*t3+t4-1)] - C[(-3*t3+t4-1)-1][t3] + 4;;
        }
      }
      for (t3=max(max(1,8*t2),16*t1-16*t2+16);t3<=min(floord(16*t1+29,3),floord(32*t1-32*t2+PB_N+28,4));t3++) {
        for (t4=-32*t1+32*t2+6*t3-28;t4<=min(32*t2+31,2*t3+PB_N);t4++) {
          A[(-3*t3+t4-1)] = D[0] + C[(-3*t3+t4-1)+t3][(-3*t3+t4-1)] - C[(-3*t3+t4-1)-1][t3] + 4;;
        }
      }
      if ((t1 <= floord(16*t2+PB_N-1,16)) && (t1 >= ceild(16*t2+PB_N-16,16)) && (t2 >= ceild(PB_N-8,8))) {
        A[(PB_N-1)] = C[(PB_N-1)][(PB_N-1)-1] - C[(PB_N-1)][0] - D[(PB_N-1)] - A[(PB_N-1)+2] + A[(PB_N-1)-1] + 5;;
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
int xc = xC;
int yc = yC;
int xd = xD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
init_array(xa,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_2212132221_00(xa,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
