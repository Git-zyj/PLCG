#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214211123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
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
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
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
                for (i_3 = 0; i_3 < vc; i_3++) {
                    sum_C += C[i_0][i_1][i_2][i_3];
                }
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
void kernel_3214211123_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  for (t1=0;t1<=floord(5*PB_M-5,32);t1++) {
    lbp=max(0,ceild(96*t1-3*PB_M-13,128));
    ubp=min(min(min(floord(3*PB_M-3,32),floord(32*t1+PB_M+30,64)),floord(128*t1+3*PB_M+61,224)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(max(max(0,ceild(32*t1-40*t2-PB_M-7,8)),ceild(16*t2-PB_M-13,16)),ceild(-32*t1+64*t2-PB_M-29,16)),ceild(32*t1-32*t2-PB_M-28,32));t3<=min(min(min(min(min(min(floord(PB_M-2,16),floord(-32*t1+64*t2+PB_M+18,32)),floord(16*t1-16*t2+PB_M+12,32)),floord(64*t1-96*t2+PB_M+59,32)),floord(80*t1-112*t2+PB_M+44,32)),floord(-96*t1+160*t2+3*PB_M+26,48)),floord(32*t2+3*PB_M+22,96));t3++) {
        if ((PB_P >= 5) && (t3 >= 1) && (t3 <= floord(PB_P+PB_M-5,32))) {
          for (t4=max(max(max(max(max(6,ceild(32*t2+32*t3-PB_M+3,2)),32*t1-32*t2),16*t2+2),32*t2-PB_M+1),64*t3-2*PB_M+6);t4<=min(min(min(min(min(min(floord(32*t2+PB_P+29,2),floord(64*t2+62,3)),2*PB_M-2),PB_P+PB_M-3),32*t1-32*t2+31),16*t2+16*t3+30),32*t3+PB_M+28);t4++) {
            for (t5=max(max(max(ceild(3*t4,2),32*t2),-32*t3+2*t4-29),2*t4-PB_P+2);t5<=min(min(min(32*t2+31,2*t4-3),t4+PB_M-1),-32*t3+2*t4+PB_M-3);t5++) {
              lbv=max(32*t3,2*t4-t5+2);
              ubv=min(32*t3+31,2*t4-t5+PB_M-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[(-t4+t5)-1][(-2*t4+t5+t6)][(2*t4-t5)-1] = C[(-2*t4+t5+t6)][(-2*t4+t5+t6)][(-t4+t5)][(2*t4-t5)+1] - A[(-t4+t5)][(-2*t4+t5+t6)+2][(2*t4-t5)-3] - A[(-t4+t5)-1][(-2*t4+t5+t6)-2][(2*t4-t5)-2] + 2;;
              }
            }
          }
        }
        if ((PB_P >= 5) && (t2 >= ceild(PB_M-1,32)) && (t3 == 0)) {
          for (t4=max(max(32*t1-32*t2,16*t2+2),32*t2-PB_M+1);t4<=min(min(min(min(min(min(floord(32*t2+PB_P+29,2),floord(64*t2+62,3)),PB_M+28),2*PB_M-2),16*t2+30),PB_P+PB_M-3),32*t1-32*t2+31);t4++) {
            for (t5=max(max(max(ceild(3*t4,2),32*t2),2*t4-29),2*t4-PB_P+2);t5<=min(min(32*t2+31,2*t4-3),t4+PB_M-1);t5++) {
              lbv=2*t4-t5+2;
              ubv=min(31,2*t4-t5+PB_M-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[(-t4+t5)-1][(-2*t4+t5+t6)][(2*t4-t5)-1] = C[(-2*t4+t5+t6)][(-2*t4+t5+t6)][(-t4+t5)][(2*t4-t5)+1] - A[(-t4+t5)][(-2*t4+t5+t6)+2][(2*t4-t5)-3] - A[(-t4+t5)-1][(-2*t4+t5+t6)-2][(2*t4-t5)-2] + 2;;
              }
            }
          }
        }
        if ((PB_P <= 4) && (t2 <= floord(PB_M-2,32)) && (t3 == 0)) {
          for (t4=32*t1-32*t2;t4<=min(PB_M-1,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_M-2,32*t2+31);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
          }
        }
        if ((PB_P >= 5) && (t2 <= floord(PB_M-2,32)) && (t3 == 0)) {
          for (t4=32*t1-32*t2;t4<=min(16*t2+1,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_M-2,32*t2+31);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
          }
        }
        if ((PB_P >= 5) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=2;t4<=min(5,PB_M-1);t4++) {
            for (t5=0;t5<=min(31,PB_M-2);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
          }
        }
        if ((PB_P >= 5) && (t2 <= floord(PB_M-2,32)) && (t3 == 0)) {
          for (t4=max(max(6,32*t1-32*t2),16*t2+2);t4<=min(min(min(min(floord(32*t2+PB_P+29,2),floord(64*t2+62,3)),PB_M-1),16*t2+30),32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_M-2,2*t4-30);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
            for (t5=max(32*t2,2*t4-29);t5<=min(PB_M-2,2*t4-PB_P+1);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
            for (t5=max(max(32*t2,2*t4-29),2*t4-PB_P+2);t5<=min(floord(3*t4-1,2),PB_M-2);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
            for (t5=max(max(max(ceild(3*t4,2),32*t2),2*t4-29),2*t4-PB_P+2);t5<=min(min(PB_M-2,32*t2+31),2*t4-3);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
              lbv=2*t4-t5+2;
              ubv=min(31,2*t4-t5+PB_M-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[(-t4+t5)-1][(-2*t4+t5+t6)][(2*t4-t5)-1] = C[(-2*t4+t5+t6)][(-2*t4+t5+t6)][(-t4+t5)][(2*t4-t5)+1] - A[(-t4+t5)][(-2*t4+t5+t6)+2][(2*t4-t5)-3] - A[(-t4+t5)-1][(-2*t4+t5+t6)-2][(2*t4-t5)-2] + 2;;
              }
            }
            for (t5=max(max(max(ceild(3*t4,2),PB_M-1),2*t4-29),2*t4-PB_P+2);t5<=min(32*t2+31,2*t4-3);t5++) {
              lbv=2*t4-t5+2;
              ubv=min(31,2*t4-t5+PB_M-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[(-t4+t5)-1][(-2*t4+t5+t6)][(2*t4-t5)-1] = C[(-2*t4+t5+t6)][(-2*t4+t5+t6)][(-t4+t5)][(2*t4-t5)+1] - A[(-t4+t5)][(-2*t4+t5+t6)+2][(2*t4-t5)-3] - A[(-t4+t5)-1][(-2*t4+t5+t6)-2][(2*t4-t5)-2] + 2;;
              }
            }
            for (t5=2*t4-2;t5<=min(PB_M-2,32*t2+31);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
          }
        }
        if ((PB_M >= 5) && (PB_P >= 5) && (t1 == 2*t2) && (t1 <= floord(PB_M-2,16)) && (t3 == 0)) {
          for (t4=max(6,PB_M);t4<=min(min(min(floord(16*t1+PB_P+29,2),floord(32*t1+62,3)),2*PB_M-2),PB_P+PB_M-3);t4++) {
            for (t5=max(ceild(3*t4,2),2*t4-PB_P+2);t5<=min(min(16*t1+31,2*t4-3),t4+PB_M-1);t5++) {
              lbv=2*t4-t5+2;
              ubv=min(31,2*t4-t5+PB_M-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                if (t1%2 == 0) {
                  A[(-t4+t5)-1][(-2*t4+t5+t6)][(2*t4-t5)-1] = C[(-2*t4+t5+t6)][(-2*t4+t5+t6)][(-t4+t5)][(2*t4-t5)+1] - A[(-t4+t5)][(-2*t4+t5+t6)+2][(2*t4-t5)-3] - A[(-t4+t5)-1][(-2*t4+t5+t6)-2][(2*t4-t5)-2] + 2;;
                }
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t3 == 0)) {
          for (t4=ceild(32*t1+63,3);t4<=min(min(floord(16*t1+PB_P+29,2),PB_M-1),8*t1+30);t4++) {
            for (t5=16*t1;t5<=min(PB_M-2,16*t1+31);t5++) {
              if (t1%2 == 0) {
                B[t4][t5+1] = D[t5+1][t4] * 1;;
              }
            }
          }
        }
        if ((PB_P >= 5) && (t2 <= floord(PB_M-2,32)) && (t3 == 0)) {
          for (t4=max(ceild(32*t2+PB_P+30,2),32*t1-32*t2);t4<=min(min(PB_M-1,16*t2+30),32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_M-2,32*t2+31);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
            }
          }
        }
        if ((PB_P >= 5) && (t2 <= floord(PB_M-2,32)) && (t3 == 0)) {
          for (t4=max(32*t1-32*t2,16*t2+31);t4<=min(PB_M-1,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_M-2,32*t2+31);t5++) {
              B[t4][t5+1] = D[t5+1][t4] * 1;;
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
int xc = xC;
int yc = yC;
int zc = zC;
int vc = vC;
int xd = xD;
int yd = yD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3214211123_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
