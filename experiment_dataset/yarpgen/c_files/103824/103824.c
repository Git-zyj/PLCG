/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = ((var_7 ? var_9 : (min(var_3, 3239356438))));
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 1667638357;
        arr_4 [i_0] = (max(var_0, (arr_1 [i_0] [i_0])));
        var_19 = (min(var_19, (((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? -8422244439836617330 : 14336)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 = (min((((((max(36652, 9223372036854775804))) ? var_12 : (1055610826 >= -32767)))), ((65535 ? (((var_8 ? 3239356438 : 3239356433))) : (min((arr_1 [i_1] [0]), (arr_6 [i_1])))))));
        var_21 = (max(var_21, ((min((((-(arr_1 [i_1] [1])))), (arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = (max(1073741312, var_4));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_17 [7] [i_2] [i_4] [i_3] [i_1] [i_2] [i_1] = (((-(arr_1 [i_2] [i_2]))));
                                var_23 = 7673850166679926070;
                            }
                        }
                    }
                    arr_18 [i_2] [2] [i_2] [2] = ((min((((11 ? (arr_9 [i_1] [i_2] [i_2] [i_2]) : 154))), (max(13462864258427616900, (arr_14 [i_1] [i_1] [i_2] [i_1]))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_24 = (arr_15 [i_7]);
                        arr_27 [i_6] = (min((arr_8 [i_1] [i_8]), (((20324 == var_14) ? (arr_14 [i_1] [i_1] [i_6] [i_6]) : (((arr_15 [i_8]) * 1055750409))))));
                        var_25 -= (arr_2 [i_8]);
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_26 ^= 8731989304934834669;
        arr_32 [i_9] [i_9] = var_11;
        var_27 = (var_1 + -11202);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_28 ^= 1;
                        var_29 = 91;
                        arr_41 [i_9] [i_9] [5] [i_9] [i_12] = var_0;
                        var_30 = ((-(((arr_11 [i_9] [i_9]) ? 204 : (max((arr_39 [i_9] [5] [i_9] [5] [7]), (arr_22 [i_11])))))));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {
        var_31 = (~var_5);
        arr_45 [i_13] = min(((((arr_22 [i_13]) > var_0))), ((~(((arr_43 [i_13] [i_13]) & var_1)))));
    }
    #pragma endscop
}
