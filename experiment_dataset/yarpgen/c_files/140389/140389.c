/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((!(((-(arr_4 [i_1 - 1] [i_1 - 1] [i_1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 &= (arr_10 [i_0] [9]);
                    var_12 = var_7;
                    var_13 = (max(var_13, (arr_1 [i_1 - 1])));
                    arr_11 [1] [i_0] [i_1] [i_0] = (((((-(arr_0 [i_0] [i_1])))) || (((-246164110 ? 141 : var_3)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_1] = 32;

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_18 [i_4] [8] [i_1] [8] [i_0] |= 246164102;
                        var_14 += -246164110;
                        var_15 = 208;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [10] [i_1] = var_7;
                        var_16 = (arr_4 [i_0] [i_1] [0]);
                        var_17 -= (var_7 ? var_10 : (arr_15 [0] [0]));
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_18 += -799645312;
                        var_19 = (min(var_19, (arr_5 [2])));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_1] = (arr_4 [i_1] [i_1 - 1] [i_7 - 1]);
                        var_20 |= (arr_20 [i_0] [i_1] [i_1 - 1] [1] [i_3] [i_1]);
                        var_21 += ((((-(arr_23 [3] [i_1]))) * (((!(arr_1 [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_22 = (~var_2);
                                arr_34 [i_1] [i_1] [i_8] [i_9] = (arr_9 [i_1 - 1] [i_8 - 1]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_23 += -692954443;
                    var_24 = var_10;
                }
            }
        }
    }
    var_25 = var_10;
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                var_26 = min(799645312, (((arr_40 [i_11 - 1] [i_11 - 1] [i_12]) ? 90 : (arr_40 [i_11 - 1] [i_11 - 1] [i_12]))));
                var_27 += -246164141;
            }
        }
    }
    #pragma endscop
}
