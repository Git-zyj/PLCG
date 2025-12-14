/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 585051235));
    var_12 = ((min(var_9, ((var_1 ? var_10 : var_5)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (max(var_13, ((((arr_4 [i_0 + 2]) * var_1)))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [11] [i_0] = var_2;
                var_14 = (max(var_14, var_1));
                arr_10 [i_0] = ((var_6 / (arr_5 [i_0] [i_1] [i_1])));
                var_15 |= ((var_3 ? (arr_7 [i_0 - 1] [1]) : var_0));
            }
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_19 [1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((0 ? ((0 ? var_10 : 182734873)) : var_1));
                        arr_20 [i_0] [i_1] [i_1] [i_4] = var_9;
                        var_16 = (((((-(arr_1 [i_0])))) ? var_8 : ((var_7 ? var_6 : 1))));
                        var_17 = var_5;
                    }
                }
            }
            var_18 = (max(var_18, ((var_6 ? (arr_6 [i_0 + 1] [0] [1] [1]) : ((var_1 ? -799319845 : var_5))))));
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_19 = (arr_6 [i_0] [i_0] [i_5] [i_0]);
            arr_24 [i_0] [i_0] = ((((1 ? var_7 : 0)) % (-806021159 & var_7)));
            var_20 = var_3;
            var_21 = ((((((arr_2 [i_0] [i_0]) ? var_7 : var_0))) || var_2));
        }
        var_22 = var_10;
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_23 += (arr_27 [i_6 + 1]);
        var_24 -= (((1 & 806021159) ? ((1 ? 1 : 1820340663)) : -1561957207));
        arr_28 [i_6 + 3] = (((var_0 | var_4) ? (arr_26 [i_6]) : var_10));
    }
    #pragma endscop
}
