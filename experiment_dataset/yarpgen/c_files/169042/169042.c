/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((!var_7) ? var_0 : (255 / var_12))), (((var_10 ? ((var_6 << (24420 - 24396))) : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 += ((((255 ? (arr_2 [4]) : var_3)) << (((~0) + 44))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, 5));
                                arr_13 [1] [i_1] [0] [i_1] [11] [i_4] = ((((((((var_2 ? var_4 : (arr_6 [7] [8] [i_1] [i_3])))) ? (((arr_4 [2] [13] [i_2]) ? 18 : 2)) : 0))) ? ((-((max((arr_12 [i_0] [i_1] [8] [i_1] [13]), (arr_4 [i_0] [i_1] [13])))))) : ((((max(1879480697, var_6))) ? ((var_7 ? (arr_1 [13]) : 240)) : var_9))));
                                arr_14 [2] [11] [i_1] [i_1] [i_1] [8] = 102;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((-((((var_14 - -1879480695) == (4095 & -28494))))));
    #pragma endscop
}
