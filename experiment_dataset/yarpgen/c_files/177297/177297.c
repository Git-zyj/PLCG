/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((var_1 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_16 = ((-((0 ? var_7 : var_3))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))) ? (var_0 ^ var_8) : var_0));
        var_17 = (((((~(arr_0 [i_1 + 1])))) ? (arr_0 [i_1]) : (((((-1349581749 + 2147483647) << (((arr_1 [i_1]) - 164))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_18 = ((var_2 ? 18446744073709551615 : 83));
        var_19 = ((var_13 << (((arr_10 [i_2 + 1]) - 2932959857))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = ((1 ? 1 : 18446744073709551614));
            var_21 = ((12201258668464258515 ? 2066456128032271585 : 2293627852));

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_22 = ((-45 ? 2001339443 : 1517277959));
                arr_17 [i_3] = (((arr_13 [i_2 + 1] [i_3] [10] [i_4 - 1]) * (arr_5 [6])));
            }
            arr_18 [i_3] [i_3] [i_2] = ((-var_13 ? ((var_11 * (arr_10 [i_3]))) : (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 = (max(var_23, (((!(arr_10 [i_2 + 1]))))));
            var_24 = ((-(arr_13 [i_2] [i_2 + 1] [i_5] [i_2 + 1])));
            arr_21 [i_2] [1] [1] = arr_8 [i_2 + 1] [i_2 + 1];
        }
        var_25 = (max(var_25, (((var_6 ? (((arr_11 [i_2] [i_2] [i_2]) + (arr_0 [14]))) : (arr_9 [i_2 + 1]))))));
    }
    var_26 = var_2;
    var_27 = var_8;
    var_28 += (!var_14);
    #pragma endscop
}
