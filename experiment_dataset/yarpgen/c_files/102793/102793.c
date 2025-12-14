/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((((arr_0 [0]) >= 0)))) <= (1831 / var_9)));
        arr_3 [2] = (((arr_1 [i_0]) ? var_17 : 0));
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_6 [9] = (var_13 ? var_14 : (((arr_5 [i_1]) + (var_3 | var_17))));
        arr_7 [i_1] = (((((arr_5 [i_1 - 3]) ? var_15 : var_1)) + (65511 - 4294967273)));
    }
    var_18 = var_12;
    var_19 = (+-1);

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 *= ((((3 ? 1 : (arr_9 [i_2]))) != (arr_10 [i_2])));
        arr_12 [i_2] = (~(arr_9 [i_2]));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_21 = (max(((1799360889004026258 ? -6 : 18446744073709551615)), ((((max(2047, var_2)))))));
        arr_16 [11] = ((-(arr_15 [i_3])));
        var_22 *= ((-((283602510869420115 ? var_11 : (arr_15 [12])))));
        arr_17 [i_3] = ((((max(7890191420986404292, (((arr_15 [14]) ? (arr_14 [i_3] [i_3]) : var_5))))) ? 4503599627370495 : 911210972));
        var_23 = (((arr_13 [i_3] [9]) | 63489));
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        var_24 = ((((min(var_14, 14756))) ? ((((1 ? (arr_20 [i_4]) : (arr_18 [15] [20]))))) : ((var_4 ? (arr_20 [21]) : -1716325397))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_24 [i_4] [i_4] = (((arr_18 [i_4] [19]) <= 16580582841864431375));
            arr_25 [i_4] = (var_0 <= var_1);
            arr_26 [0] [23] = -10642;
            var_25 *= (((45 | (arr_18 [i_4] [i_5]))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_29 [i_4] = ((((((arr_22 [i_6] [i_6] [i_6]) ? 1 : ((1 >> (67043328 - 67043316)))))) ? 2147483647 : (~63489)));
            var_26 = (arr_22 [i_4 + 1] [i_6] [i_4]);
            arr_30 [i_4] [i_6] = (min(((((((11045095906759697503 ? 2179351934604913286 : 283602510869420115))) ? 33554432 : (((!(arr_19 [i_4] [1]))))))), ((var_9 ? (arr_19 [i_4 + 1] [i_6]) : (arr_19 [i_4 - 2] [i_6])))));
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_27 = var_14;
            arr_34 [1] [i_7] = (((var_10 + 9223372036854775807) << (((arr_20 [i_4]) - 57601))));
        }
        var_28 = 17592186044415;
        arr_35 [i_4] = ((((((((arr_28 [i_4] [16] [16]) ? 18340 : 11170))) >= (arr_22 [i_4 - 2] [i_4 - 1] [i_4 - 2]))) ? var_15 : (((arr_31 [i_4] [i_4 + 1]) ? var_12 : ((var_4 ? 7401648166949854113 : var_11))))));
    }
    var_29 *= (max((-1720453451 <= var_5), var_14));
    #pragma endscop
}
