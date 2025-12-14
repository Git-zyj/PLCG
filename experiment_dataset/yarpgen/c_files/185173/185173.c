/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = (arr_6 [i_0 - 2] [i_0] [i_1 - 1] [i_2 - 2]);
                    arr_9 [i_2] [1] [i_0] [i_0] = 1;
                    arr_10 [i_0] [i_1] = var_1;
                    arr_11 [i_0] [i_0] = min(((0 | (arr_4 [i_0 - 1] [i_1 + 2] [i_2 + 1]))), (((-(arr_6 [i_2 - 4] [i_1 + 1] [i_1] [16])))));
                    arr_12 [i_0] [17] [i_2] = var_6;
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_16 [i_3] = (!var_2);
        arr_17 [i_3] [i_3] &= 0;
        var_20 = max(((((arr_4 [i_3] [i_3] [i_3]) ? (var_0 || var_13) : 15))), ((0 ? 0 : var_8)));
        arr_18 [i_3] [i_3] = (arr_2 [20] [i_3 + 2]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_21 &= (~-var_0);
        var_22 = ((1 > (min(-5057211250121455701, 0))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    {
                        var_23 = (min(var_23, ((min(var_6, (max(var_13, var_7)))))));
                        var_24 = ((var_1 ? ((~(min((arr_22 [i_4]), var_4)))) : -1));
                        arr_27 [i_4] [i_4] [i_7] = (arr_4 [i_7] [i_5] [i_7]);

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [i_4] [i_4] [9] [i_4] [i_4] = (((arr_23 [i_4]) / ((0 ? (arr_20 [i_4] [i_7 - 1]) : (arr_1 [i_7 - 2])))));
                            var_25 = (((arr_3 [i_7 - 1]) ? ((((max(1, (-32767 - 1)))) - (arr_29 [i_4]))) : (((max(1, var_4))))));
                            arr_31 [3] [i_4] = ((((!(arr_28 [i_7 - 1] [i_4])))));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_26 = (max(var_26, var_16));
                            var_27 = 250;
                            var_28 = 38;
                            var_29 = (((126 < -14983) ? var_14 : ((65535 ? var_18 : 1118143466))));
                        }
                        var_30 = 9223372036854775807;
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_37 [i_10] = (((((-((18446744073709551602 + (arr_15 [i_10])))))) ? (arr_35 [14]) : -45849));
        arr_38 [i_10] = (min(((var_14 ? 1 : (((var_15 ? var_4 : 1315259868))))), (~var_1)));
        arr_39 [i_10] = (((arr_1 [i_10]) / (arr_1 [i_10])));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_31 = (arr_14 [i_11] [i_11]);
        var_32 = (arr_5 [i_11] [i_11]);
        arr_42 [i_11] = 35971;
    }

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_33 = (((((~(((arr_43 [19]) ? (arr_5 [i_12] [i_12]) : var_0))))) ^ (min((max(18446744073709551601, -103)), (((-(arr_7 [i_12] [i_12]))))))));
        arr_45 [i_12] [i_12] = ((((arr_15 [i_12]) ? (var_15 ^ var_13) : (arr_5 [22] [i_12]))));
        arr_46 [19] = (max((arr_2 [i_12] [i_12]), ((((var_8 / var_16) || ((!(arr_0 [i_12]))))))));
    }
    var_34 = ((var_9 ? var_5 : var_3));
    #pragma endscop
}
