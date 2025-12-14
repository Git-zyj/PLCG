/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((max(54184, ((1772389251 ? 1 : 854403145))))), (max(-2328338708, -10608))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = var_7;
        var_13 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] = (min((max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))), var_7));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_12 [11] [11] = (((((arr_2 [i_1]) + 2328338708)) - (((var_3 ? var_10 : 1)))));
                    arr_13 [i_1] [i_2] [i_3] = (max((arr_3 [i_1] [i_2]), (arr_3 [i_1] [i_3])));
                    var_14 = -1;
                }
            }
        }
    }
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_16 = (((max(var_4, (arr_17 [i_6] [i_4])))));
                    arr_21 [i_4] [i_4] [i_4] = -10619;
                    var_17 = (((((var_6 % (arr_0 [i_4] [i_5 - 2])))) ? (max(var_7, ((65525 ? (arr_15 [i_4]) : 425321133)))) : (854403145 & 1)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_24 [i_4] [i_4] [i_5 + 1] [17] |= (10 ? (arr_0 [i_5 - 2] [i_5 + 1]) : 1);

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_18 = ((arr_25 [15] [i_7] [i_5 - 2] [i_8] [15]) * (1 + 2008589574));
                        arr_27 [i_8] [i_7] [i_5 - 2] [i_4] = ((var_2 * (arr_25 [i_4] [i_4] [i_7] [5] [i_8])));
                        var_19 = var_1;
                    }
                    var_20 = ((4158 ? (arr_17 [i_5] [i_5 + 1]) : ((var_2 ? (arr_18 [i_4] [i_5 + 1] [i_4]) : 2042333352))));
                    arr_28 [i_4] [i_4] [i_5 - 2] [i_7] = (((arr_16 [i_5] [i_5 - 2] [i_5]) << (arr_25 [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 2] [i_5 - 1])));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_31 [i_7] = ((-1832553838 ? var_5 : var_1));

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_34 [i_10] [i_9] [i_7] [i_5 - 1] [i_4] &= 4157;
                            arr_35 [i_9] [i_5 + 1] [i_7] [6] [15] [i_9] [8] = (arr_16 [i_5 - 1] [i_5 - 1] [i_5 + 1]);
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_40 [i_4] [i_5] [i_7] [i_9] [i_11] = (arr_17 [i_9] [i_11]);
                            var_21 = arr_19 [i_7];
                            arr_41 [i_4] [i_5 + 1] [i_7] [i_5 + 1] [i_11] [i_5 + 1] [i_7] = ((-(((arr_18 [i_7] [6] [i_7]) ? -1832553838 : var_4))));
                            arr_42 [5] = (var_3 < var_8);
                            var_22 = -2042333329;
                        }
                        arr_43 [i_4] [i_4] [i_5] [i_7] [i_7] [i_9] = 1966628587;
                        arr_44 [i_7] [i_7] [i_7] [i_7] [1] [i_7] = (-303325164 > var_8);
                    }
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        var_23 = (max(var_23, (2328338719 + 1832553868)));

                        for (int i_13 = 4; i_13 < 22;i_13 += 1)
                        {
                            var_24 = (1966628587 ? 196 : 1757780058);
                            arr_51 [i_7] = var_2;
                            arr_52 [i_4] [i_5 + 1] [i_5 + 1] [i_12 - 1] [i_12] [i_4] = (((~0) / 192));
                        }

                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_57 [i_14] [i_14] [i_7] [i_12 - 1] [i_14] = arr_30 [i_4] [i_5] [i_4] [i_7] [i_12] [9];
                            arr_58 [10] [10] [i_14] [i_14] [i_12] = (arr_22 [i_12 + 1] [i_12 - 1] [i_14] [i_14]);
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            arr_61 [i_4] [i_4] [i_4] |= (+-1);
                            arr_62 [i_4] [i_4] = (arr_49 [i_4] [i_4] [i_7] [i_12]);
                            var_25 = ((-(arr_47 [i_5 + 1] [i_12 - 1] [i_5 + 1] [i_12])));
                        }
                        arr_63 [i_4] [i_4] = ((-(1 < var_2)));
                        arr_64 [i_7] [i_5 - 2] [i_7] [i_12 - 1] = var_0;
                    }
                }
                var_26 &= (arr_38 [i_5] [12] [i_5 - 2] [i_5] [1]);
                var_27 = ((24486 ? (((arr_17 [i_4] [i_4]) ? (arr_15 [i_5 - 2]) : var_2)) : (min((arr_45 [i_4] [i_5 + 1] [i_5 + 1] [i_4]), ((var_10 ? 11728 : var_6))))));
                var_28 = var_1;
                arr_65 [i_4] [i_4] [i_4] = var_8;
            }
        }
    }
    #pragma endscop
}
