/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 < (max(var_6, ((~(-9223372036854775807 - 1)))))));
    var_20 = var_9;
    var_21 = (var_15 ? var_7 : (((!((max(var_4, var_18)))))));
    var_22 = var_8;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_23 = (min(var_3, (max(0, (arr_1 [i_0 - 2])))));
        arr_2 [i_0] [i_0] = ((-var_2 | (!var_2)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_3] [0] [i_0] = (max((((!(var_10 - var_9)))), ((~(~var_7)))));
                        arr_13 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_3] = (((((arr_9 [i_0 + 1] [i_2]) + (arr_9 [i_0 - 3] [i_2]))) - (((-13 ? -64 : 2321629145)))));
                        var_24 = (max((((var_14 / 128) ? (!var_0) : var_15)), (max((arr_0 [i_0 - 1] [i_0 - 2]), ((var_3 ? var_14 : var_18))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [1] = ((-(arr_15 [i_4])));
        var_25 = ((var_14 ? var_2 : (arr_15 [i_4])));
        arr_17 [i_4] [i_4] = (arr_15 [i_4]);

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_26 = ((var_7 ? (arr_15 [i_4]) : -29));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_27 [i_4] [i_4] [17] [i_4] [19] [i_4] = (arr_24 [i_4] [21] [i_6 + 1] [i_7] [i_8] [21]);
                            var_27 = ((-(arr_19 [i_6 + 1] [i_6 + 1] [i_6 - 1])));
                            arr_28 [1] [i_5] [2] [i_7] [i_8] [i_8] = -5547154034408748332;
                        }
                    }
                }
            }
            arr_29 [i_5] [20] = (var_18 ? (arr_14 [i_4]) : var_5);
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_34 [i_9] = (~1581372245);
        var_28 -= (arr_11 [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
    #pragma endscop
}
