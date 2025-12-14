/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= -var_10;
    var_16 ^= -var_13;
    var_17 = (min(var_17, ((max(var_11, ((((((-28043 ? var_2 : 28032))) >= var_7))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [1] = (((arr_1 [i_0]) | (arr_1 [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, (((var_3 ? var_2 : 1)))));
                        var_19 = (max(var_19, ((((arr_11 [i_0] [i_3 - 1] [i_3 - 4] [i_3 - 1]) ? (arr_11 [i_3 - 4] [i_3 - 2] [i_3 - 2] [i_3 - 2]) : (arr_9 [i_0] [i_1] [i_2]))))));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_20 = (((-28073 + 2147483647) >> (var_13 + 28896)));
            var_21 = var_14;
            var_22 = var_1;
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_23 = (min(var_23, (((!(arr_19 [12] [i_4] [i_4]))))));
                            var_24 *= 28034;
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_37 [i_8] [i_8] = (var_8 > 16892842023833156316);
                            var_25 |= (-1920089282741847726 - (arr_12 [i_0] [i_9 - 3]));
                            var_26 = -28040;
                        }
                    }
                }
            }
            var_27 = (var_12 & 897006637);
            arr_38 [10] &= (arr_3 [i_0]);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_28 += var_12;
                            arr_48 [i_0] [i_12] [14] [i_12] [i_8] [i_12] [i_0] &= -18446744073709551613;
                            var_29 = ((-28063 ? (18446744073709551613 != var_12) : (arr_1 [i_14 - 1])));
                            arr_49 [i_0] [i_8] [i_12] [i_8] [10] [9] [9] = (-1 ? (arr_17 [i_14 + 1]) : (arr_7 [i_14 - 3] [i_14 + 1]));
                        }
                    }
                }
            }
        }
        arr_50 [i_0] [i_0] = (arr_44 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        arr_55 [i_15] = ((arr_1 [i_15]) < (arr_1 [i_15]));
        var_30 = -28043;
        var_31 = (min(var_31, ((((arr_53 [i_15]) - var_10)))));
    }
    #pragma endscop
}
