/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_6 ? ((var_3 ? var_8 : 1176515204)) : var_6))) - var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 -= (!-1706529247825408173);

            for (int i_2 = 4; i_2 < 11;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    var_12 = ((3684559753 == (arr_7 [i_0] [i_1] [i_2 + 3] [i_3])));
                    arr_11 [i_0] [i_1] [i_1] [0] [i_1] [i_3] = (arr_5 [13] [i_1] [i_0]);
                    var_13 = var_8;
                }
                var_14 *= ((var_9 << (((arr_10 [i_2 - 3] [i_2 + 3] [i_2 - 3] [i_2 - 3]) - 1096100363))));
                var_15 += (~0);
            }
            for (int i_4 = 4; i_4 < 11;i_4 += 1) /* same iter space */
            {
                var_16 = 1;
                var_17 = var_0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_18 -= var_7;
                            var_19 = ((123 ? (var_8 || 610407536) : ((var_7 ? var_4 : -941144052))));
                        }
                    }
                }
                arr_21 [i_0] [i_1] [i_4] = (!var_1);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_20 = (((((var_0 ? (arr_10 [7] [i_1] [0] [i_7]) : 6))) ? 2772 : -1414364401901008862));
                            var_21 -= (((arr_9 [i_8] [i_1] [i_1] [i_7]) <= var_0));
                            var_22 += (((var_2 ? (arr_17 [1] [i_7] [i_4] [i_0] [i_0]) : (arr_4 [i_8] [i_4 - 2]))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [3] = var_3;
                            var_23 = (!var_9);
                        }
                    }
                }
            }
        }
        var_24 = ((-var_7 ? var_9 : (~var_4)));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_29 [i_9] [i_9] = (arr_28 [i_9]);
        var_25 ^= (((((arr_28 [i_9]) ? var_8 : var_8))) ? (((var_4 >> (var_8 + 31697)))) : ((var_9 ? var_9 : var_5)));
    }
    #pragma endscop
}
