/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_14;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_15 += (max((max((arr_2 [i_0] [i_2]), (((arr_2 [i_0] [i_1]) ^ (arr_2 [i_2] [i_2]))))), var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 += (~((-1215141311765127540 ? 2147483647 : 2897289208)));
                                arr_17 [i_0] [i_1] [i_1] [8] [i_1] [i_1] [i_1] = (((~var_1) ? (((((arr_4 [i_0] [i_3 - 3] [i_3 + 1]) <= 13)))) : var_6));
                            }
                        }
                    }
                    var_17 = (min(var_17, var_9));
                    var_18 = 28;
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_19 = (((((min((arr_19 [i_0] [i_5]), 0)))) < ((-(!9223372036854775807)))));
                    var_20 -= 1;
                    arr_20 [i_1] &= (max(313411901, 9223372036854775807));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [2] = (arr_18 [i_0] [i_0] [i_7]);
                                var_21 = (((((107800451811701284 ? (arr_5 [i_6] [i_0]) : var_8))) ? (max((((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))), var_3)) : ((min(1, (((arr_2 [i_0] [i_0]) ? var_0 : var_10)))))));
                                var_22 = ((-((-(arr_18 [i_0] [9] [i_5])))));
                            }
                        }
                    }
                }
                arr_29 [i_0] [i_0] = 0;
                arr_30 [i_0] [i_0] = (((((((!(arr_26 [i_0] [i_1] [3] [i_0]))) ? 1 : (!var_9)))) ? (~14) : (min(-9223372036854775807, 1))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        var_23 -= (arr_41 [i_9 + 4] [i_9] [i_9] [i_10] [i_11 + 1]);
                        arr_44 [i_9] [i_9] [i_10] [i_11] [i_9 - 1] = var_1;
                        arr_45 [22] [i_9] [22] [i_11] = ((-6312031314235901008 / (~0)));

                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            arr_48 [i_8] [7] [7] [i_9] [i_12 + 1] = (((~18338943621897850355) << (!var_3)));
                            arr_49 [i_8] [i_9] [i_10] [i_8] [i_9] [i_12 - 1] = 1;
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_52 [i_9] = ((var_7 ? -32644 : 106));
                            arr_53 [i_9] [2] [i_10] [i_10] [6] = (arr_36 [i_9] [i_9] [i_9 + 3]);
                            var_24 = (max(var_24, 1));
                            arr_54 [i_11 + 1] [i_9] [i_8] [i_9] [i_13] = -1;
                        }
                        arr_55 [20] [i_9] [i_10] [i_11 + 1] = ((~(arr_31 [i_11])));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_25 = (min(var_25, (((~(((!(arr_40 [i_8] [i_8] [i_8] [i_8])))))))));
                            var_26 = ((10721056968538016711 ? -2063831113 : 53924));
                        }
                        var_27 = (min(var_27, var_6));
                    }
                    var_28 = (min(var_28, 46836));
                    var_29 = ((!((!(arr_58 [i_8] [i_8] [i_9] [0] [i_8] [i_8])))));
                }
            }
        }
    }
    var_30 = (max((max(128, 75)), var_4));
    #pragma endscop
}
