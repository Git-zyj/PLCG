/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_11) ? var_5 : (((288230376151711743 == var_2) ^ 288230376151711766))));
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = var_3;
                    arr_9 [i_0] [7] [6] [i_2] = var_4;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_2] = ((((((arr_3 [i_1]) & 18158513697557839850))) ? (18158513697557839876 || 1) : 1));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_22 = (min(var_22, var_3));
                            arr_15 [i_0] [2] [i_2] [i_3] [i_4] = var_3;
                            arr_16 [1] [9] [i_2] [5] [9] [i_1] [4] = (((arr_0 [i_0]) ? (arr_0 [i_4]) : var_17));
                            var_23 *= ((-22 ? 1 : 69));
                            var_24 -= 65524;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_25 = ((!(0 + var_13)));
                            arr_20 [4] [i_1] [4] [i_3] [i_5] = ((var_6 ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [i_0]) : var_11));
                        }
                        var_26 = var_17;
                        arr_21 [i_3] [i_2] [i_1] [i_0] = ((var_18 ? -2592192473 : 44350));
                    }
                    var_27 = (((((946177384 ? 18446744073709551615 : 288230376151711766))) ? (arr_10 [i_2] [1]) : ((((!(~var_4)))))));
                    var_28 = (max(var_28, ((((((!-4784) <= var_12)) ? (((max((arr_2 [i_0] [i_2]), 12)))) : 0)))));
                }
            }
        }
    }
    var_29 = var_7;
    #pragma endscop
}
