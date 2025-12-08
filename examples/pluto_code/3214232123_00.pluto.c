#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214232123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
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
void kernel_3214232123_00(int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 3) && (PB_M >= 2)) {
  for (t1=0;t1<=min(min(floord(PB_L-1,8),floord(3*PB_M,32)),floord(2*PB_L+PB_M-2,32));t1++) {
    lbp=max(ceild(2*t1,3),ceild(32*t1-PB_L+1,32));
    ubp=min(min(min(min(min(min(floord(PB_M,16),floord(3*PB_L-2,32)),floord(PB_L+PB_M-1,32)),floord(4*PB_L+PB_M-4,64)),floord(32*t1+PB_M+31,64)),floord(64*t1+PB_L+61,96)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((8*t1 == PB_L-6) && (32*t2 == 3*PB_L-2)) {
        if ((PB_L+10)%32 == 0) {
          B[(PB_L-2)+(PB_L-1)+2][2] = C[(PB_L-2)-1][(PB_L-1)] + D[(PB_L-1)-1] + D[(PB_L-1)] - B[(PB_L-2)+(PB_L-1)+1][2] - 4;;
        }
      }
      if ((t1 <= floord(64*t2-PB_M,32)) && (t2 >= max(ceild(PB_M+2,32),ceild(-PB_L+2*PB_M+1,32)))) {
        B[(-32*t2+2*PB_M)+(32*t2-PB_M)-1][2] = C[(-32*t2+2*PB_M)][(32*t2-PB_M)-2] + C[(-32*t2+2*PB_M)][(32*t2-PB_M)-1] - 2;;
      }
      for (t3=max(max(max(2,ceild(32*t2-PB_L+1,2)),32*t1-32*t2),32*t2-PB_M+1);t3<=min(floord(32*t2-2,3),32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(min(32*t2+31,t3+PB_M),2*t3+PB_L-1);t4++) {
          B[(-2*t3+t4)+t3-1][2] = C[(-2*t3+t4)][t3-2] + C[(-2*t3+t4)][t3-1] - 2;;
        }
      }
      for (t3=max(max(max(max(2,ceild(32*t2-PB_L+1,2)),ceild(32*t2-1,3)),32*t1-32*t2),32*t2-PB_M+1);t3<=min(min(min(PB_L-1,PB_M-4),16*t2+14),32*t1-32*t2+31);t3++) {
        for (t4=max(32*t2,2*t3);t4<=2*t3+2;t4++) {
          B[(-2*t3+t4)+t3-1][2] = C[(-2*t3+t4)][t3-2] + C[(-2*t3+t4)][t3-1] - 2;;
        }
        for (t4=max(32*t2,2*t3+3);t4<=min(min(min(32*t2+31,3*t3+1),t3+PB_M-1),2*t3+PB_L-1);t4++) {
          B[(-2*t3+t4-2)+t3+2][2] = C[(-2*t3+t4-2)-1][t3] + D[t3-1] + D[t3] - B[(-2*t3+t4-2)+t3+1][2] - 4;;
          B[(-2*t3+t4)+t3-1][2] = C[(-2*t3+t4)][t3-2] + C[(-2*t3+t4)][t3-1] - 2;;
        }
        if ((PB_L <= floord(PB_M,2)) && (t2 >= ceild(3*PB_L-33,32)) && (t3 == PB_L-1)) {
          B[(PB_L-2)+(PB_L-1)+2][2] = C[(PB_L-2)-1][(PB_L-1)] + D[(PB_L-1)-1] + D[(PB_L-1)] - B[(PB_L-2)+(PB_L-1)+1][2] - 4;;
        }
        for (t4=3*t3+2;t4<=min(min(32*t2+31,t3+PB_M),2*t3+PB_L-1);t4++) {
          B[(-2*t3+t4)+t3-1][2] = C[(-2*t3+t4)][t3-2] + C[(-2*t3+t4)][t3-1] - 2;;
        }
        if ((t2 >= ceild(t3+PB_M-31,32)) && (t3 >= max(ceild(PB_M-1,2),-PB_L+PB_M+1))) {
          B[(-t3+PB_M)+t3-1][2] = C[(-t3+PB_M)][t3-2] + C[(-t3+PB_M)][t3-1] - 2;;
        }
      }
      for (t3=max(max(max(2,PB_M-3),32*t1-32*t2),32*t2-PB_M+1);t3<=min(min(min(PB_M,PB_L-1),16*t2+14),32*t1-32*t2+31);t3++) {
        for (t4=max(32*t2,2*t3);t4<=min(t3+PB_M,2*t3+PB_L-1);t4++) {
          B[(-2*t3+t4)+t3-1][2] = C[(-2*t3+t4)][t3-2] + C[(-2*t3+t4)][t3-1] - 2;;
        }
      }
      if ((t1 >= ceild(3*t2-1,2)) && (t2 <= min(floord(PB_L-16,16),floord(PB_M-15,16)))) {
        for (t4=32*t2+30;t4<=min(32*t2+31,16*t2+PB_M+15);t4++) {
          B[(-32*t2+t4-30)+(16*t2+15)-1][2] = C[(-32*t2+t4-30)][(16*t2+15)-2] + C[(-32*t2+t4-30)][(16*t2+15)-1] - 2;;
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
kernel_3214232123_00(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
