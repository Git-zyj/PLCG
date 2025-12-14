/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -667;
    var_15 = 9223372036854775807;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_16 = (max(4294967289, -118));
        var_17 = (((arr_2 [i_0]) >> (((arr_0 [i_0] [i_0]) - 1033711433))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_18 = (min((((arr_13 [1] [i_2] [i_2] [i_2]) ? (arr_8 [i_1]) : 14)), (arr_1 [i_1] [i_1])));
                        var_19 ^= (min((((arr_3 [i_1]) ? var_10 : (arr_9 [i_1] [i_1] [i_3]))), var_8));
                    }
                }
            }
        }
        var_20 = (arr_7 [i_1] [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_21 = var_1;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_22 = ((min((arr_22 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8]), (arr_22 [i_8 + 1] [i_8] [8] [i_8 - 1] [i_8 + 1] [i_8]))) >> (((arr_22 [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8]) - 3903112912)));
                                var_23 ^= (arr_27 [22] [i_8 - 1] [i_8] [i_8 - 1] [i_8]);
                                arr_28 [i_1] [i_5] [i_6] [i_7] = (min(82, var_4));
                                var_24 = (min((arr_22 [i_1] [5] [5] [i_6] [i_6] [i_8]), 61));
                                var_25 *= (arr_23 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]);
                            }
                        }
                    }
                    var_26 = (arr_5 [i_6]);
                }
            }
        }
        arr_29 [i_1] [i_1] = ((min((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), var_5)));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_27 = ((min((min((arr_11 [8]), var_3)), (arr_7 [i_9] [i_9] [i_9]))));
        arr_32 [i_9] [i_9] = (arr_5 [i_9]);
        var_28 = ((var_9 ? var_11 : var_10));
        var_29 = (min((arr_27 [i_9] [i_9] [i_9] [i_9] [i_9]), ((4294967295 ? (arr_24 [i_9] [i_9] [i_9] [i_9]) : (arr_11 [i_9])))));
    }
    for (int i_10 = 2; i_10 < 12;i_10 += 1)
    {
        var_30 = (arr_3 [i_10]);

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_31 -= (max((arr_4 [i_10 - 1]), 654982648));
            var_32 ^= (arr_16 [i_11] [i_11] [i_10]);
        }
        for (int i_12 = 4; i_12 < 11;i_12 += 1)
        {
            var_33 -= var_10;
            var_34 = -9223372036854775807;
        }
    }
    #pragma endscop
}
