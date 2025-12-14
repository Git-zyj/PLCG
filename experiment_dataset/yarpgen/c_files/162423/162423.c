/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        arr_4 [i_0] [i_0] = ((((85 + 1) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = ((((((max(var_9, var_7)) + var_2))) ? (((max(var_15, (arr_1 [24] [i_0]))) * (-375806952 & 1))) : (((((((arr_1 [i_0] [i_0]) > var_8)) && -var_18))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (((((var_6 ? (arr_0 [1] [i_1]) : (arr_2 [i_1] [5])))) ? (((max((arr_9 [i_1] [i_1]), var_13)))) : (arr_6 [i_1])));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_12 [0] [i_2] &= ((1 > (max((arr_9 [i_1] [i_1]), var_5))));
            var_22 = var_0;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_23 = (min(var_17, (((((var_13 ? var_4 : var_7))) ? ((92 ? (arr_9 [i_1] [i_1]) : (arr_6 [i_1]))) : ((min(1, 0)))))));
            arr_17 [i_3] = ((((((arr_14 [i_3] [i_3] [i_1]) / 15))) ? var_2 : (min((arr_14 [i_3] [i_1] [i_1]), var_5))));
            arr_18 [i_3] [i_1] = ((((max(var_19, 21))) ? (arr_6 [i_1]) : ((((var_10 ? 1 : (arr_11 [i_1] [i_1] [i_1])))))));
            arr_19 [i_3] [i_1] [i_1] = ((~((var_17 ? (~var_3) : ((1 ? var_14 : (arr_15 [i_1] [i_1])))))));
            var_24 ^= 1;
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        var_25 = (var_4 || ((((arr_2 [i_4] [i_4]) - var_7))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    arr_28 [i_5] = var_13;
                    var_26 *= (((var_7 > 4088) ? (var_12 / var_12) : 1));
                    var_27 *= var_0;
                    var_28 = (((((var_14 > (arr_0 [i_6] [i_5])))) + 1));
                }
            }
        }
        var_29 = (arr_20 [i_4]);
        var_30 ^= (var_11 + var_19);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_31 = 0;
        var_32 = 32767;
    }
    #pragma endscop
}
