/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (((~4238) ? (arr_1 [i_1] [i_1 + 1]) : ((max((arr_7 [i_0] [i_0] [19]), 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, var_0));
                                var_15 = (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] = (((((arr_7 [i_1 + 1] [i_2 - 1] [i_2]) ? (arr_5 [i_0] [i_1] [i_1]) : ((max(var_6, var_2))))) / ((min((arr_3 [i_0] [i_2 + 1]), 61301)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_16 = (((!var_8) ? (!var_5) : 12561));

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_19 [17] [i_0] [15] [i_0] [i_0] = var_1;
                            arr_20 [i_0] [i_0] [i_2 + 2] [i_0] [i_0] [i_6] = (arr_11 [i_0] [i_2] [i_0]);
                            arr_21 [i_0] [i_1] [i_0] [i_2] [i_0] [i_5 + 1] [i_0] = (((arr_11 [i_1] [i_1 + 1] [i_1 + 1]) ? (((133 ? 191 : -14990))) : ((var_3 ? (arr_1 [i_5] [1]) : var_4))));
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5] [i_6] = (arr_4 [1] [i_0] [i_2]);
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_17 = (arr_8 [i_7 - 1] [i_1] [i_0]);
                            arr_25 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] = 5406728374361537824;
                        }
                        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, (((var_5 && var_5) ? ((4203283557 ? (arr_15 [i_0] [i_2] [i_5] [i_8]) : var_5)) : 0))));
                            arr_29 [i_0] [i_1 + 1] [i_0] [i_5] [20] &= 0;
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_19 = ((~((~(~var_5)))));
                        var_20 = (((arr_4 [i_1] [i_0] [14]) ? ((var_1 ? (arr_26 [i_0] [i_0] [i_9] [i_0] [i_1] [i_1] [i_1 + 1]) : var_10)) : ((max((arr_17 [i_1 + 1] [i_2] [i_2 + 1] [i_9] [i_2 + 1]), 239)))));
                        arr_33 [i_0] [i_2] [i_0] [i_0] [i_0] = ((~(((arr_8 [i_1 + 1] [i_2 + 2] [i_1 + 1]) ? var_7 : (arr_12 [i_0])))));
                        var_21 = (min(var_21, (((-(((arr_3 [12] [i_1]) ? var_9 : (~var_8))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
