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
void kernel_3212112213_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7, t8;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 3) && (PB_Q <= -1)) {
  for (t4=0;t4<=floord(3*PB_M-5,32);t4++) {
    for (t5=max(ceild(t4,2),ceild(32*t4-PB_M+1,32));t5<=min(min(floord(PB_M-2,16),floord(32*t4+PB_M+28,64)),t4);t5++) {
      for (t6=max(32*t4-32*t5,32*t5-PB_M+3);t6<=min(PB_M-1,32*t4-32*t5+31);t6++) {
        for (t7=max(32*t5,t6);t7<=min(32*t5+31,t6+PB_M-3);t7++) {
          B[(-t6+t7)+1] = B[(-t6+t7)] * B[(-t6+t7)+2] + 2;;
        }
      }
    }
  }
}
for (t1=0;t1<=floord(PB_Q,16);t1++) {
  for (t2=max(0,ceild(32*t1-PB_Q,32));t2<=floord(t1,2);t2++) {
    for (t3=t1+t2;t3<=min(min(min(min(floord(-960*t1+992*t2+31*PB_Q,16),floord(32*t2+PB_Q+30,16)),floord(32*t1+32*t2+PB_Q+92,32)),floord(96*t1-96*t2+PB_Q+90,32)),floord(48*t1-48*t2+23*PB_Q,196));t3++) {
      if (PB_M <= -1) {
        for (t4=max(max(max(max(2,ceild(32*t3-PB_Q+3,3)),32*t1-32*t2),32*t2+1),-64*t2+32*t3-PB_Q-61);t4<=min(min(PB_Q-1,32*t3+29),32*t1-32*t2+31);t4++) {
          for (t5=max(max(1,ceild(32*t3-t4-PB_Q+1,2)),32*t2);t5<=min(min(floord(32*t3-t4+31,2),32*t2+31),t4-1);t5++) {
            for (t6=max(32*t3,t4+2*t5);t6<=min(32*t3+31,t4+2*t5+PB_Q-1);t6++) {
              A[(-t4-2*t5+t6)][t4][t5] = C[t5][(-t4-2*t5+t6)][t4+2] + C[t5][t4+1][t4+2] * A[t4-1][t5][(-t4-2*t5+t6)] - A[t5-1][t4][(-t4-2*t5+t6)] * 4;;
            }
          }
        }
      }
      if (PB_M >= 0) {
        for (t4=max(max(max(max(max(ceild(-2*PB_M+6,3),ceild(96*t2-PB_M+3,3)),ceild(32*t3-PB_Q-PB_M+3,3)),ceild(-96*t1+96*t2+992*t3-31*PB_Q,90)),32*t1-32*t2),-64*t2+32*t3-PB_Q-61);t4<=min(min(min(min(min(floord(8*PB_Q+3*PB_M-8,8),floord(1024*t3+3*PB_M+928,32)),floord(1024*t1-1024*t2+3*PB_M+992,32)),floord(288*t3+311*PB_Q+30*PB_M-50,320)),floord(288*t2-144*t3+329*PB_Q+30*PB_M-50,320)),floord(864*t1-864*t2+997*PB_Q+96*PB_M-160,1024));t4++) {
          for (t5=max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(ceild(-32*t3+t4-27,2),ceild(-32*t1+32*t2+t4-29,2)),ceild(-32*t1+96*t2+t4-31,2)),ceild(-64*t1+64*t2+32*t3+t4-PB_Q-61,2)),ceild(-PB_M+3,3)),ceild(96*t3-3*t4-3*PB_Q-PB_M+3,6)),ceild(-32*t3+10*t4-9*PB_Q,20)),ceild(-32*t2+336*t3+10*t4-31*PB_Q,20)),ceild(-32*t1+32*t2+t4,31)),ceild(-1024*t3+32*t4-PB_M-896,32)),ceild(-1024*t1+1024*t2+32*t4-PB_M-960,32)),ceild(-1024*t1+2048*t2+32*t4-PB_M-992,32)),ceild(-1536*t1+1536*t2+512*t3+32*t4-16*PB_Q-PB_M-1472,32)),ceild(-32*t2+992*t3-31*t4-31*PB_Q,61)),ceild(-32*t1+32*t2+992*t3-30*t4-31*PB_Q,62)),ceild(-96*t1+96*t2+32*t4-29*PB_Q,64)),ceild(-32*t1+2080*t2+32*t4-31*PB_Q,64)),ceild(-96*t1+96*t2+1024*t3+32*t4-93*PB_Q,64)),ceild(-672*t3+320*t4-299*PB_Q-10*PB_M+10,320)),ceild(-672*t2+5456*t3+320*t4-661*PB_Q-10*PB_M+10,320)),ceild(-2016*t1+2016*t2+1024*t4-961*PB_Q-32*PB_M+32,1024)),ceild(-992*t1+33760*t2+1024*t4-993*PB_Q-32*PB_M+32,1024)),ceild(-2016*t1+2016*t2+16384*t3+1024*t4-1985*PB_Q-32*PB_M+32,1024)),32*t2);t5<=min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(floord(-96*t1+96*t2+32*t3+2*t4+31,2),floord(512*t2+PB_M+496,16)),floord(-15936*t1+16448*t2+498*PB_Q+PB_M-2,16)),floord(1024*t3-32*t4+7*PB_M+992,64)),floord(-1024*t1+3072*t2+32*t4+PB_M+1984,64)),floord(1024*t1-1024*t2+32*t4+PB_M+928,64)),floord(-63616*t1+65664*t2+32*t4+1956*PB_Q+PB_M+28,64)),floord(-2048*t1+2048*t2+1024*t3+32*t4+PB_M+992,64)),floord(4096*t2-1024*t3+32*t4+32*PB_Q+PB_M+3936,64)),floord(96*t1-96*t2-32*t3+90*t4+PB_Q,90)),floord(160*t3+81*PB_Q+6*PB_M-12,96)),floord(4608*t2-5312*t4+5312*PB_Q+507*PB_M-848,144)),floord(2304*t3-2752*t4+2680*PB_Q+267*PB_M-448,144)),floord(1024*t3+96*t4+3*PB_M+864,192)),floord(480*t1-480*t2+241*PB_Q+16*PB_M-32,256)),floord(512*t1-512*t2+482*t4+PB_M-2,498)),floord(992*t1-992*t2+256*t4+225*PB_Q+8*PB_M+224,512)),floord(992*t3+288*t4+195*PB_Q+9*PB_M+252,576)),floord(1024*t1-1024*t2+932*t4+PB_M+28,964)),-t1+2*t2+t4),-1024*t1+1056*t2+t4+31*PB_Q),-32*t1+64*t2+t4+31),96*t2-32*t3+t4+PB_Q+92);t5++) {
            if ((t1 >= ceild(32*t2+t4-31,32)) && (t2 >= ceild(t5-31,32)) && (t4 <= PB_Q-1) && (t4 >= t5+1) && (t5 >= 1)) {
              for (t6=max(32*t3,t4+2*t5);t6<=min(32*t3+31,t4+2*t5+PB_Q-1);t6++) {
                A[(-t4-2*t5+t6)][t4][t5] = C[t5][(-t4-2*t5+t6)][t4+2] + C[t5][t4+1][t4+2] * A[t4-1][t5][(-t4-2*t5+t6)] - A[t5-1][t4][(-t4-2*t5+t6)] * 4;;
              }
            }
            if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
              for (t6=max(32*t4-32*t5,32*t5-PB_M+3);t6<=min(min(PB_M-1,32*t5+31),32*t4-32*t5+31);t6++) {
                for (t7=max(32*t5,t6);t7<=min(32*t5+31,t6+PB_M-3);t7++) {
                  B[(-t6+t7)+1] = B[(-t6+t7)] * B[(-t6+t7)+2] + 2;;
                }
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
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212112213_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
