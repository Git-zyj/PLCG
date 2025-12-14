/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((((((max(var_12, 0))) ? -var_4 : (arr_0 [i_0])))), (max((var_7 / var_8), 0))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((-1 ? 1 : 18446744073709551615));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_20 = var_8;
                        var_21 = -2076401014;

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 2] [i_4 - 1] [i_4] = (arr_7 [i_4 + 1] [i_1]);
                            var_22 = -844996431;
                        }
                        arr_16 [i_1] [1] = var_14;
                        arr_17 [1] [i_0] [i_1] [i_1] [i_2] [i_3] = arr_7 [i_0] [i_1];
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] = var_16;
                                var_23 = (max((arr_6 [11] [i_1] [10] [i_1]), ((-2 ? 27 : 3452362779))));
                                arr_25 [i_1] = arr_23 [i_0] [i_6] [6] [15] [i_6] [i_5];
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_35 [i_7] [i_8] [i_8] = (((((var_8 ^ (arr_34 [i_7] [i_8] [i_9] [i_7])) ^ (max(595743689, var_8))))));

                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        var_24 = (min(154219172, ((2828040253 ? (arr_37 [i_7 - 1] [i_7 + 3] [i_7 + 2] [14]) : (arr_37 [19] [i_9] [i_8] [i_7 + 1])))));
                        var_25 = var_14;
                        var_26 = ((max(36, 125)));
                    }
                    var_27 = (min(var_27, ((min((arr_37 [i_7 - 2] [i_7 + 3] [i_7 + 2] [i_7 - 1]), (((min(var_6, 0)))))))));
                    var_28 = var_16;
                    arr_39 [i_7 - 2] [i_8] [i_9] [i_7] = var_3;
                }
            }
        }
        var_29 = ((((((arr_32 [i_7 + 3] [i_7] [i_7 + 3]) * var_5))) ? ((((arr_34 [i_7] [i_7 + 3] [i_7 - 3] [i_7]) / (arr_34 [i_7] [i_7 + 2] [i_7 + 3] [i_7])))) : -var_12));
        arr_40 [i_7] [i_7] = ((16120913565387905667 ? ((max(-844996416, (1 | 1315529721)))) : (((arr_37 [i_7] [i_7 - 3] [i_7] [i_7 - 1]) ? ((var_8 ? var_5 : 186)) : ((((arr_33 [0] [i_7] [12] [i_7]) ? var_15 : 33189)))))));
        arr_41 [i_7] = (((((+((1010661320 ? (arr_26 [i_7 - 3]) : (arr_34 [i_7] [7] [21] [i_7])))))) ? 13455666239814647956 : ((var_18 ? (arr_32 [i_7] [i_7] [13]) : (arr_26 [i_7])))));
    }
    var_30 = 13393;
    #pragma endscop
}
