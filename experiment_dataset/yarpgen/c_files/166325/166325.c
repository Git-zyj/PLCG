/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, (((!(-336217983 * 0))))));
        var_19 = min(1, -18);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 |= ((~(arr_4 [i_1] [i_1])));

        /* vectorizable */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (arr_6 [i_2] [i_2 - 1]);
            var_21 -= var_11;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_13 [10] [1] = (((arr_7 [i_3]) ? var_3 : ((1 ? var_4 : -1))));
        arr_14 [i_3] [1] = (~var_12);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_18 [1] = ((var_8 - ((27 ? var_1 : (((arr_16 [0]) ? var_3 : -118))))));
        var_22 = ((min((~var_16), (((arr_17 [i_4]) >> (((arr_17 [i_4]) - 1210680599)))))));
    }
    var_23 = (max(((var_4 | ((1 ? var_6 : var_8)))), ((((var_9 / var_13) ? var_15 : ((var_2 ? var_8 : var_5)))))));
    var_24 = ((~(var_16 + var_14)));
    var_25 = min((((~((min(var_4, var_7)))))), (min((var_13 / var_13), (var_1 / -18))));
    #pragma endscop
}
