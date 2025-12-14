/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (min((arr_1 [15]), ((((((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0])))) / -18446744073709551615))));
        arr_4 [i_0] [i_0] = ((~((~(arr_3 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = ((((1 >= (arr_3 [i_1] [i_1]))) ? (((!(arr_5 [i_1])))) : (((!(arr_5 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_1] [i_3] [i_1] [i_1] = (((arr_15 [i_2] [i_1] [i_4] [i_4]) == (arr_15 [i_1] [i_1] [i_3] [i_4])));
                        arr_17 [i_1] [i_2] [i_2] [i_3] [i_1] = (arr_13 [i_4] [i_4] [i_4] [i_4]);

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_20 [i_3] [i_3] |= 1;
                            var_22 = (max(var_22, (!var_10)));
                            arr_21 [i_5] [10] [i_3] [i_2] [i_3] [i_2] [i_1] &= var_10;
                        }
                    }
                }
            }
        }
        var_23 = ((!(arr_19 [i_1] [i_1] [i_1])));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = (arr_1 [i_6]);
            var_25 = (~(arr_7 [i_1] [i_6]));
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_30 [i_1] [i_1] [i_7] [i_8] = (1 < -1);
                var_26 = ((((arr_8 [i_7]) ? (arr_2 [i_7 - 1] [i_1]) : (arr_10 [i_7]))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_27 = (min(var_27, (arr_29 [i_7] [i_1])));

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_28 |= (arr_31 [i_7]);
                        var_29 = (min(var_29, ((((((((arr_37 [i_1] [i_1] [i_1] [i_1] [i_10] [i_11]) < var_1)))) >= ((-(arr_18 [i_7] [16] [i_11]))))))));
                        var_30 = 1;
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_31 = (arr_22 [i_1] [0]);
                        var_32 = ((1 ? (arr_40 [i_12] [i_10] [i_9] [i_1]) : (arr_7 [i_7 - 1] [i_7 + 1])));
                    }
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        var_33 += 1;
                        var_34 = (min(var_34, var_1));
                    }
                    for (int i_14 = 4; i_14 < 18;i_14 += 1)
                    {
                        var_35 = ((!(((arr_26 [i_1]) == (arr_35 [i_1] [i_7 + 2] [i_9] [8] [i_10] [i_14])))));
                        var_36 = ((-(arr_15 [1] [i_1] [1] [i_14 - 3])));
                        var_37 += (((arr_27 [i_7] [i_7] [i_7 + 3]) ? -8565 : ((8 ? (arr_22 [18] [i_9]) : (arr_28 [14] [14] [i_1])))));
                        var_38 = (arr_6 [i_1]);
                    }
                    arr_45 [i_1] [i_1] [i_1] [i_9] [i_10] [i_10] = ((((-(arr_7 [i_7] [13])))) ? var_3 : ((var_5 ? 1544 : var_7)));
                    var_39 = (max(var_39, (var_4 < -3847)));
                    arr_46 [i_7 + 2] [i_7] [i_7] [i_1] = -16;
                }
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    arr_49 [i_1] = ((-11 ? (arr_7 [i_1] [i_9]) : (arr_43 [i_15] [i_15] [i_1] [1] [1])));
                    var_40 = (((arr_38 [2] [i_7 + 2] [i_7 + 1] [i_9] [i_7 + 1]) ? (arr_0 [i_7 + 2] [i_7 + 2]) : (((arr_36 [i_1] [i_1] [i_1] [i_9] [i_9] [i_1] [i_15]) ? 1 : 63991))));
                }
                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    arr_52 [i_1] = (arr_7 [i_7 + 3] [i_9]);

                    for (int i_17 = 2; i_17 < 16;i_17 += 1)
                    {
                        var_41 = (((((-(arr_5 [i_1])))) >= (arr_35 [i_1] [1] [2] [i_1] [i_1] [i_7])));
                        var_42 *= arr_38 [i_9] [i_16] [i_9] [12] [i_1];
                        arr_55 [i_7] [i_9] [i_7] [i_7] [i_7] [i_7] [i_7] |= ((-(arr_33 [i_9] [i_17 + 2] [i_9])));
                        arr_56 [i_1] [i_7 + 2] [i_16] [i_1] [i_7 + 2] = (arr_19 [i_1] [17] [i_1]);
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        var_43 = (1 + 0);
                        arr_60 [i_1] = (((arr_32 [i_18] [i_9]) >= var_12));
                        var_44 ^= ((~(((var_0 >= (arr_48 [i_18] [i_9] [i_18] [i_18]))))));
                        arr_61 [i_1] [i_18] [i_1] [1] [i_18] [i_18] = ((((arr_53 [i_1] [i_1] [13] [i_7] [i_7 + 3] [i_7]) >= (arr_11 [i_1] [i_7 + 2] [i_16 + 1] [i_18]))));
                    }
                }
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    var_45 = var_13;
                    var_46 = (((arr_12 [i_1] [i_7 - 1] [i_7]) < (arr_32 [i_1] [i_19])));
                    arr_65 [i_1] [i_1] = var_2;
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    {
                        var_47 = (arr_66 [i_20]);
                        var_48 = 1356274192;
                    }
                }
            }
        }
        for (int i_22 = 2; i_22 < 17;i_22 += 1)
        {
            var_49 = (arr_41 [i_22 + 1] [i_1] [i_22] [i_22] [i_1] [i_1] [0]);
            var_50 = (var_1 < 1110675127);
        }
        var_51 |= (arr_72 [i_1] [i_1] [1]);
    }
    for (int i_23 = 1; i_23 < 17;i_23 += 1)
    {
        arr_76 [7] = var_11;
        var_52 = (arr_2 [i_23 - 1] [i_23]);
    }
    var_53 = (max(var_53, var_15));
    #pragma endscop
}
