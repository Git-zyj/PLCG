/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = ((var_10 ? (((((-(arr_0 [i_0])))) ? (((~(arr_0 [i_0])))) : (min(var_2, 5621944355656824590)))) : (max((arr_1 [1]), ((5621944355656824590 ? (arr_2 [i_0]) : var_13))))));
        arr_3 [i_0] = (((arr_2 [i_0]) ? (((arr_1 [i_0]) ? (((arr_0 [i_0]) ? var_8 : 156)) : (~var_1))) : var_11));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_15 = (arr_1 [i_1 + 1]);
        arr_6 [i_1] = 4294967295;
        var_16 = ((arr_0 [i_1 - 1]) * var_10);

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_17 = (((arr_5 [i_1 - 2]) < (arr_5 [i_1 - 1])));
            var_18 = var_5;
            var_19 = (((arr_2 [i_1 + 1]) ? 12824799718052727025 : (arr_2 [i_1 + 1])));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_20 = (~var_1);
                var_21 = var_10;
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_14 [i_1] [i_2] = var_8;
                var_22 = (~var_2);
                var_23 = (arr_2 [i_1 + 1]);
                var_24 = (13 <= 12824799718052727019);
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_19 [8] [i_5] [i_1 + 1] = 19;

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_5] [i_6] [i_7] [i_5] [i_8] = (~var_6);
                            var_25 = ((var_7 ? (arr_11 [i_7] [1] [i_7 + 1] [i_7]) : ((156 ? (arr_15 [i_8] [i_8] [i_8]) : var_4))));
                            arr_27 [i_1 - 2] [i_5] [i_6] [i_7 - 1] [i_8] = (((arr_16 [i_7 - 1] [i_1 - 2]) | (arr_16 [i_7 - 1] [i_1 - 1])));
                            var_26 = 86;
                            var_27 += ((((((arr_11 [i_8] [i_8] [i_8] [i_8]) ? 13640 : 99))) && (arr_2 [i_1])));
                        }
                    }
                }
                arr_28 [i_5] [i_5] [i_5] [i_6] = var_1;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_28 = (arr_29 [i_1] [i_5] [i_6]);
                            var_29 += 12824799718052727038;
                        }
                    }
                }
                var_30 &= ((var_12 ? var_7 : (arr_20 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_6])));
                var_31 = (~34);
            }

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_32 = ((var_7 ? var_9 : (!var_11)));
                arr_37 [i_1] [i_5] [i_5] = ((-33 ? (arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 2]) : (arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 1])));
                var_33 = (-64 <= -22960);
                var_34 = (arr_0 [i_11]);
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_35 = ((var_6 ? (var_3 <= var_10) : var_2));
                var_36 = var_10;
            }
            var_37 = (arr_11 [i_5] [i_5] [i_5] [i_1 - 1]);
        }
    }
    var_38 = -19;
    #pragma endscop
}
