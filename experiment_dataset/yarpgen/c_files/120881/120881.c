/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, ((((!var_2) ? ((1 ? var_10 : (arr_3 [2] [i_0] [i_0]))) : (arr_9 [i_0] [i_2] [2] [i_3] [i_3]))))));
                        arr_13 [i_3] [i_3] [i_3] [i_3] = (~var_11);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_4] [i_0] = var_16;
                        arr_19 [i_0] [i_0] [12] [i_0] = ((!(((var_6 ? var_4 : (arr_14 [i_1]))))));
                        arr_20 [i_4] [i_1] [i_1] [i_0] = var_10;
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 = (((((((var_14 ? 1777053400323780556 : 1))) ? ((((var_12 > (arr_21 [i_2] [i_2] [8] [i_2] [i_2]))))) : (min(-1777053400323780576, var_8)))) * var_12));

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_22 = (min((((arr_7 [i_0]) ^ (((arr_1 [i_0]) ? 1386003158 : (arr_8 [i_0] [i_1] [3] [i_6]))))), var_9));
                            arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] = (~1386003149);
                        }
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_31 [i_1] [i_0] = (~(!1));
                        var_23 = ((((var_15 - (arr_7 [i_7]))) << (((((((arr_24 [i_1]) ? (arr_10 [i_2] [1]) : (arr_10 [i_0] [i_0]))) + 5255734424710117401)) - 22))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = (-(((arr_15 [i_0] [i_0] [i_2] [i_8]) ? (arr_16 [i_0] [i_1] [i_2] [i_0] [i_8] [i_1]) : (arr_15 [i_0] [i_1] [i_1] [i_8]))));
                        arr_34 [i_0] [i_1] [i_2] [i_8] = (((((~1) ? var_7 : var_11))) ? ((-2445386950501219339 ? (arr_25 [i_2] [i_2] [i_2] [i_1] [1] [i_0] [i_1]) : (arr_25 [i_0] [i_1] [i_2] [i_8] [i_1] [i_2] [i_1]))) : var_19);
                    }
                    var_25 = -var_15;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            {
                var_26 = (min(2445386950501219340, ((min(var_19, (arr_35 [i_9] [i_10 + 1]))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_27 = (~-1);

                            for (int i_13 = 0; i_13 < 1;i_13 += 1)
                            {
                                arr_48 [i_9] [i_10] [i_9] [i_10] [i_13] [i_13] [i_9] = (var_3 ? ((~(arr_35 [i_10 + 1] [i_10 + 1]))) : 47394);
                                var_28 = var_6;
                            }
                            var_29 = ((!((((!var_11) ? (!var_2) : (((arr_45 [i_9] [i_10] [i_10] [i_11] [i_9] [i_12]) ? 455704096 : (arr_39 [i_10 + 1]))))))));
                            arr_49 [i_9] [i_10] [i_11] [i_9] [i_10] = ((((arr_46 [i_9] [i_11] [i_10] [i_12] [i_12] [i_12 + 1]) << (7199612661911721145 - 7199612661911721145))) <= (arr_46 [i_9] [i_9] [i_11] [i_12 + 1] [i_10] [i_12 - 1]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
