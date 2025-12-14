/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((-((var_2 ? var_10 : (arr_6 [i_1 - 1] [11])))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_18 = (((~(~var_9))));
                    arr_11 [i_1] = (((((min(17412, var_1)))) ? (((arr_1 [i_1 - 1] [i_0]) / (arr_5 [10] [i_2] [i_1]))) : 2389500639));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_19 = (arr_2 [i_0] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_19 [i_3] [6] [i_1] [13] = (~(((arr_8 [12] [5] [5] [5]) % var_3)));
                                var_20 = (~var_0);
                                var_21 = (arr_10 [i_5] [i_3] [i_0]);
                                arr_20 [i_1] [i_1] = ((4957333279414325790 ? (arr_10 [i_1 - 1] [i_4] [7]) : (arr_17 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1])));
                                var_22 = (arr_7 [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_23 = (arr_8 [i_6] [i_6] [i_6] [i_6]);
        arr_23 [i_6] = ((((max(2389500618, (arr_6 [i_6] [i_6])))) ? ((max((arr_0 [3]), (arr_0 [i_6])))) : (max((((!(arr_17 [i_6] [i_6] [i_6] [i_6] [6] [i_6])))), var_6))));
    }
    for (int i_7 = 4; i_7 < 14;i_7 += 1)
    {
        arr_26 [i_7 + 2] = var_15;
        arr_27 [i_7] [i_7 - 2] = var_1;
        var_24 -= var_7;
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_40 [i_10] [5] [i_10] [i_10] [i_10] [i_10] = ((((((~var_7) ? (var_12 || var_1) : (var_11 / var_13)))) ? ((~(!65535))) : (((arr_38 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9]) ? (arr_38 [i_9 + 2] [i_9 - 2] [i_9 - 2] [i_9]) : (arr_38 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])))));
                        var_25 = -17413;
                    }
                }
            }
        }
        arr_41 [i_8] [i_8] = var_7;
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_26 = 1905466675;
        arr_44 [i_12] = 7;
        var_27 = (((((((var_12 ? (arr_35 [i_12] [i_12] [i_12] [i_12]) : var_10)) / ((23295 ? 2062391330 : var_15))))) ? ((((!((max((arr_34 [i_12] [i_12]), (arr_34 [i_12] [i_12])))))))) : 2389500609));
    }
    #pragma endscop
}
