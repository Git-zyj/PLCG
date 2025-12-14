/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(589, 582)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = 580;
        var_15 = (!var_6);
        var_16 = 570;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_17 = (arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((max(((var_5 ? (arr_3 [1]) : var_4)), (arr_2 [i_3] [i_2]))) < ((~(~var_10))))))));
                                arr_17 [4] [i_5] [8] [i_4] [i_3] [i_2] [i_1] = (arr_4 [i_3]);
                                var_19 = (max(var_19, ((((-571 * 589) ? 587 : -571)))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2] [i_3] [i_3] = ((((max((arr_10 [i_1] [i_1] [i_1] [i_1]), (arr_11 [i_3] [i_2] [i_1])))) && (((arr_9 [i_1] [i_2] [i_3]) && -571))));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_20 |= (arr_7 [i_6]);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_21 ^= (((arr_4 [i_1]) ? (arr_4 [i_6]) : (arr_4 [i_7])));
                        arr_23 [i_1] [i_1] [i_2] [i_6] [i_6] [i_7] = 570;
                        arr_24 [i_7] [8] [i_1] = ((((((arr_6 [i_1]) ? 582 : (arr_19 [i_1] [1])))) ? -577 : 570));
                        arr_25 [12] [3] [9] [i_7] = (((~578) < (arr_21 [i_7] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        var_22 |= (arr_28 [i_1] [0]);
                        var_23 = (max(var_23, (arr_13 [i_8] [i_6] [i_2] [i_1])));
                        arr_29 [i_1] [1] [i_6] [i_8 - 3] [8] = ((~(arr_14 [i_6] [i_6] [i_8] [i_8 - 4] [i_8 - 4])));
                        arr_30 [i_1] [i_2] [i_8] [i_8 - 3] = ((~(arr_14 [7] [i_2] [6] [6] [i_2])));
                    }
                    for (int i_9 = 4; i_9 < 9;i_9 += 1)
                    {
                        arr_33 [i_1] [i_2] [i_9] = arr_1 [i_1] [8];
                        arr_34 [i_2] [i_2] [i_6] [i_9] [i_6] [i_1] = (arr_11 [i_9] [i_6] [4]);
                    }
                }
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    var_24 = (min(var_24, (((((min(((((arr_21 [i_1] [5]) == 578))), (~var_1)))) ? var_7 : (max(var_3, (max((arr_10 [i_1] [i_2] [i_10 - 1] [i_2]), -571)))))))));
                    var_25 = (min(var_25, ((((arr_1 [i_1] [10]) > 589)))));
                    arr_38 [i_1] [i_2] [i_10] [2] = (((max(((-(arr_0 [i_10 + 2]))), -578)) + ((min(((max(-597, (arr_4 [2])))), -var_0)))));
                }
                arr_39 [i_1] [i_1] [i_2] = max((((arr_36 [i_2] [i_2] [i_1] [i_1]) ? (arr_3 [i_1]) : (arr_37 [1] [i_2]))), (arr_14 [8] [i_2] [11] [i_2] [i_2]));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {

                            for (int i_13 = 0; i_13 < 13;i_13 += 1)
                            {
                                arr_48 [i_1] [11] [i_11 + 3] [9] [i_13] [4] = ((!((!(arr_43 [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 4])))));
                                var_26 = ((+((-(max((arr_14 [i_1] [5] [i_11 - 1] [i_12] [i_2]), (arr_28 [i_12] [9])))))));
                            }
                            arr_49 [3] = (((arr_11 [i_1] [i_2] [i_11 + 3]) ? ((~(max((arr_21 [i_12] [5]), var_2)))) : (((((arr_47 [i_11 + 2] [i_11 - 1] [i_11] [i_1] [5]) > (arr_47 [i_12] [i_11 + 3] [i_11] [7] [i_1])))))));
                            var_27 = (max(((((var_4 ? 590 : (arr_35 [i_2] [i_2] [i_2]))) * var_3)), (arr_44 [i_12] [i_11] [i_2] [i_1])));
                            var_28 = (min((arr_0 [i_1]), (arr_47 [i_12] [i_12] [7] [i_2] [i_1])));
                            arr_50 [i_1] [i_1] [i_1] [11] [4] = (arr_40 [1] [i_2] [1]);
                        }
                    }
                }
            }
        }
    }
    var_29 = var_9;
    var_30 = (max(var_30, (((var_0 ? var_6 : (min(var_3, ((var_5 ? var_3 : var_3)))))))));
    #pragma endscop
}
