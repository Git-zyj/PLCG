/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_8 ? (((var_12 ? var_2 : var_14))) : (min(var_12, var_6)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= (((arr_1 [i_0] [i_0]) ? 1 : var_0));
        arr_4 [i_0] = (((((var_12 ? var_9 : var_0))) ? var_8 : var_12));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_16 = ((arr_5 [i_0]) ? (arr_5 [i_1]) : (arr_2 [i_0] [i_1]));
            var_17 = ((var_10 + (arr_0 [i_0])));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_18 = (((arr_8 [9] [8] [i_3]) ? (arr_6 [i_2]) : var_5));
                var_19 = (min(var_19, (((-108 ? 27020 : 0)))));
            }
            var_20 = (min(var_20, var_4));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_21 = ((~((106 ? 16796 : 62))));
            var_22 = (var_5 ? (arr_16 [6]) : (arr_1 [i_0] [i_4]));
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            arr_23 [i_5] [i_6] = var_13;
            var_23 += ((-1591582938434445446 ? (min(-62, 126024627936153604)) : (((((((-63 + 2147483647) << (183 - 183)))) ? 4294967295 : -81)))));
            arr_24 [i_5] = (((max(var_3, (((var_9 ? var_5 : var_5))))) * ((((min(var_0, (arr_8 [i_5] [12] [i_6]))))))));
        }
        arr_25 [i_5] = ((var_13 ? ((~(arr_2 [i_5] [i_5]))) : var_2));
    }
    var_24 = ((var_10 ? var_11 : (((max(-63, (max(54, -49))))))));
    #pragma endscop
}
