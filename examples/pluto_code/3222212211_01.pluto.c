#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222212211_01.h"
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
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
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
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            for (i_3 = 0; i_3 < va; i_3++) {
                A[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
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
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2][i_3]);
                }
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
                for (i_3 = 0; i_3 < va; i_3++) {
                    sum_A += A[i_0][i_1][i_2][i_3];
                }
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
            sum_C += C[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222212211_01(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 1) {
  if ((PB_L >= ceild(-PB_M+6,3)) && (PB_M >= 0)) {
    for (t1=0;t1<=min(floord(2*PB_L+PB_M-2,32),floord(4*PB_L+PB_M-6,32));t1++) {
      lbp=max(ceild(t1,2),ceild(32*t1-PB_L+1,32));
      ubp=min(floord(PB_L+PB_M-1,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_M >= 3) && (PB_P <= -1) && (t1 >= ceild(64*t2-PB_M-29,32)) && (t2 <= floord(PB_L+PB_M-3,32))) {
          for (t4=max(32*t1-32*t2,32*t2-PB_M+2);t4<=min(min(PB_L-1,32*t2+30),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,t4+1);t5<=min(32*t2+31,t4+PB_M-2);t5++) {
              B[(-t4+t5)] = C[(-t4+t5)-1][t4] + B[(-t4+t5)+1] * 4;;
            }
          }
        }
        if ((PB_P >= max(0,ceild(-PB_M+3,3))) && (t2 <= floord(PB_L+2*PB_P+PB_M-3,32))) {
          for (t3=max(max(max(max(max(0,ceild(-32*t1+64*t2-PB_M-29,32)),ceild(32*t1-2*PB_L-PB_M+4,32)),ceild(96*t1-96*t2-3*PB_L-PB_M+6,48)),ceild(-64*t1+1056*t2-29*PB_L-31*PB_M+29,64)),ceild(-32*t1+992*t2-29*PB_L-30*PB_M+58,960));t3<=min(min(min(min(floord(32*t1+63*PB_P,32),floord(2*PB_L+PB_P-2,32)),floord(32*t1+PB_P+62,32)),floord(32*t1-32*t2+PB_L+PB_P+30,32)),floord(32*t1-32*t2+PB_L+32*PB_P-1,32));t3++) {
            if ((PB_P >= 1) && (t2 <= floord(PB_L-1,32)) && (t3 >= 1)) {
              for (t4=max(max(max(1,32*t1-32*t2),-32*t2+32*t3-PB_P-31),32*t3-PB_L-PB_P+1);t4<=min(min(min(PB_L-1,16*t3+15),32*t1-32*t2+31),-32*t2+32*t3+30);t4++) {
                for (t5=max(max(32*t2,t4),32*t3-t4-PB_P);t5<=min(min(PB_L-1,32*t2+31),32*t3-t4+30);t5++) {
                  for (t6=max(32*t3,t4+t5+1);t6<=min(32*t3+31,t4+t5+PB_P);t6++) {
                    A[(-t4-t5+t6)][t5][t4-1][t5+2] = A[(-t4-t5+t6)][t5-1][t4-1][t5+1] * A[(-t4-t5+t6)-1][t5][t4-1][t5+2] + A[t5-1][t4][(-t4-t5+t6)-1][t4+2] + 1;;
                  }
                }
              }
            }
            if ((PB_M <= 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
              for (t4=1;t4<=min(15,PB_L-1);t4++) {
                for (t5=t4;t5<=min(PB_L-1,-t4+30);t5++) {
                  for (t6=t4+t5+1;t6<=min(31,t4+t5+PB_P);t6++) {
                    A[(-t4-t5+t6)][t5][t4-1][t5+2] = A[(-t4-t5+t6)][t5-1][t4-1][t5+1] * A[(-t4-t5+t6)-1][t5][t4-1][t5+2] + A[t5-1][t4][(-t4-t5+t6)-1][t4+2] + 1;;
                  }
                }
              }
            }
            if ((PB_P == 0) && (t3 == 0)) {
              for (t4=max(32*t1-32*t2,32*t2-PB_M+2);t4<=min(min(PB_L-1,32*t2+30),32*t1-32*t2+31);t4++) {
                for (t5=max(32*t2,t4+1);t5<=min(32*t2+31,t4+PB_M-2);t5++) {
                  B[(-t4+t5)] = C[(-t4+t5)-1][t4] + B[(-t4+t5)+1] * 4;;
                }
              }
            }
            if ((PB_P >= 1) && (t2 >= ceild(PB_L,32)) && (t3 == 0)) {
              for (t4=max(32*t1-32*t2,32*t2-PB_M+2);t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
                for (t5=32*t2;t5<=min(32*t2+31,t4+PB_M-2);t5++) {
                  B[(-t4+t5)] = C[(-t4+t5)-1][t4] + B[(-t4+t5)+1] * 4;;
                }
              }
            }
            if ((PB_M >= 3) && (PB_P >= 1) && (t1 == t2) && (t1 <= min(floord(PB_L-1,32),floord(PB_M-2,32))) && (t3 == 0)) {
              for (t5=max(1,32*t1);t5<=min(PB_M-2,32*t1+31);t5++) {
                B[t5] = C[t5-1][0] + B[t5+1] * 4;;
              }
            }
            if ((PB_M >= 3) && (PB_P >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
              for (t4=1;t4<=min(15,PB_L-1);t4++) {
                for (t6=2*t4+1;t6<=min(31,2*t4+PB_P);t6++) {
                  A[(-2*t4+t6)][t4][t4-1][t4+2] = A[(-2*t4+t6)][t4-1][t4-1][t4+1] * A[(-2*t4+t6)-1][t4][t4-1][t4+2] + A[t4-1][t4][(-2*t4+t6)-1][t4+2] + 1;;
                }
                for (t5=t4+1;t5<=min(min(PB_L-1,-t4+30),t4+PB_M-2);t5++) {
                  B[(-t4+t5)] = C[(-t4+t5)-1][t4] + B[(-t4+t5)+1] * 4;;
                  for (t6=t4+t5+1;t6<=min(31,t4+t5+PB_P);t6++) {
                    A[(-t4-t5+t6)][t5][t4-1][t5+2] = A[(-t4-t5+t6)][t5-1][t4-1][t5+1] * A[(-t4-t5+t6)-1][t5][t4-1][t5+2] + A[t5-1][t4][(-t4-t5+t6)-1][t4+2] + 1;;
                  }
                }
                for (t5=t4+PB_M-1;t5<=min(PB_L-1,-t4+30);t5++) {
                  for (t6=t4+t5+1;t6<=min(31,t4+t5+PB_P);t6++) {
                    A[(-t4-t5+t6)][t5][t4-1][t5+2] = A[(-t4-t5+t6)][t5-1][t4-1][t5+1] * A[(-t4-t5+t6)-1][t5][t4-1][t5+2] + A[t5-1][t4][(-t4-t5+t6)-1][t4+2] + 1;;
                  }
                }
                for (t5=PB_L;t5<=min(-t4+30,t4+PB_M-2);t5++) {
                  B[(-t4+t5)] = C[(-t4+t5)-1][t4] + B[(-t4+t5)+1] * 4;;
                }
                for (t5=-t4+31;t5<=min(31,t4+PB_M-2);t5++) {
                  B[(-t4+t5)] = C[(-t4+t5)-1][t4] + B[(-t4+t5)+1] * 4;;
                }
              }
            }
            if ((PB_M >= 3) && (PB_P >= 1) && (t2 <= floord(PB_L-1,32)) && (t3 == 0)) {
              for (t4=max(max(max(1,32*t1-32*t2),-16*t2+16),32*t2-PB_M+2);t4<=min(min(PB_L-1,32*t2+30),32*t1-32*t2+31);t4++) {
                for (t5=max(32*t2,t4+1);t5<=min(32*t2+31,t4+PB_M-2);t5++) {
                  B[(-t4+t5)] = C[(-t4+t5)-1][t4] + B[(-t4+t5)+1] * 4;;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L >= 2) && (PB_M <= -1) && (PB_P >= 1)) {
    for (t1=0;t1<=floord(PB_L-1,16);t1++) {
      lbp=ceild(t1,2);
      ubp=min(floord(PB_L-1,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=t1;t3<=min(min(floord(2*PB_L+PB_P-2,32),floord(32*t1+PB_P+62,32)),floord(32*t1-32*t2+PB_L+PB_P+30,32));t3++) {
          for (t4=max(max(max(1,32*t1-32*t2),-32*t2+32*t3-PB_P-31),32*t3-PB_L-PB_P+1);t4<=min(min(min(PB_L-1,16*t3+15),32*t1-32*t2+31),-32*t2+32*t3+30);t4++) {
            for (t5=max(max(32*t2,t4),32*t3-t4-PB_P);t5<=min(min(PB_L-1,32*t2+31),32*t3-t4+30);t5++) {
              for (t6=max(32*t3,t4+t5+1);t6<=min(32*t3+31,t4+t5+PB_P);t6++) {
                A[(-t4-t5+t6)][t5][t4-1][t5+2] = A[(-t4-t5+t6)][t5-1][t4-1][t5+1] * A[(-t4-t5+t6)-1][t5][t4-1][t5+2] + A[t5-1][t4][(-t4-t5+t6)-1][t4+2] + 1;;
              }
            }
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
int va = vA;
int xb = xB;
int xc = xC;
int yc = yC;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3222212211_01(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
