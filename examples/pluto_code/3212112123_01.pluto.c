#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212112123_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
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
            for (i_3 = 0; i_3 < vb; i_3++) {
                B[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            for (i_3 = 0; i_3 < vc; i_3++) {
                C[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc))
{
int i_0, i_1, i_2, i_3;
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
                for (i_3 = 0; i_3 < vb; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2][i_3]);
                }
            }
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2][i_3]);
                }
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
        for (i_1 = 0; i_1 < yb; i_1++) {
            for (i_2 = 0; i_2 < zb; i_2++) {
                for (i_3 = 0; i_3 < vb; i_3++) {
                    sum_B += B[i_0][i_1][i_2][i_3];
                }
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                for (i_3 = 0; i_3 < vc; i_3++) {
                    sum_C += C[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212112123_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 3) {
  if ((PB_L >= 0) && (PB_M >= max(0,ceild(-5*PB_L+10,2))) && (PB_P >= ceild(-PB_L+8,2))) {
    for (t1=0;t1<=min(min(min(min(floord(3*PB_M+2*PB_L,32),floord(PB_P+2*PB_M+PB_L-1,32)),floord(2*PB_P+PB_M+PB_L-4,32)),floord(6*PB_M+11*PB_L-14,64)),floord(4*PB_P+2*PB_M+3*PB_L-10,64));t1++) {
      lbp=max(max(max(ceild(t1,2),ceild(32*t1-PB_P+1,32)),ceild(64*t1-2*PB_P-PB_L+4,64)),ceild(64*t1-PB_L,96));
      ubp=min(min(min(min(min(floord(2*PB_M+PB_L,32),floord(2*PB_M+3*PB_L-4,32)),floord(PB_P+PB_M+PB_L-3,32)),floord(32*t1+PB_M+PB_L+30,64)),floord(64*t1+32*PB_M+17*PB_L,608)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_M >= 5) && (PB_P >= 4) && (PB_Q <= -1) && (t1 <= min(min(floord(3*t2,2),floord(32*t2+PB_M-3,32)),floord(32*t2+PB_P-2,32))) && (t1 >= ceild(64*t2-PB_M-30,32)) && (t2 <= min(floord(PB_M-2,16),floord(PB_P+PB_M-3,32)))) {
          for (t4=max(max(2,32*t1-32*t2),32*t2-PB_M+1);t4<=min(min(min(PB_M-3,PB_P-2),16*t2+14),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,t4+PB_M-1);t5++) {
              A[(-2*t4+t5)+t4][t4][(-2*t4+t5)] = A[(-2*t4+t5)+t4-1][t4+1][(-2*t4+t5)-2] * A[(-2*t4+t5)+t4-2][t4][(-2*t4+t5)-2] - 5;;
            }
          }
        }
        for (t3=0;t3<=min(min(min(min(min(min(floord(PB_Q,32),floord(3*PB_P+PB_Q-12,32)),floord(-96*t1+96*t2+3*PB_P+PB_Q-6,32)),floord(-64*t1+96*t2+PB_P+PB_Q-4,32)),floord(-32*t1+32*t2+PB_M+PB_L+PB_Q-3,32)),floord(-96*t2+6*PB_M+3*PB_L+4*PB_Q-12,128)),floord(3*PB_M+5*PB_Q-15,160));t3++) {
          if ((t2 >= ceild(PB_L+1,32)) && (t3 == 0)) {
            for (t4=max(max(2,32*t1-32*t2),32*t2-PB_M+1);t4<=min(min(min(PB_M-3,PB_P-2),16*t2+14),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,t4+PB_M-1);t5++) {
                A[(-2*t4+t5)+t4][t4][(-2*t4+t5)] = A[(-2*t4+t5)+t4-1][t4+1][(-2*t4+t5)-2] * A[(-2*t4+t5)+t4-2][t4][(-2*t4+t5)-2] - 5;;
              }
            }
          }
          if ((PB_Q <= 2) && (t2 <= floord(PB_L,32)) && (t3 == 0)) {
            for (t4=max(max(2,32*t1-32*t2),32*t2-PB_M+1);t4<=min(min(min(PB_M-3,PB_P-2),16*t2+14),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,t4+PB_M-1);t5++) {
                A[(-2*t4+t5)+t4][t4][(-2*t4+t5)] = A[(-2*t4+t5)+t4-1][t4+1][(-2*t4+t5)-2] * A[(-2*t4+t5)+t4-2][t4][(-2*t4+t5)-2] - 5;;
              }
            }
          }
          if ((t2 <= floord(PB_L,32)) && (t3 >= 1) && (t3 <= floord(PB_Q-3,32))) {
            for (t4=max(2,32*t1-32*t2);t4<=min(min(PB_L,PB_P-1),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4);t5<=min(PB_L,32*t2+31);t5++) {
                lbv=32*t3;
                ubv=min(PB_Q-3,32*t3+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
                }
              }
            }
          }
          if ((PB_Q >= 3) && (t2 <= floord(PB_L,32)) && (t3 == 0)) {
            for (t4=max(2,32*t1-32*t2);t4<=min(min(PB_P-1,32*t2-PB_M),32*t1-32*t2+31);t4++) {
              for (t5=32*t2;t5<=min(PB_L,32*t2+31);t5++) {
                lbv=0;
                ubv=min(31,PB_Q-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
                }
              }
            }
          }
          if ((PB_Q >= 3) && (t2 <= floord(PB_L,32)) && (t3 == 0)) {
            for (t4=max(max(2,32*t1-32*t2),32*t2-PB_M+1);t4<=min(min(min(min(PB_L,PB_M-3),PB_P-2),16*t2+14),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4);t5<=min(PB_L,2*t4+1);t5++) {
                lbv=0;
                ubv=min(31,PB_Q-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
                }
              }
              for (t5=max(32*t2,2*t4+2);t5<=min(min(PB_L,32*t2+31),t4+PB_M-1);t5++) {
                B[t5-1][t4][0 +2][0] = C[t4-2][t5-2][0][0] * 4;;
                A[(-2*t4+t5)+t4][t4][(-2*t4+t5)] = A[(-2*t4+t5)+t4-1][t4+1][(-2*t4+t5)-2] * A[(-2*t4+t5)+t4-2][t4][(-2*t4+t5)-2] - 5;;
                lbv=1;
                ubv=min(31,PB_Q-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
                }
              }
              for (t5=max(PB_L+1,2*t4+2);t5<=min(32*t2+31,t4+PB_M-1);t5++) {
                A[(-2*t4+t5)+t4][t4][(-2*t4+t5)] = A[(-2*t4+t5)+t4-1][t4+1][(-2*t4+t5)-2] * A[(-2*t4+t5)+t4-2][t4][(-2*t4+t5)-2] - 5;;
              }
              for (t5=t4+PB_M;t5<=min(PB_L,32*t2+31);t5++) {
                lbv=0;
                ubv=min(31,PB_Q-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
                }
              }
            }
          }
          if ((PB_Q >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,PB_L+1);t4<=min(min(14,PB_M-3),PB_P-2);t4++) {
              for (t5=2*t4+2;t5<=min(31,t4+PB_M-1);t5++) {
                A[(-2*t4+t5)+t4][t4][(-2*t4+t5)] = A[(-2*t4+t5)+t4-1][t4+1][(-2*t4+t5)-2] * A[(-2*t4+t5)+t4-2][t4][(-2*t4+t5)-2] - 5;;
              }
            }
          }
          if ((PB_Q >= 3) && (t2 <= floord(PB_L,32)) && (t3 == 0)) {
            for (t4=max(max(max(2,PB_M-2),32*t1-32*t2),32*t2-PB_M+1);t4<=min(min(min(PB_L,PB_P-1),16*t2+14),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4);t5<=min(PB_L,32*t2+31);t5++) {
                lbv=0;
                ubv=min(31,PB_Q-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
                }
              }
            }
          }
          if ((PB_P <= min(PB_L+1,PB_M-2)) && (PB_Q >= 3) && (t1 >= ceild(32*t2+PB_P-32,32)) && (t2 <= min(floord(PB_L,32),floord(PB_P+PB_M-2,32))) && (t2 >= ceild(PB_P-15,16)) && (t3 == 0)) {
            for (t5=max(32*t2,PB_P-1);t5<=min(PB_L,32*t2+31);t5++) {
              lbv=0;
              ubv=min(31,PB_Q-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5-1][(PB_P-1)][t6+2][t6] = C[(PB_P-1)-2][t5-2][t6][0] * 4;;
              }
            }
          }
          if ((PB_Q >= 3) && (t2 <= floord(PB_L,32)) && (t3 == 0)) {
            for (t4=max(max(32*t1-32*t2,16*t2+15),32*t2-PB_M+1);t4<=min(min(PB_L,PB_P-1),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4);t5<=min(PB_L,32*t2+31);t5++) {
                lbv=0;
                ubv=min(31,PB_Q-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_M >= 5) && (PB_P >= 4)) {
    for (t1=0;t1<=min(floord(3*PB_M-7,32),floord(2*PB_P+PB_M-5,32));t1++) {
      lbp=max(ceild(2*t1,3),ceild(32*t1-PB_P+2,32));
      ubp=min(min(min(floord(PB_M-2,16),floord(PB_P+PB_M-3,32)),floord(32*t1+PB_M+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t4=max(max(2,32*t1-32*t2),32*t2-PB_M+1);t4<=min(min(min(PB_M-3,PB_P-2),16*t2+14),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,t4+PB_M-1);t5++) {
            A[(-2*t4+t5)+t4][t4][(-2*t4+t5)] = A[(-2*t4+t5)+t4-1][t4+1][(-2*t4+t5)-2] * A[(-2*t4+t5)+t4-2][t4][(-2*t4+t5)-2] - 5;;
          }
        }
      }
    }
  }
  if ((PB_L >= 2) && (PB_M <= -1) && (PB_Q >= 3)) {
    for (t1=0;t1<=min(floord(PB_L,16),floord(PB_P+PB_L-1,32));t1++) {
      lbp=max(ceild(t1,2),ceild(32*t1-PB_P+1,32));
      ubp=min(floord(PB_L,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=0;t3<=floord(PB_Q-3,32);t3++) {
          for (t4=max(2,32*t1-32*t2);t4<=min(min(PB_L,PB_P-1),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,t4);t5<=min(PB_L,32*t2+31);t5++) {
              lbv=32*t3;
              ubv=min(PB_Q-3,32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5-1][t4][t6+2][t6] = C[t4-2][t5-2][t6][0] * 4;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int vb = vB;
int xc = xC;
int yc = yC;
int zc = zC;
int vc = vC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_4D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,vB,xb,yb,zb,vb);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212112123_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
