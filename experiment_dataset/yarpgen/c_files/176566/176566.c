/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, -1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_1] = var_16;
                    var_20 = ((41 ? 0 : 32));
                    arr_7 [i_2] [i_0] [i_2] = ((18 ? (arr_4 [i_2 - 1] [i_0] [i_0]) : (((arr_0 [i_2 - 1] [i_0]) ? var_3 : var_1))));
                }
            }
        }
        var_21 = ((~(arr_2 [i_0] [i_0])));
        arr_8 [i_0] = ((1 ^ (arr_3 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_15 [i_3] = 127;
                    var_22 = (min(var_22, (((-(arr_4 [i_3] [i_4] [i_3]))))));
                }
            }
        }
        var_23 = (min(var_23, var_17));
        var_24 ^= ((118 <= (min((arr_3 [3] [3] [3]), (((arr_11 [8]) / (arr_12 [i_3] [i_3] [i_3])))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_25 = 64;
        var_26 = var_0;
        var_27 = (min(var_27, (!18)));

        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            var_28 = ((192 ? (!var_14) : (((!(arr_19 [i_6]))))));
            var_29 = var_8;
            var_30 += (((((arr_16 [i_6]) + 2147483647)) >> (var_0 - 159)));
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_31 = (((arr_23 [i_8]) ? (arr_17 [i_8 + 2]) : (arr_23 [i_8])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_32 = var_5;
                        var_33 = (((arr_29 [i_6] [i_6] [i_9] [i_9]) ? (arr_27 [i_8 - 1] [i_8] [i_8]) : (arr_18 [i_8])));
                        var_34 ^= arr_17 [i_6];
                    }
                }
            }
            var_35 = (max(var_35, ((((arr_32 [i_6] [i_8] [i_6] [i_6] [i_6]) ? ((-(arr_25 [i_6] [i_6]))) : (arr_28 [i_8 + 2] [i_8 - 1] [i_6]))))));
        }
        var_36 = (min(var_36, ((((arr_18 [i_6]) || (arr_19 [i_6]))))));
    }

    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 24;i_13 += 1)
            {
                {
                    var_37 = (max(var_37, ((((((~(arr_34 [4] [i_13 + 1])))) || (arr_37 [i_11]))))));
                    arr_41 [13] [i_12] [i_13] [i_11] = var_11;
                }
            }
        }
        var_38 = -73;
    }
    #pragma endscop
}
