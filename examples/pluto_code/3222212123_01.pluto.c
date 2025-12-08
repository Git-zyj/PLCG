#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222212123_01.h"
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
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("D");
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
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222212123_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_N >= 0) && (PB_P >= max(0,-4*PB_N+4))) {
  for (t1=0;t1<=min(floord(PB_P+PB_N-1,32),floord(PB_P+2*PB_N-2,32));t1++) {
    if ((PB_Q <= -1) && (t1 <= floord(PB_N-1,32))) {
      for (t4=32*t1;t4<=min(PB_N-1,32*t1+31);t4++) {
        B[t4] = 5;;
      }
    }
    if (PB_Q >= 0) {
      for (t2=max(max(max(max(0,ceild(32*t1-PB_N,32)),ceild(64*t1-PB_P-2*PB_N+2,32)),ceild(64*t1-PB_Q-2*PB_N+2,64)),ceild(128*t1-PB_P-4*PB_N+4,128));t2<=min(min(min(floord(PB_P+PB_Q,32),floord(32*t1+PB_Q+29,32)),floord(PB_P+PB_Q+4*PB_N-4,32)),floord(128*t1+29*PB_P+33*PB_Q,1056));t2++) {
        for (t3=max(max(max(max(max(max(0,ceild(96*t1-3*PB_N,32)),ceild(96*t2-3*PB_Q-25,32)),ceild(192*t1-3*PB_P-6*PB_N+6,32)),ceild(1184*t2-25*PB_P-37*PB_Q,128)),ceild(384*t1-3*PB_P-12*PB_N+12,128)),ceild(384*t1+96*t2-3*PB_P-3*PB_Q-12*PB_N+12,128));t3<=min(min(min(min(min(min(min(floord(3*PB_P,32),floord(3*PB_P+6*PB_N-6,32)),floord(64*t1+PB_P+60,32)),floord(64*t2+PB_P+60,32)),floord(64*t2+PB_P+30*PB_Q,32)),floord(-192*t1+192*t2+3*PB_P+6*PB_N-6,32)),floord(64*t1+31*PB_P,352)),floord(64*t2+31*PB_P,352));t3++) {
          if ((PB_Q >= 2) && (t3 >= 1)) {
            for (t4=max(max(max(2,ceild(32*t3-PB_P+2,2)),32*t1),32*t2-PB_Q+2);t4<=min(min(min(floord(32*t3+31,3),PB_P-2),32*t1+31),32*t2+31);t4++) {
              for (t5=max(32*t3,3*t4);t5<=min(32*t3+31,2*t4+PB_P-2);t5++) {
                lbp=max(32*t2,t4);
                ubp=min(32*t2+31,t4+PB_Q-2);
#pragma omp parallel for private(lbv,ubv)
                for (t6=lbp;t6<=ubp;t6++) {
                  A[(-t4+t6)+1][(-3*t4+t5)+t4-1][(-t4+t6)] = C[(-3*t4+t5)][t4][(-t4+t6)] * D[t4][(-3*t4+t5)][0] + A[(-t4+t6)+1][(-3*t4+t5)+t4-2][(-t4+t6)] * A[(-t4+t6)+2][(-3*t4+t5)+t4+1][(-t4+t6)+1] + 2;;
                }
              }
            }
          }
          if ((t1 == 0) && (t2 >= 1) && (t3 == 0)) {
            for (t4=max(2,32*t2-PB_Q+2);t4<=min(10,PB_P-2);t4++) {
              for (t5=3*t4;t5<=min(31,2*t4+PB_P-2);t5++) {
                lbp=32*t2;
                ubp=min(32*t2+31,t4+PB_Q-2);
#pragma omp parallel for private(lbv,ubv)
                for (t6=lbp;t6<=ubp;t6++) {
                  A[(-t4+t6)+1][(-3*t4+t5)+t4-1][(-t4+t6)] = C[(-3*t4+t5)][t4][(-t4+t6)] * D[t4][(-3*t4+t5)][0] + A[(-t4+t6)+1][(-3*t4+t5)+t4-2][(-t4+t6)] * A[(-t4+t6)+2][(-3*t4+t5)+t4+1][(-t4+t6)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q <= 1) && (t2 == 0) && (t3 == 0)) {
            for (t4=32*t1;t4<=min(PB_N-1,32*t1+31);t4++) {
              B[t4] = 5;;
            }
          }
          if ((PB_Q >= 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=0;t4<=min(1,PB_N-1);t4++) {
              B[t4] = 5;;
            }
          }
          if ((PB_Q >= 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=2;t4<=min(min(10,PB_N-1),PB_P-2);t4++) {
              B[t4] = 5;;
              for (t5=3*t4;t5<=min(31,2*t4+PB_P-2);t5++) {
                lbp=t4;
                ubp=min(31,t4+PB_Q-2);
#pragma omp parallel for private(lbv,ubv)
                for (t6=lbp;t6<=ubp;t6++) {
                  A[(-t4+t6)+1][(-3*t4+t5)+t4-1][(-t4+t6)] = C[(-3*t4+t5)][t4][(-t4+t6)] * D[t4][(-3*t4+t5)][0] + A[(-t4+t6)+1][(-3*t4+t5)+t4-2][(-t4+t6)] * A[(-t4+t6)+2][(-3*t4+t5)+t4+1][(-t4+t6)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,PB_N);t4<=min(10,PB_P-2);t4++) {
              for (t5=3*t4;t5<=min(31,2*t4+PB_P-2);t5++) {
                lbp=t4;
                ubp=min(31,t4+PB_Q-2);
#pragma omp parallel for private(lbv,ubv)
                for (t6=lbp;t6<=ubp;t6++) {
                  A[(-t4+t6)+1][(-3*t4+t5)+t4-1][(-t4+t6)] = C[(-3*t4+t5)][t4][(-t4+t6)] * D[t4][(-3*t4+t5)][0] + A[(-t4+t6)+1][(-3*t4+t5)+t4-2][(-t4+t6)] * A[(-t4+t6)+2][(-3*t4+t5)+t4+1][(-t4+t6)+1] + 2;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(11,32*t1);t4<=min(min(PB_N-1,PB_P-2),32*t1+31);t4++) {
              B[t4] = 5;;
            }
          }
          if ((PB_Q >= 2) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(max(2,32*t1),PB_P-1);t4<=min(PB_N-1,32*t1+31);t4++) {
              B[t4] = 5;;
            }
          }
        }
      }
    }
  }
}
if ((PB_N <= -1) && (PB_P >= 4) && (PB_Q >= 2)) {
  for (t1=0;t1<=floord(PB_P-2,32);t1++) {
    for (t2=t1;t2<=min(floord(PB_P+PB_Q-4,32),floord(32*t1+PB_Q+29,32));t2++) {
      for (t3=max(ceild(96*t2-3*PB_Q-25,32),3*t1);t3<=min(floord(3*PB_P-6,32),floord(64*t1+PB_P+60,32));t3++) {
        for (t4=max(max(max(2,ceild(32*t3-PB_P+2,2)),32*t1),32*t2-PB_Q+2);t4<=min(min(floord(32*t3+31,3),PB_P-2),32*t1+31);t4++) {
          for (t5=max(32*t3,3*t4);t5<=min(32*t3+31,2*t4+PB_P-2);t5++) {
            lbp=max(32*t2,t4);
            ubp=min(32*t2+31,t4+PB_Q-2);
#pragma omp parallel for private(lbv,ubv)
            for (t6=lbp;t6<=ubp;t6++) {
              A[(-t4+t6)+1][(-3*t4+t5)+t4-1][(-t4+t6)] = C[(-3*t4+t5)][t4][(-t4+t6)] * D[t4][(-3*t4+t5)][0] + A[(-t4+t6)+1][(-3*t4+t5)+t4-2][(-t4+t6)] * A[(-t4+t6)+2][(-3*t4+t5)+t4+1][(-t4+t6)+1] + 2;;
            }
          }
        }
      }
    }
  }
}
if (PB_P <= -1) {
  for (t1=0;t1<=floord(PB_N-1,32);t1++) {
    for (t4=32*t1;t4<=min(PB_N-1,32*t1+31);t4++) {
      B[t4] = 5;;
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
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3222212123_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
