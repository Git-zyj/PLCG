/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_16;
                var_20 = (((49 - 11662988518346409593) > (((max(((!(arr_0 [i_0]))), (arr_4 [i_1] [i_0] [i_1])))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        var_21 = min(((-((207 ? (arr_7 [2]) : var_2)))), 201);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        var_22 = (((5416647891161786737 <= 54750) ? ((-536727484545388602 ? (min(-6371492134113655437, -11)) : (arr_10 [i_3] [i_2]))) : 2157889575));
                        var_23 = ((-((-var_2 + (((arr_12 [i_4] [i_3]) + 2147483647))))));
                        var_24 = ((6371492134113655439 / ((((min(140735340871680, 17831844802582905549))) ? 9223372036854775807 : 0))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_20 [i_6] = (min(var_4, (((arr_4 [6] [i_6] [i_6]) ? (arr_19 [i_6]) : (arr_4 [i_6] [i_6] [i_6])))));
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                {
                    var_25 = ((-538369301 - (((arr_21 [i_6] [i_8]) ? var_4 : (arr_24 [i_6] [i_8 - 1])))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_32 [i_6] [i_7 - 1] [i_8] [i_9 + 1] [i_9 + 1] [i_10 + 1] = (((arr_28 [i_6] [i_6] [15] [i_6] [i_10] [i_6]) | (((max((arr_2 [i_6] [i_6]), -7255409980320543673)) & 536727484545388603))));
                                var_26 = ((-((~(arr_26 [i_6] [i_6] [8] [i_6])))));
                                arr_33 [i_8] = (max(-844697398, -2024985818020983066));
                            }
                        }
                    }
                    var_27 = (min(var_27, 207));
                    var_28 = (min(var_28, var_10));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_37 [i_11] = var_17;
        var_29 -= -3002801328503098198;
        var_30 = (((!((((arr_18 [i_11]) / 536727484545388604))))));
        var_31 += (((~var_8) - var_13));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        var_32 += (arr_21 [i_12] [i_12]);
        arr_41 [i_12] [i_12] = (var_6 | 536727484545388620);
        var_33 = (~var_16);
        var_34 = (min(var_34, var_0));
    }
    #pragma endscop
}
