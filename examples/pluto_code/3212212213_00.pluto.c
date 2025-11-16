#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212212213_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
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
static void init_array(int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
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
static void print_array(int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
void kernel_3212212213_00(int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 2) && (PB_L >= -PB_M+7) && (PB_M >= 4)) {
  for (t1=0;t1<=min(floord(3*PB_L+9*PB_M-31,32),floord(3*PB_L+13*PB_M-51,32));t1++) {
    lbp=max(max(max(max(max(max(max(0,ceild(32*t1-2*PB_L-4*PB_M+15,32)),ceild(32*t1-35*PB_L+70,64)),ceild(32*t1-PB_L-32,64)),ceild(128*t1-17*PB_L-PB_M-57,224)),ceild(128*t1-5*PB_L-PB_M-93,224)),ceild(800*t1-50*PB_L-25*PB_M+75,1376)),ceild(1280*t1-55*PB_L-15*PB_M-755,2208));
    ubp=min(min(min(min(floord(4*t1+3,7),floord(PB_L+5*PB_M-16,32)),floord(PB_L+9*PB_M-36,32)),floord(32*t1+PB_M+28,64)),floord(32*t1+33*PB_M-132,64));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if (PB_M == 4) {
        for (t3=max(max(5,32*t1-32*t2),32*t2+2);t3<=min(min(2*PB_L+1,32*t1-32*t2+31),32*t2+PB_L+32);t3++) {
          for (t4=max(max(3,32*t2),t3-PB_L-1);t4<=min(min(PB_L,32*t2+31),t3-2);t4++) {
            B[1 +2][(t4-1)][(t3-t4)+3][1 -1] = C[(t3-t4)-2][(t4-1)-2][(t4-1)] * D[(t4-1)-2][1][(t3-t4)-2] * 2;;
          }
        }
      }
      if ((PB_L >= 3) && (PB_M >= 5) && (t1 == 0) && (t2 == 0)) {
        for (t3=5;t3<=7;t3++) {
          for (t4=3;t4<=min(t3-2,PB_L+PB_M-4);t4++) {
            lbv=max(2,t4-PB_M+3);
            ubv=min(PB_L-1,t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)+2][t5][(t3-t4)+3][(t4-t5)-1] = C[(t3-t4)-2][t5-2][t5] * D[t5-2][(t4-t5)][(t3-t4)-2] * 2;;
            }
          }
        }
      }
      if (PB_L == 2) {
        for (t3=max(max(max(8,32*t1-32*t2),24*t2+1),32*t2-PB_M+3);t3<=min(min(min(floord(96*t2+PB_M+91,4),4*PB_M-11),32*t2+29),32*t1-32*t2+31);t3++) {
          for (t4=max(max(ceild(4*t3-PB_M+2,3),32*t2),t3+2);t4<=min(min(floord(4*t3-2,3),32*t2+31),t3+PB_M-3);t4++) {
            B[(-t3+t4)+2][1][(4*t3-3*t4-1)+2][(-t3+t4)-1] = B[(4*t3-3*t4-1)+2][1 -1][(-t3+t4)+1][(4*t3-3*t4-1)-1] - B[(-t3+t4)+1][(4*t3-3*t4-1)][1 +2][(-t3+t4)-2] - 3;;
          }
        }
      }
      if ((PB_L >= 3) && (PB_M >= 5) && (t2 <= floord(PB_L+PB_M-4,32))) {
        for (t3=max(max(max(8,32*t1-32*t2),24*t2+1),32*t2-PB_M+3);t3<=min(32*t2+1,32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,t3+2);t4<=min(min(floord(4*t3-2,3),32*t2+31),t3+PB_M-3);t4++) {
            lbv=max(1,4*t3-3*t4-PB_M+3);
            ubv=min(PB_L-1,4*t3-3*t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(-t3+t4)+2][t5][(4*t3-3*t4-t5)+2][(-t3+t4)-1] = B[(4*t3-3*t4-t5)+2][t5-1][(-t3+t4)+1][(4*t3-3*t4-t5)-1] - B[(-t3+t4)+1][(4*t3-3*t4-t5)][t5+2][(-t3+t4)-2] - 3;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (t2 >= ceild(PB_L+PB_M-3,32))) {
        for (t3=max(max(32*t1-32*t2,24*t2+1),32*t2-PB_M+3);t3<=min(min(floord(96*t2+PB_L+PB_M+89,4),PB_L+4*PB_M-13),32*t1-32*t2+31);t3++) {
          for (t4=max(max(ceild(4*t3-PB_L-PB_M+4,3),32*t2),t3+2);t4<=min(min(floord(4*t3-2,3),32*t2+31),t3+PB_M-3);t4++) {
            lbv=max(1,4*t3-3*t4-PB_M+3);
            ubv=min(PB_L-1,4*t3-3*t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(-t3+t4)+2][t5][(4*t3-3*t4-t5)+2][(-t3+t4)-1] = B[(4*t3-3*t4-t5)+2][t5-1][(-t3+t4)+1][(4*t3-3*t4-t5)-1] - B[(-t3+t4)+1][(4*t3-3*t4-t5)][t5+2][(-t3+t4)-2] - 3;;
            }
          }
        }
      }
      if ((PB_L >= 3) && (PB_M >= 5) && (t1 == 2*t2) && (t1 <= floord(PB_L+PB_M-4,16))) {
        for (t3=max(8,16*t1+2);t3<=min(min(min(floord(48*t1+PB_L+PB_M+89,4),16*t1+29),PB_L+4*PB_M-13),2*PB_L+PB_M-3);t3++) {
          for (t4=max(max(3,16*t1),t3-PB_L-1);t4<=min(t3-2,PB_L+PB_M-4);t4++) {
            lbv=max(2,t4-PB_M+3);
            ubv=min(PB_L-1,t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              if (t1%2 == 0) {
                B[(t4-t5)+2][t5][(t3-t4)+3][(t4-t5)-1] = C[(t3-t4)-2][t5-2][t5] * D[t5-2][(t4-t5)][(t3-t4)-2] * 2;;
              }
            }
          }
          for (t4=max(ceild(4*t3-PB_L-PB_M+4,3),t3+2);t4<=min(min(floord(4*t3-2,3),16*t1+31),t3+PB_M-3);t4++) {
            lbv=max(1,4*t3-3*t4-PB_M+3);
            ubv=min(PB_L-1,4*t3-3*t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              if (t1%2 == 0) {
                B[(-t3+t4)+2][t5][(4*t3-3*t4-t5)+2][(-t3+t4)-1] = B[(4*t3-3*t4-t5)+2][t5-1][(-t3+t4)+1][(4*t3-3*t4-t5)-1] - B[(-t3+t4)+1][(4*t3-3*t4-t5)][t5+2][(-t3+t4)-2] - 3;;
              }
            }
          }
        }
      }
      if ((t1 == 2*t2) && (t1 <= floord(PB_L+PB_M-4,16))) {
        for (t3=ceild(48*t1+PB_L+PB_M+90,4);t3<=min(min(16*t1+29,PB_L+4*PB_M-13),2*PB_L+PB_M-3);t3++) {
          for (t4=max(16*t1,t3-PB_L-1);t4<=PB_L+PB_M-4;t4++) {
            lbv=t4-PB_M+3;
            ubv=min(PB_L-1,t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              if (t1%2 == 0) {
                B[(t4-t5)+2][t5][(t3-t4)+3][(t4-t5)-1] = C[(t3-t4)-2][t5-2][t5] * D[t5-2][(t4-t5)][(t3-t4)-2] * 2;;
              }
            }
          }
        }
      }
      if ((PB_L >= 3) && (t1 == 2*t2) && (t1 <= floord(PB_L+PB_M-4,16))) {
        for (t3=2*PB_L+PB_M-2;t3<=min(floord(48*t1+PB_L+PB_M+89,4),PB_L+4*PB_M-13);t3++) {
          for (t4=ceild(4*t3-PB_L-PB_M+4,3);t4<=min(min(floord(4*t3-2,3),16*t1+31),t3+PB_M-3);t4++) {
            lbv=max(1,4*t3-3*t4-PB_M+3);
            ubv=min(PB_L-1,4*t3-3*t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              if (t1%2 == 0) {
                B[(-t3+t4)+2][t5][(4*t3-3*t4-t5)+2][(-t3+t4)-1] = B[(4*t3-3*t4-t5)+2][t5-1][(-t3+t4)+1][(4*t3-3*t4-t5)-1] - B[(-t3+t4)+1][(4*t3-3*t4-t5)][t5+2][(-t3+t4)-2] - 3;;
              }
            }
          }
        }
      }
      if ((PB_M >= 5) && (t1 == 2*t2) && (t1 <= floord(PB_L+PB_M-4,16))) {
        for (t3=PB_L+4*PB_M-12;t3<=min(16*t1+29,2*PB_L+PB_M-3);t3++) {
          for (t4=max(16*t1,t3-PB_L-1);t4<=PB_L+PB_M-4;t4++) {
            lbv=t4-PB_M+3;
            ubv=min(PB_L-1,t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              if (t1%2 == 0) {
                B[(t4-t5)+2][t5][(t3-t4)+3][(t4-t5)-1] = C[(t3-t4)-2][t5-2][t5] * D[t5-2][(t4-t5)][(t3-t4)-2] * 2;;
              }
            }
          }
        }
      }
      if ((PB_L >= 3) && (PB_M >= 5) && (t2 <= floord(PB_L+PB_M-4,32))) {
        for (t3=max(32*t1-32*t2,32*t2+30);t3<=min(min(2*PB_L+PB_M-3,32*t1-32*t2+31),32*t2+PB_L+32);t3++) {
          for (t4=max(max(3,32*t2),t3-PB_L-1);t4<=min(min(32*t2+31,t3-2),PB_L+PB_M-4);t4++) {
            lbv=max(2,t4-PB_M+3);
            ubv=min(PB_L-1,t4-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              B[(t4-t5)+2][t5][(t3-t4)+3][(t4-t5)-1] = C[(t3-t4)-2][t5-2][t5] * D[t5-2][(t4-t5)][(t3-t4)-2] * 2;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int vb = vB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_4D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,vB,xb,yb,zb,vb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212212213_00(xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
