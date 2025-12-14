/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = ((((max(((min(var_3, 1))), var_7))) ? -1468476478 : var_7));
        var_16 = ((-((((max(1, (arr_0 [i_0])))) ? 1 : (~1)))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_17 = (min((((((max((arr_4 [i_1] [i_1]), (arr_3 [i_1] [i_1 + 1])))) ? var_11 : -1870477639))), (min((((1 ? 1870477638 : -234631533))), ((-4073716714606414269 ? 513019084831296227 : var_13))))));
        var_18 = 3444486493;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 = ((-(((arr_5 [i_1 + 1]) ? (arr_5 [i_1 + 2]) : (arr_6 [i_2 + 2])))));
                    arr_12 [i_3] = (1 + 50);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, -513019084831296230));
                                var_21 = (((((((min(-1144990312, -114))) ? ((-(arr_2 [i_4] [i_2]))) : ((1 ? 9291 : var_6))))) ? (max((var_10 && var_1), ((608072178 + (arr_9 [i_1] [i_1] [i_1]))))) : ((((!(~1144990311)))))));
                                arr_18 [i_3] [i_2] [i_4] [i_2] [i_2] [i_2] [i_3] = var_6;
                                var_22 = ((-(min(var_11, 11449))));
                                var_23 = (max((((!-1543098098) ? 4076065523 : (arr_7 [i_1] [i_1]))), -101));
                            }
                        }
                    }
                }
            }
        }
        var_24 = (arr_6 [i_1 - 1]);
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_25 = arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6];

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_25 [i_7] = 1;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_26 = (arr_16 [i_6] [i_6] [i_7] [i_8] [i_9] [i_9] [i_9]);
                        var_27 = (arr_24 [i_7] [i_7] [i_6]);
                    }
                }
            }
            var_28 = var_5;
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 11;i_11 += 1)
            {
                {
                    arr_37 [i_6] [i_6] [i_6] = (~var_5);
                    var_29 = (((-9316 ^ -9) ? var_13 : ((1 ? (arr_19 [i_11 - 2]) : (((arr_16 [i_6] [i_6] [i_10] [i_10] [i_6] [i_10] [i_11]) ? var_6 : var_1))))));
                    var_30 = (max(((-579520660 ? (((arr_1 [i_6] [i_6]) / (arr_4 [i_10] [i_11]))) : (arr_5 [i_11 + 2]))), var_6));
                    arr_38 [i_6] [i_6] [i_6] [i_6] = ((var_1 ? -579520660 : (~-1870477653)));
                }
            }
        }
    }
    var_31 = (9291 + var_12);
    #pragma endscop
}
