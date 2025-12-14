/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = (-7899 && 99);
        var_18 = (max(var_18, (arr_0 [5])));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = 51;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_19 = ((arr_6 [i_2 + 1] [i_2 - 1]) ? 7913 : var_15);
            var_20 &= (((arr_1 [i_1 - 1] [i_2]) ? ((var_13 ? (arr_1 [14] [i_2]) : var_5)) : (((arr_7 [i_1 - 2] [i_1 - 1]) * var_5))));
            arr_8 [i_1] [i_2 + 1] [i_1] = var_5;
            arr_9 [i_1] = 191;
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 = ((7902 / (max(9116332634755661888, -36))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [i_4] [i_4] [i_3] [i_3] = (max(((min((!7897), (max(var_4, 7927))))), (min((((-(arr_10 [i_3])))), (arr_18 [i_1] [i_3])))));

                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_22 = (((min((4294967295 && 7897), (4294967270 < 4294967267))) ? var_10 : (max((arr_0 [i_1 - 1]), var_14))));
                            var_23 = (((arr_2 [i_1]) ? (max((((var_6 ? (arr_1 [i_1 - 2] [i_3]) : 112))), (min(var_6, (arr_3 [i_3]))))) : ((((-var_11 < (!1)))))));
                            var_24 = (min(var_24, ((((((10861 ? (arr_20 [i_3] [i_6 - 1]) : (max(var_5, (arr_0 [i_1])))))) ? (min(var_3, (~var_5))) : ((-(arr_12 [i_1 + 2] [i_4] [i_5] [6]))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (max(var_25, 12));
                            var_26 = (max(var_26, ((((arr_13 [i_1 - 1] [i_3] [i_4]) ? (arr_13 [i_1 - 1] [i_3] [i_4]) : (arr_12 [i_1 - 1] [0] [i_4] [i_7]))))));
                        }
                        var_27 = (max((arr_0 [i_1 + 2]), (((((!(arr_3 [i_4])))) ^ (!0)))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_26 [i_3] [i_3] [i_4] [i_5] [i_8] [i_8] [i_1] = ((var_0 ? (min((~4294967287), 1376622606)) : ((((((1 ? 4 : (arr_7 [i_1] [i_3])))) ? ((25 ? (arr_15 [i_3]) : (arr_10 [i_3]))) : (7 <= var_2))))));
                            var_28 = ((((min(((var_1 ? 8 : var_14)), (arr_4 [11] [i_3])))) ? (max(var_14, (min((arr_14 [i_1] [6] [i_4] [i_4]), 1)))) : ((max(((var_15 ? var_2 : var_14)), (arr_20 [i_1 + 2] [1]))))));
                        }
                    }
                }
            }
            var_29 = ((!((((arr_25 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1]) ? (arr_25 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 1]) : (arr_25 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1]))))));
            var_30 = var_13;
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_30 [i_1 + 2] = (arr_20 [i_1] [i_9]);
            var_31 *= ((((((min(var_1, (arr_29 [2] [i_1] [i_9])))))) ? ((((arr_29 [i_1 - 2] [i_1 - 2] [i_1 + 2]) << (arr_29 [i_9] [1] [i_1 + 1])))) : (((3084559096273261735 / var_7) ? (((arr_21 [8] [i_9]) * var_0)) : (((var_1 / (arr_4 [i_9] [i_1]))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_33 [i_1 - 2] [i_1] = 154;

            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                arr_36 [i_1] [i_11] [i_11 + 1] = (!3);
                var_32 = ((((((arr_12 [i_1] [i_11] [i_11 - 1] [i_11]) < (arr_17 [i_1] [i_10] [i_11] [i_10])))) < 1));
                var_33 &= (!32027);
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_39 [i_12] [i_10] [i_1 - 1] = ((-(arr_18 [i_1 - 2] [i_10])));
                var_34 = (min(var_34, var_11));

                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    var_35 = (min(var_35, 32029));
                    var_36 = arr_4 [i_1 - 2] [i_1 + 2];
                    var_37 ^= (((arr_31 [i_1] [i_1 - 1] [i_13 + 1]) ? (arr_20 [i_1 - 2] [i_13 + 1]) : ((var_10 ? 127 : -12793))));
                    arr_42 [i_1 + 1] [i_1] = (!-1);
                }
                var_38 = (min(var_38, ((((arr_22 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_1 - 2]) ? (arr_20 [i_1 + 1] [i_10]) : (arr_20 [i_1 + 2] [7]))))));
            }
        }
        var_39 &= (((((~((min(65523, 49)))))) && var_10));
    }
    var_40 = (max((var_15 < var_13), ((var_15 * (max(4285078979744783322, var_1))))));
    var_41 = var_2;
    #pragma endscop
}
