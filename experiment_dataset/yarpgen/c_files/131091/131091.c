/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min(var_12, ((var_12 ? 5 : var_13)))), (((var_13 ? (var_15 && var_14) : (!var_5))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((arr_1 [i_1 + 1]) ? (-21 & -1812391826) : var_15));
            var_18 = var_6;
            arr_7 [i_0] = ((var_15 ? (((arr_5 [i_0] [i_0] [i_1 - 2]) ^ (arr_4 [i_0] [i_1]))) : 5));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_19 = (max((arr_2 [i_0]), ((4194304 ? ((var_13 ? var_1 : var_14)) : (((1821453603 ? var_16 : -1821453603)))))));
                    var_20 = ((~((((arr_12 [i_0] [i_2] [i_2] [2]) < (arr_12 [18] [1] [i_3 + 3] [i_3 - 1]))))));
                    var_21 = (min((((arr_5 [i_3 + 3] [i_0] [i_3 + 2]) ? 8388607 : var_1)), (((1821453604 ? (arr_12 [i_0] [i_0] [i_3 + 2] [i_0]) : var_0)))));

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        var_22 = 47784;
                        arr_17 [i_0] [i_2] [i_3 + 2] [i_0] [i_4] = (((arr_8 [i_0] [i_0]) ? (arr_8 [i_0] [i_0]) : var_6));
                        var_23 = (var_1 ? (arr_3 [i_3 + 1]) : -544875654);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 += var_9;
                                var_25 = (((arr_2 [i_0]) + ((((min((arr_21 [i_0] [i_0] [i_3 + 3] [i_5] [8]), var_8))) ? (((min((arr_20 [i_6] [i_5] [i_3] [i_2] [i_0]), (arr_0 [i_6]))))) : (min(var_11, var_15))))));
                                var_26 = (min((min(var_11, var_3)), var_11));
                                var_27 = ((-1821453604 * (min(((52 ? (arr_10 [i_6] [i_6]) : (arr_10 [i_3 + 1] [i_5]))), ((max((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]), var_9)))))));
                                var_28 = (min((((min(-1786452105, var_9)) ^ 1)), (!var_6)));
                            }
                        }
                    }
                }
            }
        }
        var_29 += (!-1821453604);
    }
    #pragma endscop
}
