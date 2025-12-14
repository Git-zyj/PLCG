/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((min(((max(-3473695140660509527, (arr_6 [i_0] [i_1])))), 4814611012402800023)));
                    var_18 = (min((arr_5 [i_1] [i_2 + 1] [i_1]), (max(9206763205536434204, (arr_5 [i_1] [i_2 - 1] [i_1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_14 [i_3] = ((!(arr_5 [i_3] [18] [i_3])));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_19 = 931741859;
                arr_17 [i_3] [i_4] [i_3] [i_3] = ((!(arr_0 [i_3])));
                arr_18 [i_3] [i_4] [i_5] = (arr_10 [i_3] [i_4] [i_5]);
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                {
                    var_20 = ((~(arr_21 [i_6])));
                    var_21 = var_6;
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_22 = (max(var_9, (max((max((arr_27 [i_8] [i_9]), (arr_1 [i_8]))), 1329880651))));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_37 [3] [i_9 + 1] [3] [9] [i_8] [i_10] = -5342959462607592951;
                        arr_38 [i_8] [i_9] [i_8] = 1107878265;
                        arr_39 [i_8] [i_10] [i_11] = (arr_32 [i_11]);
                    }

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_43 [9] [i_9] [i_9] [i_9 - 1] [i_9] = (var_4 | var_0);
                        arr_44 [i_8] [i_8 + 1] [9] = (((((~(arr_28 [i_8 + 1])))) ? (arr_28 [i_8 - 1]) : (arr_28 [i_8 + 1])));

                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_23 = -713574025;
                            var_24 = (-24 ? 1 : 122919316);
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 10;i_14 += 1)
                    {
                        arr_52 [i_8] [i_9] [i_14] [i_14] = arr_42 [i_9] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1];
                        var_25 = (((arr_34 [i_9 - 2] [i_9 + 1] [i_8 + 1] [i_14] [i_14 - 1] [i_9]) & (arr_34 [i_9 - 1] [i_9 - 2] [i_8 - 1] [i_14] [i_14 + 1] [i_14])));
                    }
                    arr_53 [i_8 - 1] [i_8 - 1] [i_10] [i_8] = (min((arr_13 [i_8 - 1] [i_8]), var_11));
                }
            }
        }
        var_26 = (-((~((-(arr_4 [i_8 - 1] [i_8]))))));
        var_27 = ((max(var_4, 0)) / ((((arr_25 [i_8 + 1] [i_8 - 1]) % (~var_8)))));
        arr_54 [i_8 + 1] = var_11;
        var_28 = 189;
    }
    var_29 = var_10;
    #pragma endscop
}
