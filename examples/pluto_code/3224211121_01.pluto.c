#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224211121_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
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
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
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
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
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
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                sum_B += B[i_0][i_1][i_2];
            }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224211121_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 1) && (PB_M >= 1) && (PB_P >= 1) && (PB_P >= -PB_L+3)) {
  lbp=0;
  ubp=min(min(min(floord(PB_L-1,32),floord(PB_P+PB_L-3,32)),floord(PB_P+PB_M-1,32)),floord(PB_P+PB_M+2*PB_L-5,96));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=max(0,ceild(32*t1-PB_M+1,32));t2<=min(floord(PB_P,32),floord(-32*t1+PB_P+PB_L-2,32));t2++) {
      if ((32*t1 == PB_L-1) && (t2 == 0)) {
        for (t4=0;t4<=PB_M-PB_L-7;t4+=8) {
          if ((PB_L+31)%32 == 0) {
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+t4][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+(t4+1)][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+(t4+2)][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+(t4+3)][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+(t4+4)][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+(t4+5)][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+(t4+6)][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+(t4+7)][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
          }
        }
        for (;t4<=PB_M-PB_L;t4++) {
          if ((PB_L+31)%32 == 0) {
            A[(PB_L-1)+1][1][(PB_L-1)] = C[(PB_L-1)+t4][(PB_L-1)+1 -1] * A[(PB_L-1)+1][1 -1][(PB_L-1)] * 1;;
          }
        }
      }
      if (t1 <= min(floord(PB_L-2,32),floord(PB_M-1,32))) {
        for (t3=max(1,32*t2);t3<=min(min(min(PB_P-1,-32*t1+PB_L),32*t1-1),32*t2+31);t3++) {
          for (t4=0;t4<=-32*t1+PB_M-1;t4++) {
            lbv=32*t1;
            ubv=min(min(32*t1+31,-t3+PB_L),-t4+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              A[t5+1][t3][t5] = C[t5+t4][t5+t3-1] * A[t5+1][t3-1][t5] * 1;;
            }
          }
        }
      }
      if ((t1 <= floord(PB_L-2,32)) && (t1 >= ceild(PB_M,32))) {
        for (t3=max(32*t1,32*t2);t3<=min(PB_P,32*t2+31);t3++) {
          for (t4=0;t4<=PB_M-1-7;t4+=8) {
            lbv=32*t1;
            ubv=min(min(t3,PB_L-2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
              B[(t4+1)][t5+1][t3-1] = 4;;
              B[(t4+2)][t5+1][t3-1] = 4;;
              B[(t4+3)][t5+1][t3-1] = 4;;
              B[(t4+4)][t5+1][t3-1] = 4;;
              B[(t4+5)][t5+1][t3-1] = 4;;
              B[(t4+6)][t5+1][t3-1] = 4;;
              B[(t4+7)][t5+1][t3-1] = 4;;
            }
          }
          for (;t4<=PB_M-1;t4++) {
            lbv=32*t1;
            ubv=min(min(t3,PB_L-2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
            }
          }
        }
      }
      if (t1 <= min(floord(PB_L-2,32),floord(PB_M-1,32))) {
        for (t3=max(max(1,32*t1),32*t2);t3<=min(min(PB_P-1,-32*t1+PB_L),32*t2+31);t3++) {
          for (t4=0;t4<=min(t3-1,-32*t1+PB_M-1);t4++) {
            lbv=32*t1;
            ubv=min(min(min(min(t3,PB_L-2),32*t1+31),-t3+PB_L),-t4+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              A[t5+1][t3][t5] = C[t5+t4][t5+t3-1] * A[t5+1][t3-1][t5] * 1;;
              B[t4][t5+1][t3-1] = 4;;
            }
            if (t1 == t2) {
              lbv=t3+1;
              ubv=min(min(32*t1+31,-t3+PB_L),-t4+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t5=lbv;t5<=ubv;t5++) {
                A[t5+1][t3][t5] = C[t5+t4][t5+t3-1] * A[t5+1][t3-1][t5] * 1;;
              }
            }
            if ((PB_L == 2) && (PB_M >= 2) && (t1 == 0) && (t2 == 0) && (t3 == 1) && (t4 == 0)) {
              A[1 +1][1][1] = C[1 +0][1 +1 -1] * A[1 +1][1 -1][1] * 1;;
            }
            lbv=-t4+PB_M;
            ubv=min(min(min(t3,PB_L-2),32*t1+31),-t3+PB_L);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
            }
            lbv=-t3+PB_L+1;
            ubv=min(min(t3,PB_L-2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
            }
          }
          for (t4=t3;t4<=-32*t1+PB_M-1;t4++) {
            lbv=32*t1;
            ubv=min(min(32*t1+31,-t3+PB_L),-t4+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              A[t5+1][t3][t5] = C[t5+t4][t5+t3-1] * A[t5+1][t3-1][t5] * 1;;
            }
          }
          for (t4=-32*t1+PB_M;t4<=(min(PB_M-1,t3-1))-7;t4+=8) {
            lbv=32*t1;
            ubv=min(t3,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
              B[(t4+1)][t5+1][t3-1] = 4;;
              B[(t4+2)][t5+1][t3-1] = 4;;
              B[(t4+3)][t5+1][t3-1] = 4;;
              B[(t4+4)][t5+1][t3-1] = 4;;
              B[(t4+5)][t5+1][t3-1] = 4;;
              B[(t4+6)][t5+1][t3-1] = 4;;
              B[(t4+7)][t5+1][t3-1] = 4;;
            }
          }
          for (;t4<=min(PB_M-1,t3-1);t4++) {
            lbv=32*t1;
            ubv=min(t3,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
            }
          }
        }
      }
      if (t1 <= min(floord(PB_L-2,32),floord(PB_M-1,32))) {
        for (t3=max(max(32*t1,32*t2),-32*t1+PB_L+1);t3<=min(PB_P,32*t2+31);t3++) {
          for (t4=0;t4<=(min(PB_M-1,t3-1))-7;t4+=8) {
            lbv=32*t1;
            ubv=min(min(t3,PB_L-2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
              B[(t4+1)][t5+1][t3-1] = 4;;
              B[(t4+2)][t5+1][t3-1] = 4;;
              B[(t4+3)][t5+1][t3-1] = 4;;
              B[(t4+4)][t5+1][t3-1] = 4;;
              B[(t4+5)][t5+1][t3-1] = 4;;
              B[(t4+6)][t5+1][t3-1] = 4;;
              B[(t4+7)][t5+1][t3-1] = 4;;
            }
          }
          for (;t4<=min(PB_M-1,t3-1);t4++) {
            lbv=32*t1;
            ubv=min(min(t3,PB_L-2),32*t1+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[t4][t5+1][t3-1] = 4;;
            }
          }
        }
      }
      if ((t1 <= min(min(floord(PB_P,32),floord(PB_M-1,32)),floord(-PB_P+PB_L,32))) && (t2 >= ceild(PB_P-31,32))) {
        for (t4=0;t4<=(min(PB_M-1,PB_P-1))-7;t4+=8) {
          lbv=32*t1;
          ubv=min(min(PB_P,PB_L-2),32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[t4][t5+1][PB_P-1] = 4;;
            B[(t4+1)][t5+1][PB_P-1] = 4;;
            B[(t4+2)][t5+1][PB_P-1] = 4;;
            B[(t4+3)][t5+1][PB_P-1] = 4;;
            B[(t4+4)][t5+1][PB_P-1] = 4;;
            B[(t4+5)][t5+1][PB_P-1] = 4;;
            B[(t4+6)][t5+1][PB_P-1] = 4;;
            B[(t4+7)][t5+1][PB_P-1] = 4;;
          }
        }
        for (;t4<=min(PB_M-1,PB_P-1);t4++) {
          lbv=32*t1;
          ubv=min(min(PB_P,PB_L-2),32*t1+31);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            B[t4][t5+1][PB_P-1] = 4;;
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
int za = zA;
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3224211121_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
