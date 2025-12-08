#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212112213_00.h"
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
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
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
void kernel_3212112213_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= max(0,ceild(-2*PB_P+10,5))) && (PB_P >= 0)) {
  for (t1=0;t1<=min(floord(PB_M+PB_P-2,8),floord(PB_M+4*PB_P-1,32));t1++) {
    lbp=max(max(max(max(max(0,ceild(32*t1-PB_M-PB_P+1,32)),ceild(32*t1-PB_M,48)),ceild(64*t1-3*PB_M-2*PB_P+4,64)),ceild(64*t1-2*PB_M-PB_P+2,80)),ceild(160*t1-5*PB_M-PB_P+5,240));
    ubp=min(min(min(floord(3*PB_M+3*PB_P-6,32),floord(64*t1+PB_M+PB_P+60,96)),floord(128*t1+33*PB_M+95*PB_P-66,1184)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(0,ceild(2*t1-3*t2,2)),ceild(32*t1-32*t2-PB_P,32));t3<=min(min(min(min(min(min(floord(PB_M,32),floord(-32*t2+PB_M+3*PB_P-1,32)),floord(-32*t1+32*t2+2*PB_M+PB_P-2,32)),floord(64*t1-96*t2+PB_M+PB_P+60,32)),floord(5*PB_M+PB_P-5,160)),floord(-32*t2+6*PB_M+3*PB_P-6,192)),floord(160*t1-1216*t2+33*PB_M+94*PB_P-33,1056));t3++) {
        if ((t2 <= min(floord(PB_L-2,32),floord(-32*t3+PB_M-1,32))) && (t3 >= 1)) {
          for (t4=32*t1-32*t2;t4<=min(min(32*t3+31,32*t1-32*t2+31),-32*t2+PB_M-1);t4++) {
            for (t5=32*t2;t5<=min(min(min(PB_L-2,32*t2+31),-32*t3+PB_M-1),-t4+PB_M-1);t5++) {
              lbv=max(32*t3,t4);
              ubv=min(32*t3+31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
          }
        }
        if ((t1 == t2) && (t1 <= min(floord(PB_L-2,32),floord(PB_M-2,32))) && (t3 == 0)) {
          for (t4=0;t4<=min(2,-32*t1+PB_M-1);t4++) {
            for (t5=32*t1;t5<=min(min(min(PB_L-2,PB_M-2),32*t1+31),-t4+PB_M-1);t5++) {
              lbv=max(1,t4);
              ubv=min(31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=3;t4<=min(min(min(31,floord(32*t1-PB_P+1,2)),PB_P-2),-32*t1+PB_M-1);t4++) {
            for (t5=32*t1;t5<=min(min(PB_L-2,32*t1+31),-t4+PB_M-1);t5++) {
              lbv=t4;
              ubv=min(31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
          }
        }
        if ((t2 >= ceild(PB_L-1,32)) && (t3 == 0)) {
          for (t4=max(max(3,ceild(32*t2-PB_P+2,2)),32*t1-32*t2);t4<=min(min(PB_P-2,16*t2+14),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,2*t4+PB_P-2);t5++) {
              B[t4-2][(-2*t4+t5)] = B[t4-2][(-2*t4+t5)-1] - B[t4-3][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1] * B[(-2*t4+t5)-2][t4+1] + 3;;
            }
          }
        }
        if ((t2 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=max(max(32,ceild(32*t2-PB_P+2,2)),32*t1-32*t2);t4<=min(min(PB_P-2,16*t2+14),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,2*t4+PB_P-2);t5++) {
              B[t4-2][(-2*t4+t5)] = B[t4-2][(-2*t4+t5)-1] - B[t4-3][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1] * B[(-2*t4+t5)-2][t4+1] + 3;;
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=max(3,ceild(32*t1-PB_P+2,2));t4<=min(min(min(31,PB_P-2),16*t1+14),-32*t1+PB_M-1);t4++) {
            for (t5=32*t1;t5<=min(min(PB_L-2,2*t4+1),-t4+PB_M-1);t5++) {
              lbv=t4;
              ubv=min(31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
            for (t5=max(32*t1,2*t4+2);t5<=min(min(min(PB_L-2,32*t1+31),-t4+PB_M-1),2*t4+PB_P-2);t5++) {
              B[t4-2][(-2*t4+t5)] = B[t4-2][(-2*t4+t5)-1] - B[t4-3][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1] * B[(-2*t4+t5)-2][t4+1] + 3;;
              lbv=t4;
              ubv=min(31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
            for (t5=2*t4+PB_P-1;t5<=min(min(PB_L-2,32*t1+31),-t4+PB_M-1);t5++) {
              lbv=t4;
              ubv=min(31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
            for (t5=max(-t4+PB_M,2*t4+2);t5<=min(min(PB_L-2,32*t1+31),2*t4+PB_P-2);t5++) {
              B[t4-2][(-2*t4+t5)] = B[t4-2][(-2*t4+t5)-1] - B[t4-3][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1] * B[(-2*t4+t5)-2][t4+1] + 3;;
            }
            for (t5=max(PB_L-1,2*t4+2);t5<=min(32*t1+31,2*t4+PB_P-2);t5++) {
              B[t4-2][(-2*t4+t5)] = B[t4-2][(-2*t4+t5)-1] - B[t4-3][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1] * B[(-2*t4+t5)-2][t4+1] + 3;;
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=max(3,PB_P-1);t4<=min(min(31,16*t1+14),-32*t1+PB_M-1);t4++) {
            for (t5=32*t1;t5<=min(min(PB_L-2,32*t1+31),-t4+PB_M-1);t5++) {
              lbv=t4;
              ubv=min(31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=max(max(3,ceild(32*t1-PB_P+2,2)),-32*t1+PB_M);t4<=min(min(31,PB_P-2),16*t1+14);t4++) {
            for (t5=max(32*t1,2*t4+2);t5<=min(32*t1+31,2*t4+PB_P-2);t5++) {
              B[t4-2][(-2*t4+t5)] = B[t4-2][(-2*t4+t5)-1] - B[t4-3][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1] * B[(-2*t4+t5)-2][t4+1] + 3;;
            }
          }
        }
        if ((t1 == t2) && (t1 <= floord(PB_L-2,32)) && (t3 == 0)) {
          for (t4=16*t1+15;t4<=min(31,-32*t1+PB_M-1);t4++) {
            for (t5=32*t1;t5<=min(min(PB_L-2,32*t1+31),-t4+PB_M-1);t5++) {
              lbv=t4;
              ubv=min(31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
              }
            }
          }
        }
      }
    }
  }
}
if ((PB_L >= 2) && (PB_M >= 2) && (PB_P <= -1)) {
  for (t1=0;t1<=floord(PB_M-1,32);t1++) {
    lbp=0;
    ubp=min(min(floord(PB_L-2,32),floord(PB_M-2,32)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=t1-t2;t3<=floord(-32*t2+PB_M-1,32);t3++) {
        for (t4=32*t1-32*t2;t4<=min(32*t1-32*t2+31,-32*t2+PB_M-1);t4++) {
          for (t5=32*t2;t5<=min(min(min(min(PB_L-2,PB_M-2),32*t2+31),-32*t3+PB_M-1),-t4+PB_M-1);t5++) {
            lbv=max(max(1,32*t3),t4);
            ubv=min(32*t3+31,-t5+PB_M-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[t4][t6+t5][t6-1] = C[t4][t5+1][0] - C[t6][t5][t4] * 2;;
            }
          }
        }
      }
    }
  }
}
if ((PB_M <= -1) && (PB_P >= 5)) {
  for (t1=0;t1<=floord(PB_P-2,8);t1++) {
    lbp=max(ceild(2*t1,3),ceild(32*t1-PB_P+2,32));
    ubp=min(min(floord(3*PB_P-6,32),floord(64*t1+PB_P+60,96)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t4=max(max(3,ceild(32*t2-PB_P+2,2)),32*t1-32*t2);t4<=min(min(PB_P-2,16*t2+14),32*t1-32*t2+31);t4++) {
        for (t5=max(32*t2,2*t4+2);t5<=min(32*t2+31,2*t4+PB_P-2);t5++) {
          B[t4-2][(-2*t4+t5)] = B[t4-2][(-2*t4+t5)-1] - B[t4-3][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1] * B[(-2*t4+t5)-2][t4+1] + 3;;
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
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212112213_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
