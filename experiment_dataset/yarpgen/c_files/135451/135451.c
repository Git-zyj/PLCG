/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, -var_7));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [10] &= (((((33587 ? var_8 : (arr_2 [10] [10])))) ? (((-(arr_2 [0] [0])))) : (arr_0 [2])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = ((!(arr_9 [i_0] [i_0] [9] [i_0 + 1] [i_0] [i_0])));
                        var_21 = var_16;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_22 = (((27908 ? 31948 : var_17)));
                            var_23 = 1;
                        }
                    }
                }
                var_24 = (min(var_24, var_9));
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_23 [i_0] = 32422;
            var_25 = (max(var_25, (((!(((124 ? (arr_17 [10] [i_7] [2] [1]) : 78))))))));
        }
    }

    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        arr_28 [i_8 - 1] = (arr_2 [i_8 - 2] [8]);
        arr_29 [i_8] [i_8 - 2] = (min(1, var_16));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_33 [i_9] = ((((arr_16 [i_9] [i_9] [i_9] [i_9]) ? (arr_22 [i_9] [i_9] [i_9]) : var_1)));
        var_26 = (min(var_26, var_10));
        var_27 = (((arr_22 [i_9] [i_9] [i_9]) ? (!78) : (arr_9 [i_9] [i_9] [i_9] [i_9] [10] [i_9])));
    }

    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                {
                    arr_42 [1] [i_10] = var_6;

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_28 = ((~(max((arr_45 [i_10] [i_12 + 1]), 3295968335))));
                        var_29 = ((~(((((arr_44 [i_10] [i_10] [i_12] [i_13]) ? 9312254959256991599 : (arr_39 [i_10] [i_10]))) * (arr_41 [i_10])))));
                        arr_46 [i_10] [i_10] [i_11] [6] [i_12 + 4] [i_13] |= (min(((((max(1, (arr_39 [i_10] [14])))) ? (((arr_43 [i_10] [14]) ? var_18 : 8946204407831243243)) : (arr_45 [20] [i_11]))), ((((arr_36 [10] [i_11 - 1] [10]) ? -8256893143468432728 : (((-(arr_43 [i_10] [0])))))))));
                        arr_47 [i_10] [i_11] [i_10] [i_13] = (((21 * var_2) ? var_14 : 0));
                    }
                }
            }
        }
        var_30 |= (((~-29180) * 58));
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        arr_50 [i_14] = 1750627071;
        var_31 = (min(var_31, (((max(-59, (arr_49 [i_14])))))));
    }
    var_32 = (min(var_32, (((var_15 ? (((((max(var_4, var_18))) ? -49 : (~var_10)))) : (((var_13 ? var_6 : 14))))))));
    #pragma endscop
}
