/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_0;
    var_21 -= (((((((var_1 ? var_9 : var_1))) / var_7)) <= ((((((var_11 ? 97 : var_9)) != (var_14 | var_19)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = 224;
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) > var_11));
        var_23 = var_0;
        var_24 += (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_10));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (!var_10);
                    arr_11 [i_0] [i_0] [i_2] = ((((((arr_0 [i_1 + 1]) ? var_3 : 44))) ? var_15 : var_16));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_14 [10] = (((((-(arr_12 [i_3])))) ? (arr_12 [i_3]) : (((arr_12 [i_3]) * var_17))));
        var_25 = var_17;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_26 -= (((((-(arr_16 [10]))) - var_3)));
        var_27 = (min((((arr_17 [i_4]) ? (((arr_17 [i_4]) ? var_16 : var_18)) : ((max(var_2, (arr_16 [i_4])))))), (max(-var_11, ((var_14 ? 221 : var_18))))));
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_28 = var_13;
        var_29 = ((~((((min(var_2, 44))) ? 25353 : var_5))));
    }
    #pragma endscop
}
