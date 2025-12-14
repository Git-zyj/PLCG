/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [i_0] [i_0]);
        var_18 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_0] [12] [10] [i_1] = ((((max(55, 136))) ^ var_10));
                    var_19 = (max(var_19, ((((arr_2 [i_0]) * 30)))));
                }
            }
        }
        var_20 = (max(var_20, (!-18570)));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_21 = ((0 ? 0 : -18583));
        var_22 = (18581 > 1);
        var_23 = arr_6 [i_3] [i_3];
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_24 = (((((max((arr_20 [10] [i_5] [i_6 - 1]), var_2)))) >= ((18570 ? var_8 : var_5))));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_25 = (!18585);
                        var_26 = (((~-7473595300323589091) ? (((max(-124, (arr_20 [i_6] [i_5] [i_6 - 1]))))) : (arr_22 [12] [12] [i_6 - 1])));
                        var_27 = (min(var_27, ((((arr_15 [i_6 - 1]) * (max((arr_22 [i_6 - 1] [i_6 - 1] [1]), (arr_3 [i_4] [i_6 - 1]))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_28 = var_3;

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_31 [i_5] [i_5] [1] [i_5] [i_4] = (((((180 ? (arr_9 [15]) : var_6))) ? -18578 : var_13));
                            var_29 = (max(var_29, (((-(arr_8 [i_9] [1] [i_6 - 1] [i_6 - 1]))))));
                            var_30 = var_15;
                            arr_32 [i_5] [9] [1] = (arr_9 [i_6 - 1]);
                            arr_33 [i_5] [0] [i_5] [i_5] [i_5] [0] = 19113;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_31 = (min(var_31, var_7));
                            var_32 = (((-9223372036854775807 - 1) ? var_6 : var_17));
                            var_33 = (((((arr_6 [i_4] [i_6]) ? (arr_20 [10] [i_5] [i_5]) : var_12))) ? -218240846 : (arr_21 [i_5] [i_6] [i_6] [1]));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_40 [i_4] [7] [3] [i_5] [7] = ((var_15 ? (((arr_26 [i_5]) % (arr_17 [1]))) : ((3927474636 ? 60697 : (arr_39 [i_11] [i_5] [i_5] [13] [i_11] [11] [i_6])))));
                            arr_41 [i_8] [i_5] [i_4] = var_9;
                            var_34 = (max(var_34, (((var_6 == (arr_3 [i_6 - 1] [i_6 - 1]))))));
                            arr_42 [i_4] [1] [13] [i_8] [1] [i_5] = var_10;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_46 [i_4] [2] [i_5] [i_8] [i_12] [9] = ((((((arr_34 [i_8] [i_8] [i_6] [1] [13] [i_4]) ? (arr_39 [7] [7] [i_5] [7] [i_8] [10] [i_8]) : var_3))) ? -7812715671995765690 : (arr_29 [i_4] [i_5] [i_5] [i_5] [i_5])));
                            var_35 = (~((var_4 ? var_14 : -5815410247346325555)));
                            arr_47 [i_5] [i_8] = ((arr_8 [i_5] [1] [i_6 - 1] [13]) + var_11);
                            var_36 = (min(var_36, (arr_15 [i_8])));
                        }
                        var_37 = -1159062070;
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_38 = (arr_0 [2]);
                                var_39 = (max(var_39, -4738));
                            }
                        }
                    }
                }
            }
        }
        var_40 = -9223372036854775798;
        var_41 = -var_13;
    }
    var_42 = (-32767 - 1);
    var_43 = (max(var_43, ((max(791, (((248 > (-32767 - 1)))))))));
    var_44 = (min(var_44, var_10));
    #pragma endscop
}
