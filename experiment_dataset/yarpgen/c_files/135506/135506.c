/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((var_12 ? (min(var_3, (arr_5 [i_0]))) : ((max(2102852962, 172642883)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_8 [10] [10] [10] [i_0])));
                                var_21 = (max(var_21, (arr_9 [i_1] [i_1] [8])));
                                var_22 = (((arr_10 [i_1] [i_0]) && (!var_0)));
                            }
                        }
                    }
                    var_23 = (min(var_23, var_3));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_6] [8] [i_1] [i_0] [i_0] = (((((var_9 ? ((var_1 ? var_3 : var_17)) : (!56)))) ? 1 : ((((min(var_5, -24268))) ? (arr_1 [i_0]) : (~var_2)))));
                                arr_23 [i_0] [i_1] [3] [i_6 - 1] [i_7] = (arr_10 [i_6 + 1] [i_0]);
                                var_24 = (((arr_14 [i_0] [i_5]) ? ((((!(arr_8 [i_5] [i_0] [i_7] [13]))))) : (((((arr_15 [i_0] [i_7]) * (arr_0 [i_1] [i_0]))) >> (((arr_3 [i_0] [i_0]) - 2691589211401071788))))));
                                var_25 = ((((~(min(1, (arr_16 [i_0]))))) / ((~(arr_8 [i_6 + 2] [i_0] [i_0] [7])))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        var_26 = var_11;
        arr_26 [i_8] = ((~((((var_2 ? var_8 : -50)) >> ((((886727516 ? -22 : (arr_24 [i_8]))) + 34))))));
        var_27 += ((var_16 ? var_12 : ((~(!-2102852968)))));
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        var_28 += ((((((arr_28 [i_9 + 1]) << (-4195 + 4204)))) ? (((~(arr_28 [i_9])))) : (max((arr_11 [i_9] [i_9 + 2] [i_9] [14]), var_18))));
        var_29 = (max(var_29, ((((arr_19 [i_9 + 3] [0] [i_9] [i_9]) ? (max((arr_19 [i_9 + 3] [14] [i_9 + 3] [i_9 + 3]), (arr_19 [i_9 + 3] [6] [i_9] [i_9]))) : -1197430273009313875)))));
        arr_30 [i_9] = ((var_13 && (((var_17 ? var_16 : (arr_21 [i_9] [i_9 - 1] [1] [i_9] [i_9 + 1] [i_9] [i_9 + 3]))))));
    }
    var_30 = var_2;
    #pragma endscop
}
