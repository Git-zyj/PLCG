/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        var_15 *= (((arr_0 [10]) ? (arr_0 [4]) : (arr_0 [10])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
            {
                var_16 = (((arr_4 [i_0] [i_1] [i_0]) + (arr_6 [i_2] [i_1] [5])));
                var_17 *= ((!(-9223372036854775807 - 1)));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                var_18 = (42757 ? (-9223372036854775807 - 1) : 2118941149);
                var_19 ^= (var_10 != var_8);
            }
            arr_12 [i_0] = (var_9 > var_14);
        }
        var_20 = ((!(arr_8 [i_0] [i_0] [i_0])));
        arr_13 [i_0] [i_0] = var_7;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_21 = (arr_18 [i_5]);
            arr_19 [i_5] [i_5] [i_5] = -7113892685999345952;
            var_22 = (arr_16 [i_5]);
            var_23 = var_0;
            arr_20 [i_5] [i_4] [i_5] = (var_0 - ((var_11 ? 958424871 : 958424861)));
        }
        var_24 = (arr_14 [i_4] [i_4]);
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 = (arr_22 [i_6]);
        arr_23 [i_6] = ((((((arr_15 [i_6] [i_6]) ? (arr_15 [i_6] [i_6]) : (arr_15 [i_6] [i_6])))) ? ((958424871 ? var_13 : (arr_17 [2] [i_6]))) : 62));
        arr_24 [i_6] = (max(-var_14, (((arr_15 [i_6] [i_6]) ? var_4 : (arr_15 [i_6] [i_6])))));
    }
    var_26 = (var_6 == var_5);
    #pragma endscop
}
