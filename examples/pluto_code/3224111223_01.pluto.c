#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224111223_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            A[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2]);
            }
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("C");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                sum_A += A[i_0][i_1][i_2];
            }
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                sum_C += C[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224111223_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_P >= max(0,ceild(-3*PB_L+12,4)))) {
  for (t1=0;t1<=min(floord(PB_P+PB_L-1,32),floord(5*PB_P+3*PB_L-9,96));t1++) {
    for (t2=0;t2<=min(min(min(floord(PB_P,32),floord(-32*t1+PB_P+PB_L-1,32)),floord(4*PB_P+3*PB_L-12,128)),floord(-96*t1+5*PB_P+3*PB_L-9,160));t2++) {
      for (t3=0;t3<=min(min(min(floord(-32*t2+PB_P,32),floord(-32*t1-64*t2+2*PB_P+PB_L-3,32)),floord(-64*t2+2*PB_P+PB_L-4,64)),t1);t3++) {
        if ((PB_L >= 4) && (PB_P >= 3) && (t1 <= min(floord(PB_L-3,32),floord(PB_P-1,32))) && (t2 == 0) && (t3 == 0)) {
          if (t1 == 0) {
            B[1] = B[1 +2] - B[1 -1] - 2;;
          }
          for (t6=max(2,32*t1);t6<=min(min(PB_L-3,PB_P-1),32*t1+31);t6++) {
            A[0][0][t6] = C[0][0 +t6][0] * A[0][t6-2][0] * A[0][0][t6-1] - 3;;
            B[t6] = B[t6+2] - B[t6-1] - 2;;
          }
          for (t6=PB_L-2;t6<=min(PB_P-1,32*t1+31);t6++) {
            A[0][0][t6] = C[0][0 +t6][0] * A[0][t6-2][0] * A[0][0][t6-1] - 3;;
          }
          for (t6=PB_P;t6<=min(PB_L-3,32*t1+31);t6++) {
            B[t6] = B[t6+2] - B[t6-1] - 2;;
          }
          for (t5=1;t5<=min(min(31,PB_P-2),32*t1+30);t5++) {
            for (t6=max(32*t1,t5+1);t6<=min(PB_P-1,32*t1+31);t6++) {
              A[0][t5][t6] = C[t5][0 +t6][0] * A[0][t6-2][t5] * A[0][t5][t6-1] - 3;;
            }
          }
        }
        if ((t1 <= floord(PB_P-1,32)) && (t2 == 0) && (t3 >= 1) && (t3 <= floord(PB_P-2,32))) {
          for (t5=32*t3;t5<=min(min(PB_P-2,32*t1+30),32*t3+31);t5++) {
            for (t6=max(32*t1,t5+1);t6<=min(PB_P-1,32*t1+31);t6++) {
              A[0][t5][t6] = C[t5][0 +t6][0] * A[0][t6-2][t5] * A[0][t5][t6-1] - 3;;
            }
          }
        }
        if ((PB_L <= 3) && (PB_P >= 3) && (t1 <= floord(PB_P-1,32)) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=min(min(31,PB_P-2),32*t1+30);t5++) {
            for (t6=max(max(2,32*t1),t5+1);t6<=min(PB_P-1,32*t1+31);t6++) {
              A[0][t5][t6] = C[t5][0 +t6][0] * A[0][t6-2][t5] * A[0][t5][t6-1] - 3;;
            }
          }
        }
        if ((PB_L >= 4) && (t1 <= floord(PB_P-1,32)) && (t1 >= ceild(PB_L-2,32)) && (t2 == 0) && (t3 == 0)) {
          for (t5=0;t5<=31;t5++) {
            for (t6=32*t1;t6<=min(PB_P-1,32*t1+31);t6++) {
              A[0][t5][t6] = C[t5][0 +t6][0] * A[0][t6-2][t5] * A[0][t5][t6-1] - 3;;
            }
          }
        }
        if ((t1 <= floord(PB_L-3,32)) && (t1 >= ceild(PB_P,32)) && (t2 == 0) && (t3 == 0)) {
          for (t6=max(1,32*t1);t6<=min(PB_L-3,32*t1+31);t6++) {
            B[t6] = B[t6+2] - B[t6-1] - 2;;
          }
        }
        if ((PB_L >= 4) && (PB_P >= 1) && (PB_P <= 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t6=1;t6<=min(31,PB_L-3);t6++) {
            B[t6] = B[t6+2] - B[t6-1] - 2;;
          }
        }
        for (t4=max(1,32*t2);t4<=min(min(min(PB_P-3,32*t2+31),-32*t1+PB_P-1),-32*t3+PB_P-2);t4++) {
          for (t5=32*t3;t5<=min(min(32*t1+30,32*t3+31),-t4+PB_P-2);t5++) {
            for (t6=max(max(2,32*t1),t5+1);t6<=min(32*t1+31,-t4+PB_P-1);t6++) {
              A[t4][t5][t6] = C[t5][t4+t6][t4] * A[t4][t6-2][t5] * A[t4][t5][t6-1] - 3;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_P >= 3)) {
  for (t1=0;t1<=floord(PB_P-1,32);t1++) {
    lbp=0;
    ubp=min(floord(PB_P-3,32),floord(-32*t1+PB_P-1,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=0;t3<=min(floord(-32*t2+PB_P-2,32),t1);t3++) {
        for (t4=32*t2;t4<=min(min(min(PB_P-3,32*t2+31),-32*t1+PB_P-1),-32*t3+PB_P-2);t4++) {
          for (t5=32*t3;t5<=min(min(32*t1+30,32*t3+31),-t4+PB_P-2);t5++) {
            for (t6=max(max(2,32*t1),t5+1);t6<=min(32*t1+31,-t4+PB_P-1);t6++) {
              A[t4][t5][t6] = C[t5][t4+t6][t4] * A[t4][t6-2][t5] * A[t4][t5][t6-1] - 3;;
            }
          }
        }
      }
    }
  }
}
if ((PB_L >= 4) && (PB_P <= -1)) {
  for (t1=0;t1<=floord(PB_L-3,32);t1++) {
    for (t6=max(1,32*t1);t6<=min(PB_L-3,32*t1+31);t6++) {
      B[t6] = B[t6+2] - B[t6-1] - 2;;
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
int za = zA;
int xb = xB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3224111223_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
