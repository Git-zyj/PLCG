/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((1048448 == (((var_2 ? var_10 : -85))))))));
    var_14 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!((((-2147483647 - 1) ? (-2147483647 - 1) : 16)))));
        arr_4 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : -var_9));
        var_15 = (17836 + -2611364845);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (!var_8);

        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_13 [i_1] [i_2] = var_6;
            var_17 = (arr_8 [15]);
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_18 = var_8;
            var_19 = ((-(arr_9 [i_1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_21 [i_1] = var_10;

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_24 [i_1] [i_1] = ((27531968407131200 ? (((arr_0 [i_1] [10]) ? var_4 : 12832)) : 8));
                arr_25 [i_4] = (!var_8);

                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    var_20 = (((!-58) ^ -340974893));
                    var_21 = (((arr_27 [i_6] [i_6 + 1] [i_6 - 3] [i_6]) - (arr_27 [i_6] [i_6 + 1] [i_6 - 3] [i_6])));
                    var_22 = ((-((1048448 ? 2359 : 7578368251425920774))));
                }
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    arr_31 [i_1] [1] = ((arr_27 [0] [i_7 + 3] [i_5] [i_7]) ? (arr_29 [i_1] [i_7 + 2] [17] [i_4]) : var_12);
                    arr_32 [i_1] [i_1] [i_4] [i_4] [i_5] [i_7 + 2] = var_12;
                    arr_33 [i_7] [i_5] [i_4] [i_1] = arr_7 [i_7];

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_36 [i_8] [i_8] = (((arr_30 [i_5] [i_5] [i_5] [i_7 + 4] [i_7 + 4] [i_4]) - (arr_30 [i_7] [i_7] [i_5] [i_7 + 4] [i_8] [i_1])));
                        var_23 = (((~var_3) | (arr_9 [2])));
                        arr_37 [i_8] [i_7 - 1] [i_5] [i_4] [i_8] = 16948102038362635151;
                    }
                    var_24 = (max(var_24, -1048456));
                }
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    var_25 = (max(var_25, (((2147483630 ? var_10 : 13545)))));
                    arr_40 [i_5] = var_9;
                    arr_41 [i_1] [i_4] [i_5] [i_9 + 1] = ((var_4 != (arr_34 [i_9] [i_9 + 2] [i_9] [i_9] [i_9 - 2] [i_9 + 2] [i_9])));
                    var_26 = (((-9223372036854775807 - 1) + 2147483632));
                }
                arr_42 [i_1] [i_1] [i_1] [i_1] = var_10;
            }
            arr_43 [i_4] [i_4] = ((-(!-2147483633)));
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            {
                var_27 = ((((-(!1033523302))) >> (((max(-13546, (max((arr_5 [i_10 - 2] [i_11]), (arr_26 [i_10] [i_10 - 3] [i_11]))))) - 4294953730))));
                arr_50 [i_10] = (max(((~(arr_30 [i_11] [i_11] [i_10 - 1] [i_11 + 2] [i_10 - 1] [i_10 - 3]))), (((((max(var_0, (arr_6 [i_10 - 1])))) ^ (max(11525, -2147483633)))))));
                var_28 = (max(0, (((arr_34 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 - 3] [i_10 - 3] [i_10]) ? var_4 : 2080959582))));
                arr_51 [i_10] [i_11] = (arr_5 [i_10 - 1] [i_10]);
            }
        }
    }
    #pragma endscop
}
