#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224112221_00.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
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
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224112221_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  if (PB_P >= max(0,-3*PB_M+9)) {
    for (t1=0;t1<=min(floord(PB_P+PB_M-1,16),floord(PB_P+3*PB_M-7,16));t1++) {
      lbp=max(max(0,ceild(32*t1-PB_P-PB_M+1,32)),ceild(32*t1-PB_M+1,64));
      ubp=min(min(min(floord(PB_P+PB_M,32),floord(32*t1+PB_M+30,64)),floord(32*t1+15*PB_P+16*PB_M,544)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_P >= 3) && (PB_Q <= -1) && (t1 <= min(floord(32*t2+PB_P-1,32),2*t2)) && (t1 >= ceild(3*t2-1,2)) && (t2 <= min(floord(PB_P-2,16),floord(PB_P+PB_M-2,32)))) {
          for (t4=max(max(max(2,32*t1-32*t2),16*t2+1),32*t2-PB_M+1);t4<=min(min(PB_P-1,32*t2+30),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_M-1);t5++) {
              A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
            }
          }
        }
        if ((PB_P >= ceild(-3*PB_Q+12,4)) && (PB_Q >= 0) && (t1 <= floord(256*t2+4*PB_M+PB_Q-8,128)) && (t1 >= ceild(608*t2-35*PB_P-18*PB_Q+54,32)) && (t2 <= min(floord(2*PB_P+PB_Q-3,32),floord(8*PB_P+5*PB_Q-16,128)))) {
          for (t3=max(max(max(max(max(max(max(max(max(max(max(0,ceild(-4*t1+22*t2-PB_P,18)),ceild(32*t1-3*PB_P,32)),ceild(32*t1-32*t2-PB_P,32)),ceild(32*t1-2*PB_P-PB_M+3,32)),ceild(64*t1-32*t2-3*PB_P-PB_M+1,32)),ceild(160*t1-32*t2-9*PB_P-4*PB_M-3*PB_Q+13,32)),ceild(96*t2-3*PB_P-3*PB_M+6,64)),ceild(80*t2-3*PB_P-2*PB_M+6,80)),ceild(128*t1-128*t2-4*PB_P-PB_Q+4,128)),t1-2*t2),-2*t1+3*t2-1);t3<=min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(floord(PB_M+PB_Q-2,32),floord(32*t1-32*t2+PB_Q+28,32)),floord(-64*t1+128*t2+3*PB_M+PB_Q-6,32)),floord(32*t1-64*t2+PB_M+PB_Q+30,32)),floord(-192*t2+11*PB_P+PB_M+7*PB_Q-22,32)),floord(-32*t2+PB_P+PB_M+2*PB_Q-2,32)),floord(-32*t1+32*t2+PB_P+2*PB_M+PB_Q-5,32)),floord(32*t1-96*t2+PB_P+2*PB_M+PB_Q+28,32)),floord(64*t1-96*t2+3*PB_Q+53,64)),floord(32*t1-64*t2+PB_M+3*PB_Q+30,64)),floord(-224*t2+7*PB_P+7*PB_M+4*PB_Q-14,64)),floord(2*PB_P+3*PB_M+3*PB_Q-12,96)),floord(256*t1-384*t2+9*PB_Q+128,160)),floord(32*t1-32*t2+14*PB_M+15*PB_Q-28,480)),floord(480*t1-928*t2+14*PB_M+15*PB_Q+420,480)),floord(416*t1-736*t2+7*PB_M+30*PB_Q+306,640)),floord(800*t1-1536*t2+21*PB_M+27*PB_Q+694,800)),floord(320*t1-1152*t2+21*PB_P+21*PB_M+57*PB_Q+118,992)),floord(160*t1-1056*t2+28*PB_P+28*PB_M+61*PB_Q-56,1056));t3++) {
            if ((PB_Q >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
              for (t4=2;t4<=min(min(30,PB_M-1),PB_P-1);t4++) {
                for (t5=1;t5<=min(min(t4,PB_Q-3),-t4+31);t5++) {
                  lbv=t4+t5;
                  ubv=min(31,t4+PB_Q-3);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4-1][t5][(-t4-t5+t6)+t5+2] = D[t5-1][t4-2] + B[t4][t5][(-t4-t5+t6)+t5+1] + B[t4][t5+1][(-t4-t5+t6)+t5+1] - 1;;
                  }
                }
                for (t5=t4+1;t5<=min(min(min(PB_M,PB_Q-3),-t4+31),2*t4-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                  lbv=t4+t5;
                  ubv=min(31,t4+PB_Q-3);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4-1][t5][(-t4-t5+t6)+t5+2] = D[t5-1][t4-2] + B[t4][t5][(-t4-t5+t6)+t5+1] + B[t4][t5+1][(-t4-t5+t6)+t5+1] - 1;;
                  }
                }
                for (t5=PB_M+1;t5<=min(min(PB_Q-3,-t4+31),2*t4-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
                for (t5=2*t4;t5<=min(min(PB_M,PB_Q-3),-t4+31);t5++) {
                  lbv=t4+t5;
                  ubv=min(31,t4+PB_Q-3);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4-1][t5][(-t4-t5+t6)+t5+2] = D[t5-1][t4-2] + B[t4][t5][(-t4-t5+t6)+t5+1] + B[t4][t5+1][(-t4-t5+t6)+t5+1] - 1;;
                  }
                }
                for (t5=max(PB_Q-2,t4+1);t5<=min(-t4+31,2*t4-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
                for (t5=max(-t4+32,t4+1);t5<=min(31,2*t4-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
              }
            }
            if ((PB_Q <= 3) && (t3 == 0)) {
              for (t4=max(max(max(2,32*t1-32*t2),16*t2+1),32*t2-PB_M+1);t4<=min(min(PB_P-1,32*t2+30),32*t1-32*t2+31);t4++) {
                for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_M-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
              }
            }
            if ((PB_Q >= 4) && (t2 >= ceild(PB_Q-2,32)) && (t3 == 0)) {
              for (t4=max(max(32*t1-32*t2,16*t2+1),32*t2-PB_M+1);t4<=min(min(PB_P-1,32*t2+30),32*t1-32*t2+31);t4++) {
                for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_M-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
              }
            }
            if ((t2 <= floord(PB_Q-3,32)) && (t2 >= ceild(PB_M+1,32)) && (t3 == 0)) {
              for (t4=max(max(32*t1-32*t2,16*t2+1),32*t2-PB_M+1);t4<=min(min(PB_P-1,32*t2+30),32*t1-32*t2+31);t4++) {
                for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_M-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
              }
            }
            if ((t2 <= min(floord(PB_M,32),floord(PB_Q-3,32))) && (t3 == 0)) {
              for (t4=max(max(32*t1-32*t2,-32*t2+32),16*t2+1);t4<=min(min(PB_P-1,32*t2+30),32*t1-32*t2+31);t4++) {
                for (t5=max(32*t2,t4+1);t5<=min(32*t2+31,2*t4-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
              }
            }
            if ((PB_Q >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
              for (t4=PB_M;t4<=min(30,PB_P-1);t4++) {
                for (t5=t4+1;t5<=min(31,t4+PB_M-1);t5++) {
                  A[(-t4+t5)] = C[(-t4+t5)][t4][2] - A[(-t4+t5)-1] * 5;;
                }
              }
            }
            if ((PB_Q >= 4) && (t2 <= min(floord(PB_M,32),floord(PB_Q-3,32))) && (t3 >= 1)) {
              for (t4=max(max(2,32*t1-32*t2),32*t3-PB_Q+3);t4<=min(min(min(PB_M-1,32*t3+30),32*t1-32*t2+31),-32*t2+32*t3+31);t4++) {
                for (t5=max(1,32*t2);t5<=min(min(min(PB_M,PB_Q-3),32*t2+31),32*t3-t4+31);t5++) {
                  lbv=max(32*t3,t4+t5);
                  ubv=min(32*t3+31,t4+PB_Q-3);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4-1][t5][(-t4-t5+t6)+t5+2] = D[t5-1][t4-2] + B[t4][t5][(-t4-t5+t6)+t5+1] + B[t4][t5+1][(-t4-t5+t6)+t5+1] - 1;;
                  }
                }
              }
            }
            if ((PB_Q >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
              for (t4=max(2,PB_P);t4<=min(30,PB_M-1);t4++) {
                for (t5=1;t5<=min(min(PB_M,PB_Q-3),-t4+31);t5++) {
                  lbv=t4+t5;
                  ubv=min(31,t4+PB_Q-3);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4-1][t5][(-t4-t5+t6)+t5+2] = D[t5-1][t4-2] + B[t4][t5][(-t4-t5+t6)+t5+1] + B[t4][t5+1][(-t4-t5+t6)+t5+1] - 1;;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((PB_M >= 3) && (PB_P <= -1) && (PB_Q >= 4)) {
    for (t1=0;t1<=min(floord(PB_M-1,16),floord(PB_M+PB_Q-4,32));t1++) {
      lbp=max(0,ceild(32*t1-PB_M+1,32));
      ubp=min(min(floord(PB_M,32),floord(PB_Q-3,32)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=t1;t3<=min(floord(PB_M+PB_Q-4,32),floord(32*t1-32*t2+PB_Q+28,32));t3++) {
          for (t4=max(max(2,32*t1-32*t2),32*t3-PB_Q+3);t4<=min(min(PB_M-1,32*t3+30),32*t1-32*t2+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(min(PB_M,PB_Q-3),32*t2+31),32*t3-t4+31);t5++) {
              lbv=max(32*t3,t4+t5);
              ubv=min(32*t3+31,t4+PB_Q-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4-1][t5][(-t4-t5+t6)+t5+2] = D[t5-1][t4-2] + B[t4][t5][(-t4-t5+t6)+t5+1] + B[t4][t5+1][(-t4-t5+t6)+t5+1] - 1;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3224112221_00(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
