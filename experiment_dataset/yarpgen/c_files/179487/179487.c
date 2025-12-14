/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_3 [i_0] [i_1] [i_2])));
                    var_15 = (max(var_15, (!var_10)));
                    arr_7 [i_1] [i_2] = ((9223372036854775807 | ((max(1296473979, var_1)))));
                    var_16 = (i_2 % 2 == 0) ? ((((((-63 ? var_0 : 9305))) << (((max((min((arr_4 [i_0] [i_1]), var_10)), (max((arr_5 [i_2]), var_10)))) - 18446744073143078613))))) : ((((((-63 ? var_0 : 9305))) << (((((max((min((arr_4 [i_0] [i_1]), var_10)), (max((arr_5 [i_2]), var_10)))) - 18446744073143078613)) - 16738874573024647879)))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (((((var_9 / (arr_1 [i_0])))) || (((38452 - (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_17 = (var_0 + 38452);
        arr_12 [i_3] = ((-9320 ? ((var_12 ? -1 : var_8)) : var_6));
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_18 = (min(var_18, var_0));
        arr_15 [i_4 - 2] [i_4] = (min(((1 ? (arr_6 [i_4 - 2] [i_4 + 1]) : 50587)), ((((!158) ? (((arr_0 [i_4]) ? var_1 : 65535)) : var_6)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 = ((((1792 ? (!1275883748) : ((1 ? var_9 : var_13)))) % 4294967291));
                    arr_21 [i_4] [i_6] [i_5] [i_4] = ((~(((arr_6 [i_4] [i_4 - 1]) - var_6))));
                    arr_22 [i_4] [i_4] = (((~(min(var_8, 8589681013205244758)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max(50588, (((arr_24 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? 13461969524217527548 : (arr_18 [i_4] [i_4] [i_4 - 1] [i_4 - 1]))))))));
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_5] [i_8] = ((~((((~var_12) || 63743)))));
                            }
                        }
                    }
                    arr_28 [i_4 + 1] [i_4] = var_9;
                }
            }
        }
    }
    var_21 = (max((((max(var_1, var_7)))), ((min(var_9, var_4)))));
    var_22 = (min(((384236383 ? (min(var_4, 101)) : (var_11 | var_11))), var_0));
    var_23 = (max(var_23, var_0));
    var_24 = (((((var_9 ? (!var_5) : -var_9))) ? var_2 : 1));
    #pragma endscop
}
