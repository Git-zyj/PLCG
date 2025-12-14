/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (((var_8 >> (var_7 - 64221))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_15 = ((!(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_16 *= -var_8;

                        for (int i_5 = 4; i_5 < 7;i_5 += 1)
                        {
                            var_17 = ((~(min((arr_2 [i_1]), (~var_11)))));
                            arr_17 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] = var_4;
                            var_18 = ((4194303 * ((4194293 * ((-4194299 ? var_12 : (arr_11 [i_1] [i_2] [i_4] [i_5])))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_19 += (~4194317);
                            var_20 = ((~((var_4 ? (arr_13 [i_1]) : 1467355910))));
                            var_21 = (!(arr_13 [i_3 + 1]));
                            var_22 *= var_4;
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_23 [i_1] [i_2] [i_3] [i_4] = (((min((arr_14 [i_3] [i_3] [i_2] [i_3] [i_3 - 1] [i_4]), (arr_20 [i_3 - 1] [i_3] [i_3 + 1]))) & (min(4194312, (arr_21 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_1])))));
                            var_23 = ((var_4 & (arr_2 [i_3])));
                            var_24 = (arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]);
                            var_25 = ((((~8) ? (((arr_22 [i_2] [i_4] [i_3] [i_3] [i_2] [i_2] [i_2]) ? var_0 : var_10)) : (arr_9 [i_4] [i_2] [i_3 + 1] [i_4]))));
                        }
                        arr_24 [i_1] [i_2] [i_2] [i_4] = ((+(((arr_2 [i_3]) ? ((max(22, -453406022))) : -1090058545))));
                        arr_25 [i_1] [i_2] [i_3] [i_4] = var_4;
                    }
                }
            }
        }
        var_26 = (((max(((4194313 & (arr_4 [i_1] [i_1]))), (max(4194313, (arr_4 [i_1] [i_1]))))) >> (((min((arr_18 [0] [i_1] [i_1]), (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [6]))) + 991545301))));
        var_27 = (max(var_27, ((((arr_13 [i_1]) ? ((-(arr_13 [i_1]))) : var_11)))));
        var_28 ^= (max((max((arr_6 [i_1] [i_1]), -76)), var_2));
        arr_26 [i_1] |= (min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), ((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) && 224)))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_30 [1] [i_8] &= ((((-4194313 * (arr_27 [i_8]))) << ((((~((0 << (var_6 + 16886))))) + 3))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_37 [i_8] [i_8] [i_9] [i_10] [i_10] [i_8] = (max(((min((((var_5 | (arr_34 [i_8])))), (((arr_34 [i_8]) ? 728526005 : (arr_33 [i_8] [i_9] [i_9])))))), ((((var_12 ? (arr_29 [i_8]) : (arr_36 [i_11] [i_9] [i_10] [i_11] [i_9]))) * (((-(arr_36 [i_8] [i_9] [i_11] [i_11] [i_9]))))))));
                        arr_38 [i_8] [i_9] [i_8] [i_11] = ((min((arr_36 [i_8] [i_11 - 1] [i_11] [i_11] [i_11 - 1]), (max((arr_35 [i_8] [i_8] [i_10] [i_11]), 0)))));
                        var_29 = (!0);
                        arr_39 [i_8] [i_11] = (arr_36 [i_11] [i_10] [i_9] [i_9] [i_8]);
                    }
                }
            }
        }
        var_30 *= (((var_6 + 2147483647) >> (((!((min(1321339180, 3566441290))))))));
    }
    var_31 = (min(var_31, var_3));
    #pragma endscop
}
