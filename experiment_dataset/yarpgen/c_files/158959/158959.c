/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((0 >> (137438953471 - 137438953453)));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_15 = (((arr_5 [i_3 - 3] [i_2 - 1] [i_2 + 1] [i_0 - 2]) < (arr_0 [i_1])));
                        arr_10 [i_0 - 2] [16] [i_2 - 1] [i_1] |= (+-137438953471);
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_16 = (min(var_16, (arr_9 [i_1] [i_1] [i_2] [0])));

                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_18 [i_0] [1] [i_2] [i_4] [i_5 - 1] = var_10;
                            var_17 = 137438953471;
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_6] [i_2] [i_0 - 2] = (((((-3873784474410653186 ? (((-83 ? var_0 : (arr_11 [i_2] [i_2 + 3])))) : (arr_9 [i_2] [i_2 + 1] [i_4 - 1] [i_6])))) ? ((var_10 ? (min(137438953471, var_13)) : var_7)) : (!var_13)));
                            arr_22 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_4] [i_4 - 3] [i_4] = -18773;
                            var_18 -= (arr_6 [i_1]);
                            var_19 = 18773;
                        }
                        for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_20 = arr_4 [i_0 - 1] [i_2] [i_2] [i_7];
                            var_21 = (max(0, ((min(((min((arr_11 [i_2] [i_2]), (arr_9 [i_2] [i_2 + 1] [9] [i_2])))), (~52624))))));
                            arr_25 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] [i_7] = 12912;
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_4));
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_23 = -1583438190;
                    var_24 = (arr_30 [i_9] [i_8]);
                    var_25 = (min(var_7, (((var_9 <= (~var_6))))));
                    var_26 = -441191729;
                }
            }
        }
    }
    var_27 = (min(var_27, (((~(((var_11 == var_0) | 7030)))))));
    #pragma endscop
}
