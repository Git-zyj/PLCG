/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((((~(var_5 == var_16)))) % (((arr_6 [i_2]) | -81)));
                    arr_9 [i_0] [8] [i_0] [i_0] &= min((~-1), (min(((max(207, var_2))), (((arr_2 [i_0] [i_0]) & (arr_4 [i_0] [i_0]))))));
                    arr_10 [i_0] [i_0] = (max((((((arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2]) + 9223372036854775807)) << (((((arr_7 [i_2 - 3] [10] [i_2 - 1] [10]) + 908370278242796274)) - 32)))), (arr_7 [i_2 - 3] [i_2] [i_2 + 1] [i_2 - 2])));
                }
            }
        }
    }
    var_18 = var_17;
    var_19 = var_4;

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_20 += ((((max((var_8 * var_12), 182))) && (arr_2 [i_3] [i_3])));
        var_21 *= 78;

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_17 [i_3] [i_3] [i_4] = (max((max((182 == 225), var_6)), (((((!(arr_0 [i_3] [i_3])))) | var_0))));
            arr_18 [i_3] [i_4] &= (min((((((max((arr_3 [i_3] [12]), (arr_12 [i_4] [i_3])))) < (max((arr_13 [i_3]), (arr_2 [i_3] [i_4])))))), (max(((~(arr_6 [i_3]))), -0))));
            arr_19 [i_3] = (arr_15 [i_4] [i_3]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_22 |= (((~49) | (arr_14 [i_5 - 1])));
            var_23 *= (arr_3 [i_3] [i_3]);
            var_24 -= var_16;
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_27 [i_6] = (arr_24 [i_6] [i_6]);
        arr_28 [i_6] = ((((-(arr_25 [i_6]))) ^ -255));

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_38 [i_6] [i_6] [i_8] [i_9] = ((-((max((arr_29 [i_6] [i_6] [i_6]), (!var_2))))));
                        var_25 = (min(var_25, 66));
                        arr_39 [i_6] [i_6] [14] [i_9] &= (((min((49 < 9223372036854775807), (max((arr_31 [i_6]), 1758110300919868301)))) != 36404));
                    }
                }
            }
            var_26 ^= ((-(arr_29 [i_6] [i_6] [i_6])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_27 -= (arr_24 [i_6] [i_6]);
                        var_28 = (max(var_28, (((192 == (max((arr_43 [i_6] [i_7] [i_11] [i_11]), (((1 < (arr_35 [i_6] [i_7] [i_6] [i_6] [i_10] [i_11])))))))))));
                        arr_44 [i_6] [i_6] [i_10] [i_11] = (max((min((arr_30 [i_6]), (arr_37 [i_6] [i_7] [i_6]))), (arr_35 [i_11] [i_11] [i_11] [5] [i_11] [i_11])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        arr_47 [i_12] [i_12] = 13835058055282163712;

        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 11;i_15 += 1)
                {
                    {
                        var_29 = (max(var_29, (((!(arr_43 [i_15 - 1] [i_15 - 4] [i_12] [i_15 + 1]))))));
                        var_30 = ((!(arr_29 [i_15 + 4] [i_15] [i_15 + 1])));
                        arr_54 [i_12] [i_13] [i_13] [i_15 + 2] [12] = -var_1;
                    }
                }
            }
            var_31 = (min(var_31, (!var_8)));
            arr_55 [i_12] [i_13] = (~221);
        }
        var_32 = (((arr_37 [i_12] [i_12] [i_12]) & (((((arr_31 [i_12]) != (arr_53 [i_12])))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            {
                                var_33 = (max(var_33, (arr_30 [i_18 + 1])));
                                var_34 = (min(var_34, (((var_4 >> (((arr_56 [i_16]) - 2508996873468353571)))))));
                                var_35 = -var_16;
                            }
                        }
                    }
                    arr_65 [i_12] [i_17] [i_17] [i_16] = ((arr_52 [i_17] [i_16] [i_12] [i_12]) / ((var_1 << (var_8 - 1504039868))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 12;i_21 += 1)
            {
                {
                    var_36 = (~24);
                    var_37 = (arr_67 [i_12]);
                }
            }
        }
    }
    #pragma endscop
}
