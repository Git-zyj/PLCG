/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_20 = var_0;
            var_21 *= ((-(arr_0 [i_1 - 1])));
        }
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            var_22 -= (-(arr_4 [i_2 - 1]));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 14;i_4 += 1)
                {
                    {
                        var_23 = (((arr_12 [i_2 + 1] [i_4 - 4] [10] [i_3 + 1] [i_3 + 1] [i_4 + 1]) | 25));
                        var_24 = arr_12 [i_2] [3] [i_2] [i_2] [i_2] [3];
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_25 = ((-32497 ? var_2 : 4294967271));
                            var_26 = (arr_4 [i_7 - 3]);
                            var_27 = (arr_9 [i_7 - 3] [i_5 + 1] [i_2 - 3] [i_0]);
                        }
                    }
                }
            }
            var_28 = (min(var_28, ((((arr_11 [i_2 - 1]) || 3101911796)))));
            var_29 = (max(var_29, 1));
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            var_30 = (arr_3 [i_0] [i_8 - 2]);
            var_31 = (min(var_31, (((-(arr_18 [i_0] [i_0] [i_8] [10] [i_8]))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_32 = arr_25 [i_8 - 2] [i_8 + 2];
                        var_33 = (arr_12 [i_8] [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 1]);
                        var_34 = arr_11 [i_8];
                        var_35 = -567;
                    }
                }
            }
            var_36 = ((((181 >= (arr_21 [i_0] [i_8] [i_0] [i_8] [i_8]))) ? (arr_24 [i_0] [i_8 - 2] [8]) : (arr_22 [i_8 - 2] [i_8 - 1] [i_8 + 2])));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {
                    {
                        var_37 = (arr_17 [i_0] [i_8 - 1] [i_11] [i_12] [i_12] [i_0]);
                        var_38 = -260143709;
                        var_39 = (max(var_39, ((((arr_31 [i_8 - 2] [i_8] [i_8 - 2] [i_12 + 1]) ? (arr_31 [i_8 - 2] [i_8 - 1] [i_8 - 2] [i_12 + 1]) : (arr_31 [i_8 - 2] [i_8 - 1] [i_8 - 2] [i_12 + 1]))))));
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        {
                            var_40 = -8;
                            var_41 = (arr_17 [6] [i_0] [i_0] [9] [i_0] [i_0]);
                            var_42 = (min(var_42, (arr_15 [i_14])));
                        }
                    }
                }
            }
            var_43 = ((-31887 ? (arr_15 [i_13]) : 74));

            for (int i_17 = 3; i_17 < 14;i_17 += 1)
            {
                var_44 = (max(var_44, (var_11 / var_2)));
                var_45 = (arr_23 [i_17]);
                var_46 = (max(var_46, (((-(arr_4 [i_17 - 2]))))));
                var_47 = ((~(arr_32 [i_13] [i_17 + 1] [i_17 - 1] [i_17 + 1])));
                var_48 = (-108 || 120896688);
            }
            for (int i_18 = 1; i_18 < 13;i_18 += 1)
            {
                var_49 = (~4174070609);
                var_50 = (((arr_23 [i_18 - 1]) > (arr_40 [i_0] [i_18 - 1])));
                var_51 ^= 17702;
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        var_52 = 5447882542894710878;
        var_53 = (((arr_2 [i_19]) ? (arr_2 [i_19]) : (arr_2 [i_19])));
        var_54 = (arr_11 [i_19]);
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 9;i_20 += 1)
    {
        var_55 = 4174070607;
        var_56 = (((((-1709193569 ? 8156235053784293985 : (arr_13 [i_20 - 1] [i_20 + 1] [i_20 + 1])))) | -var_6));
        var_57 = (arr_45 [i_20] [i_20] [i_20] [i_20]);
        var_58 = (((arr_0 [i_20 + 1]) - (((7104224887211672359 ? 86 : 1226487077)))));
        var_59 = ((-5225182201546160356 ? (((((arr_26 [i_20]) + 2147483647)) << (((arr_56 [i_20]) - 12)))) : -12743));
    }
    var_60 = var_7;
    #pragma endscop
}
