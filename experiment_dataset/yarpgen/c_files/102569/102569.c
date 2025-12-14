/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = min(64112, (arr_2 [i_0]));
        var_13 = (((((arr_3 [i_0] [i_0 - 3]) > (arr_3 [i_0 - 2] [8])))) / (arr_3 [i_0 + 1] [i_0 + 1]));
        var_14 = (!var_2);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 -= arr_7 [i_4];
                        arr_14 [i_1] [i_2] [i_3] [i_1] = 0;
                        var_16 = (max(var_16, ((((arr_6 [i_1 - 1]) ? (arr_9 [i_1 - 1] [i_1 - 1]) : (arr_9 [i_1 - 1] [i_1 - 1]))))));
                        var_17 = 64112;
                        var_18 = (((arr_12 [i_1 - 1] [17] [i_1 + 1] [i_1 - 1] [i_1 - 1]) > 1439));
                    }
                }
            }
        }
        var_19 = (max(var_19, (((37580 ? (arr_5 [i_1]) : var_5)))));
        var_20 = (arr_5 [i_1]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_18 [i_5] = (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);

        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_30 [i_9] [i_9] [18] [i_8] = (arr_27 [i_6 - 3] [i_7 + 1]);
                            var_21 = (min(var_21, (var_2 / var_7)));
                        }
                    }
                }
                var_22 = (((52931 ? (arr_10 [i_5] [i_7] [12] [i_5]) : 28)));

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_23 = (((arr_8 [i_5] [i_7]) ^ 255));
                    arr_33 [1] [i_6] [12] [14] = (7453334006039454854 ? (arr_32 [i_7 - 1] [9] [i_7] [i_6 + 2] [i_7]) : (arr_31 [8] [i_7 + 2] [i_6 - 3]));
                    arr_34 [i_6] [2] = ((~(arr_10 [14] [i_10] [i_7 + 2] [i_6 + 3])));
                    var_24 |= arr_29 [i_5] [i_6] [i_5];
                }
                for (int i_11 = 4; i_11 < 18;i_11 += 1)
                {
                    var_25 = (((arr_36 [i_11] [i_6] [i_6]) ? (arr_26 [10] [i_6] [16] [i_6] [i_6 + 4] [16]) : (arr_15 [i_7 - 2])));
                    arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((12605 > (arr_21 [5] [3] [10] [i_11 + 1])));
                    arr_39 [i_5] [i_6] [i_7 + 2] [i_11] = -0;
                    var_26 = (arr_28 [i_11]);
                }
                for (int i_12 = 2; i_12 < 19;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_48 [i_5] [i_6] [8] [2] [2] = (!-41);
                        var_27 = (arr_23 [i_7 - 1]);
                    }
                    var_28 = (3552213889 % (arr_25 [i_7 + 3] [i_7] [i_12 + 1] [i_12 - 2]));
                }
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    var_29 = (arr_7 [i_14]);

                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {
                        var_30 = (arr_32 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 - 2]);
                        var_31 = (((arr_20 [i_7 - 1]) ? (arr_25 [i_5] [i_6 - 1] [i_14] [i_15 + 2]) : ((((arr_15 [16]) != (arr_32 [i_5] [i_5] [i_7] [i_5] [i_15]))))));
                        var_32 = 2480778421;
                    }
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        arr_55 [i_5] [i_6] [i_7] [11] [i_14] = var_0;
                        arr_56 [19] [i_6] [i_6] [i_6] [i_14] = (((arr_20 [i_6 + 4]) < (arr_20 [i_6 - 1])));
                    }
                }
                var_33 = (arr_51 [10] [i_6 + 2]);

                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    var_34 = (((arr_52 [i_6 - 2] [i_17] [i_17] [i_17] [i_17]) ? (arr_24 [i_6] [i_6 + 2] [i_6] [i_6 + 2] [i_6] [i_6 - 1]) : 882885920));
                    var_35 = (~12594853323385575340);
                }
            }
            var_36 = (-32767 - 1);
            var_37 = (((((arr_20 [1]) / (arr_27 [13] [i_6])))));
            var_38 = 1;
            var_39 = (arr_16 [i_6]);
        }
        for (int i_18 = 1; i_18 < 17;i_18 += 1)
        {
            var_40 = ((((230 < (arr_44 [1] [i_5] [i_5] [i_5] [0] [i_18] [i_18 - 1]))) ? ((((((arr_12 [i_5] [i_5] [i_5] [i_5] [i_18 + 2]) ? var_4 : 892156913098847619))) ? ((~(arr_19 [i_18] [0] [i_5]))) : (-32767 - 1))) : ((((~var_12) ? (23407 * 1426) : ((max(212, -48))))))));
            var_41 = (max((arr_11 [16]), 1424));
            var_42 = (arr_35 [i_5] [i_5] [5]);
        }
        var_43 = 0;
    }
    var_44 = var_10;
    #pragma endscop
}
