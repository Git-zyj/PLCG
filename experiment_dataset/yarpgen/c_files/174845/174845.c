/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_12 + 2147483647) >> (2147483646 - 2147483619))) & (2147483646 != 188829716)))) + (min((var_1 | var_9), (var_13 ^ var_13)))));
    var_15 = (max((((((min(4294967295, var_11))) ? 3943061582 : var_8))), 17836889528226373496));
    var_16 = ((((((var_10 ? 3474421013 : var_8))) ? var_11 : var_7)) * var_2);
    var_17 = ((-((((min(820546292, var_9))) ? 820546282 : ((3580358046 ? var_7 : 3474421013))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [1] [i_2] = ((!((((-32745 && (arr_5 [i_0] [i_0] [i_1] [i_2]))) || (3926313027 || var_11)))));
                    arr_8 [8] [i_2] = max((min(-469338710, (((arr_4 [i_0]) / (arr_6 [i_0]))))), (arr_6 [i_1]));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = 48024;
                                var_19 = (((arr_4 [i_0 - 2]) ? ((((((arr_4 [i_0]) ? 820546292 : 4294967293))) / (arr_5 [i_0] [i_0] [i_0] [i_0]))) : ((min((min(var_2, -5716466366054682393)), (~var_2))))));
                            }
                        }
                    }
                    var_20 = max(((!((((arr_3 [i_0] [i_0]) ? 4294967295 : (arr_10 [i_1] [i_1] [i_2] [i_0 - 2] [i_1] [i_1])))))), (((arr_6 [i_0]) || (var_0 && var_11))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_21 = (arr_5 [i_0] [i_1] [i_1] [i_1]);
                        var_22 = (arr_17 [i_0] [i_1] [i_0 - 2]);
                        arr_19 [i_0] [i_1] [1] [i_1] [i_2] [i_1] = (((((3980579813 ? 141 : var_2))) & var_6));
                    }
                }
            }
        }

        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            arr_24 [i_0] [i_0] = (((arr_0 [i_0 - 2]) ? var_6 : (((((((max((arr_20 [i_0] [i_0]), var_7)))) < (-4433385411313341272 / 30789)))))));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_23 = ((284089434 ? 3 : ((var_0 + (((arr_6 [i_0]) + var_8))))));

                /* vectorizable */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    arr_30 [i_0] [i_0] [i_6] [i_7] [i_8] = 30720;
                    arr_31 [i_6] [i_6] [i_7] [i_6] = var_2;
                    arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] = (((((arr_5 [3] [i_6] [i_6] [i_8]) + (arr_26 [0] [8] [i_7]))) + (((820546300 ? var_10 : 3474421014)))));
                }
                var_24 = (((((var_0 == 9223372036854775807) || -64)) ? (820546281 | 15688383250972737159) : (((((42836569 ? (arr_1 [i_7]) : 469338697))) ? (((((arr_28 [i_6]) && var_0)))) : (arr_5 [i_0] [i_0 - 1] [i_7] [i_0])))));
            }
            var_25 = (max(182, 92));
            var_26 = ((((arr_10 [i_0 - 1] [i_6 - 4] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6 + 1]) == (arr_10 [i_0 + 1] [i_0 + 1] [4] [i_6] [i_0] [i_6 - 4]))));
            arr_33 [i_0] = (arr_25 [i_0] [i_0] [i_0] [i_0]);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_36 [i_0] = (((((5887602779568927970 ? var_7 : (arr_23 [i_9])))) ? ((((arr_23 [i_0 - 2]) <= var_8))) : ((((arr_23 [i_9]) == (arr_23 [i_9]))))));
            arr_37 [3] [i_0] [3] = var_10;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            arr_40 [i_0] [i_10] [1] = ((820546312 / var_6) ? (13 ^ var_4) : 14432679677774023304);
            var_27 = ((var_2 == (arr_38 [i_10] [i_10] [i_0])));
        }
    }
    #pragma endscop
}
