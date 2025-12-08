#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2214131223_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
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
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
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
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2214131223_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  if ((PB_L >= -PB_M+4) && (PB_M >= 0)) {
    for (t1=0;t1<=min(floord(4*PB_L+PB_M-4,32),floord(5*PB_L+PB_M-8,32));t1++) {
      lbp=max(ceild(2*t1,3),ceild(32*t1-PB_L+1,32));
      ubp=min(min(min(floord(3*t1+2,3),floord(3*PB_L+PB_M-3,32)),floord(4*PB_L+PB_M-7,32)),floord(96*t1+PB_M+64,128));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_M >= 2) && (t1 == t2)) {
          for (t3=max(1,ceild(32*t1-PB_M+1,2));t3<=min(2,PB_L-1);t3++) {
            for (t4=max(32*t1,2*t3+1);t4<=min(32*t1+31,2*t3+PB_M-1);t4++) {
              A[t3][(-2*t3+t4)-1] = C[(-2*t3+t4)][t3-1] + C[(-2*t3+t4)][t3-1] + B[(-2*t3+t4)] - B[(-2*t3+t4)-1] - 1;;
            }
          }
        }
        for (t3=max(max(3,ceild(32*t2-PB_M+1,2)),32*t1-32*t2);t3<=min(min(floord(32*t2-1,3),PB_L-1),32*t1-32*t2+31);t3++) {
          for (t4=32*t2;t4<=min(32*t2+31,2*t3+PB_M-1);t4++) {
            A[t3][(-2*t3+t4)-1] = C[(-2*t3+t4)][t3-1] + C[(-2*t3+t4)][t3-1] + B[(-2*t3+t4)] - B[(-2*t3+t4)-1] - 1;;
          }
        }
        if (PB_M <= 1) {
          for (t3=max(max(3,ceild(32*t2,3)),32*t1-32*t2);t3<=min(min(PB_L-1,16*t2+14),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,2*t3+3);t4<=min(3*t3,32*t2+31);t4++) {
              B[(-2*t3+t4-1)] = C[t3+1][(-2*t3+t4-1)] - C[(-2*t3+t4-1)+1][t3] + D[t3+1] - D[t3] - B[(-2*t3+t4-1)-1] * B[(-2*t3+t4-1)-2] + 1;;
            }
          }
        }
        if (PB_M >= 2) {
          for (t3=max(ceild(32*t2,3),32*t1-32*t2);t3<=min(min(floord(32*t2-PB_M,2),PB_L-1),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,2*t3+3);t4<=min(3*t3,32*t2+31);t4++) {
              B[(-2*t3+t4-1)] = C[t3+1][(-2*t3+t4-1)] - C[(-2*t3+t4-1)+1][t3] + D[t3+1] - D[t3] - B[(-2*t3+t4-1)-1] * B[(-2*t3+t4-1)-2] + 1;;
            }
          }
        }
        if (PB_M >= 2) {
          for (t3=max(max(max(3,ceild(32*t2-PB_M+1,2)),ceild(32*t2,3)),32*t1-32*t2);t3<=min(min(PB_L-1,16*t2+14),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,2*t3+1);t4<=min(2*t3+2,2*t3+PB_M-1);t4++) {
              A[t3][(-2*t3+t4)-1] = C[(-2*t3+t4)][t3-1] + C[(-2*t3+t4)][t3-1] + B[(-2*t3+t4)] - B[(-2*t3+t4)-1] - 1;;
            }
            for (t4=max(32*t2,2*t3+3);t4<=min(min(3*t3,32*t2+31),2*t3+PB_M-1);t4++) {
              A[t3][(-2*t3+t4)-1] = C[(-2*t3+t4)][t3-1] + C[(-2*t3+t4)][t3-1] + B[(-2*t3+t4)] - B[(-2*t3+t4)-1] - 1;;
              B[(-2*t3+t4-1)] = C[t3+1][(-2*t3+t4-1)] - C[(-2*t3+t4-1)+1][t3] + D[t3+1] - D[t3] - B[(-2*t3+t4-1)-1] * B[(-2*t3+t4-1)-2] + 1;;
            }
            for (t4=3*t3+1;t4<=min(32*t2+31,2*t3+PB_M-1);t4++) {
              A[t3][(-2*t3+t4)-1] = C[(-2*t3+t4)][t3-1] + C[(-2*t3+t4)][t3-1] + B[(-2*t3+t4)] - B[(-2*t3+t4)-1] - 1;;
            }
            for (t4=max(2*t3+3,2*t3+PB_M);t4<=min(3*t3,32*t2+31);t4++) {
              B[(-2*t3+t4-1)] = C[t3+1][(-2*t3+t4-1)] - C[(-2*t3+t4-1)+1][t3] + D[t3+1] - D[t3] - B[(-2*t3+t4-1)-1] * B[(-2*t3+t4-1)-2] + 1;;
            }
          }
        }
        if ((PB_M >= 2) && (t1 >= ceild(3*t2-1,2)) && (t2 <= floord(PB_L-16,16))) {
          A[(16*t2+15)][1 -1] = C[1][(16*t2+15)-1] + C[1][(16*t2+15)-1] + B[1] - B[1 -1] - 1;;
        }
      }
    }
  }
  if ((PB_L >= 4) && (PB_M <= -1)) {
    for (t1=0;t1<=floord(PB_L-1,8);t1++) {
      lbp=max(ceild(2*t1,3),ceild(32*t1-PB_L+1,32));
      ubp=min(floord(3*t1+2,4),floord(3*PB_L-3,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(3,ceild(32*t2,3)),32*t1-32*t2);t3<=min(min(PB_L-1,16*t2+14),32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,2*t3+3);t4<=min(3*t3,32*t2+31);t4++) {
            B[(-2*t3+t4-1)] = C[t3+1][(-2*t3+t4-1)] - C[(-2*t3+t4-1)+1][t3] + D[t3+1] - D[t3] - B[(-2*t3+t4-1)-1] * B[(-2*t3+t4-1)-2] + 1;;
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
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_2214131223_00(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
