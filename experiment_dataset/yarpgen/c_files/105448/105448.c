/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = ((-((~(arr_1 [i_0 - 1] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] &= ((arr_3 [i_1]) != (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_0 [i_1]))));
        var_19 = ((-(arr_1 [i_1] [i_1])));
        var_20 = ((~((var_5 ? var_1 : var_2))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_21 *= ((((!(arr_5 [i_2] [i_1] [i_2]))) ? var_11 : var_9));
            var_22 = ((-(((arr_1 [i_1] [i_2]) ? (arr_0 [i_2]) : var_8))));

            for (int i_3 = 3; i_3 < 7;i_3 += 1)
            {
                var_23 *= (arr_5 [i_3 + 3] [i_1] [i_3 - 3]);
                var_24 = (((arr_3 [i_1]) - var_5));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_12 [i_2] [i_4] = (arr_8 [i_2] [i_2] [i_2]);
                var_25 *= var_8;
            }
        }
    }
    var_26 = ((var_11 && ((max(-1, var_10)))));
    var_27 = var_0;
    #pragma endscop
}
