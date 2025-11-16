#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2224232221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xf; i_0++) {
    F[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf))
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
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
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
        for (i_1 = 0; i_1 < yd; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0]);
    }
    POLYBENCH_DUMP_END("F");
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
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
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
        for (i_1 = 0; i_1 < yd; i_1++) {
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        sum_E += E[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        sum_F += F[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2224232221_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  for (t1=-1;t1<=floord(3*PB_L-3,16);t1++) {
    if (PB_N <= -1) {
      t2 = ceild(2*t1,3);
      if (t2 <= min(floord(2*t1+1,3),floord(PB_L-1,8))) {
        for (t3=max(1,8*t2);t3<=min(PB_L-1,8*t2+7);t3++) {
          B[t3+1] = E[t3] - E[t3] * F[t3] - A[t3-1][0] - A[t3][0] + A[t3+1][0] + 1;;
        }
      }
    }
    if (PB_N >= 0) {
      lbp=max(max(ceild(t1,2),ceild(32*t1-3*PB_L+4,32)),ceild(64*t1-3*PB_L-PB_N+6,96));
      ubp=min(min(min(floord(4*PB_L+PB_N-4,32),floord(32*t1+PB_N+27,32)),floord(64*t1+3*PB_N+55,96)),floord(32*t1+22*PB_L+7*PB_N-6,224));
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        if (PB_N >= 2) {
          for (t3=max(max(ceild(16*t1,3),ceild(32*t1-32*t2+1,3)),ceild(32*t2-PB_N+1,3));t3<=min(min(min(min(floord(16*t1+31,3),floord(32*t2+30,3)),floord(32*t1-32*t2+PB_N+30,3)),PB_L-1),16*t1-16*t2-1);t3++) {
            for (t4=max(max(32*t2,3*t3+1),-32*t1+32*t2+6*t3-31);t4<=min(min(32*t2+31,-32*t1+32*t2+6*t3),3*t3+PB_N-1);t4++) {
              A[(-3*t3+t4)][0] = C[(-3*t3+t4)][t3] * D[(-3*t3+t4)][(-3*t3+t4)+2] * D[t3][(-3*t3+t4)+1] - B[(-3*t3+t4)-1] + 2;;
            }
          }
        }
        for (t3=max(max(1,ceild(16*t1,3)),ceild(32*t2-PB_N+1,3));t3<=min(min(min(floord(16*t1+31,3),floord(32*t1-32*t2+PB_N+30,3)),PB_L-1),8*t2-1);t3++) {
          for (t4=max(32*t2,-32*t1+32*t2+6*t3-31);t4<=min(min(32*t2+31,-32*t1+32*t2+6*t3),3*t3+PB_N-1);t4++) {
            A[(-3*t3+t4)][0] = C[(-3*t3+t4)][t3] * D[(-3*t3+t4)][(-3*t3+t4)+2] * D[t3][(-3*t3+t4)+1] - B[(-3*t3+t4)-1] + 2;;
          }
        }
        if (PB_N <= 1) {
          for (t3=max(max(1,8*t2),16*t1-16*t2);t3<=min(PB_L-1,8*t2+7);t3++) {
            B[t3+1] = E[t3] - E[t3] * F[t3] - A[t3-1][0] - A[t3][0] + A[t3+1][0] + 1;;
          }
        }
        if (PB_N >= 2) {
          for (t3=max(8*t2,16*t1-16*t2);t3<=min(min(min(floord(32*t2-PB_N,3),PB_L-1),8*t2+7),16*t1-16*t2+15);t3++) {
            B[t3+1] = E[t3] - E[t3] * F[t3] - A[t3-1][0] - A[t3][0] + A[t3+1][0] + 1;;
          }
        }
        if (PB_N >= 2) {
          for (t3=max(max(max(1,ceild(32*t2-PB_N+1,3)),8*t2),16*t1-16*t2);t3<=min(min(min(floord(32*t1-32*t2+PB_N+30,3),PB_L-1),8*t2+7),16*t1-16*t2+15);t3++) {
            for (t4=max(max(32*t2,3*t3+1),-32*t1+32*t2+6*t3-31);t4<=min(min(4*t3+1,-32*t1+32*t2+6*t3),3*t3+PB_N-1);t4++) {
              A[(-3*t3+t4)][0] = C[(-3*t3+t4)][t3] * D[(-3*t3+t4)][(-3*t3+t4)+2] * D[t3][(-3*t3+t4)+1] - B[(-3*t3+t4)-1] + 2;;
            }
            if ((2*t1 == 3*t2) && (16*t1 == 3*t3)) {
              if (t1%3 == 0) {
                B[(16*t1/3)+1] = E[(16*t1/3)] - E[(16*t1/3)] * F[(16*t1/3)] - A[(16*t1/3)-1][0] - A[(16*t1/3)][0] + A[(16*t1/3)+1][0] + 1;;
              }
            }
            if ((t1 <= floord(16*t2+t3-1,16)) && (t3 >= PB_N-2)) {
              B[t3+1] = E[t3] - E[t3] * F[t3] - A[t3-1][0] - A[t3][0] + A[t3+1][0] + 1;;
            }
            if ((t1 <= floord(16*t2+t3-1,16)) && (t3 <= PB_N-3)) {
              A[(t3+2)][0] = C[(t3+2)][t3] * D[(t3+2)][(t3+2)+2] * D[t3][(t3+2)+1] - B[(t3+2)-1] + 2;;
              B[t3+1] = E[t3] - E[t3] * F[t3] - A[t3-1][0] - A[t3][0] + A[t3+1][0] + 1;;
            }
            for (t4=4*t3+3;t4<=min(min(32*t2+31,-32*t1+32*t2+6*t3),3*t3+PB_N-1);t4++) {
              A[(-3*t3+t4)][0] = C[(-3*t3+t4)][t3] * D[(-3*t3+t4)][(-3*t3+t4)+2] * D[t3][(-3*t3+t4)+1] - B[(-3*t3+t4)-1] + 2;;
            }
          }
        }
        if (PB_N >= 2) {
          for (t3=max(16*t1-16*t2,8*t2+8);t3<=min(min(min(floord(16*t1+31,3),floord(32*t2+30,3)),floord(32*t1-32*t2+PB_N+30,3)),PB_L-1);t3++) {
            for (t4=max(3*t3+1,-32*t1+32*t2+6*t3-31);t4<=min(32*t2+31,3*t3+PB_N-1);t4++) {
              A[(-3*t3+t4)][0] = C[(-3*t3+t4)][t3] * D[(-3*t3+t4)][(-3*t3+t4)+2] * D[t3][(-3*t3+t4)+1] - B[(-3*t3+t4)-1] + 2;;
            }
          }
        }
        for (t3=max(max(1,8*t2),16*t1-16*t2+16);t3<=min(min(floord(16*t1+31,3),floord(32*t1-32*t2+PB_N+30,3)),PB_L-1);t3++) {
          for (t4=-32*t1+32*t2+6*t3-31;t4<=min(32*t2+31,3*t3+PB_N-1);t4++) {
            A[(-3*t3+t4)][0] = C[(-3*t3+t4)][t3] * D[(-3*t3+t4)][(-3*t3+t4)+2] * D[t3][(-3*t3+t4)+1] - B[(-3*t3+t4)-1] + 2;;
          }
        }
        if (PB_N >= 2) {
          for (t3=max(ceild(32*t2-PB_N+1,3),ceild(32*t1-32*t2+PB_N+31,3));t3<=min(min(PB_L-1,8*t2+7),16*t1-16*t2+15);t3++) {
            B[t3+1] = E[t3] - E[t3] * F[t3] - A[t3-1][0] - A[t3][0] + A[t3+1][0] + 1;;
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
int xa = xA;
int ya = yA;
int xb = xB;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int xe = xE;
int xf = xF;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_2224232221_00(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
