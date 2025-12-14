/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 = ((var_9 ? var_3 : var_4));
        arr_3 [9] = (~var_3);
        var_21 = (min(var_21, -var_13));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = (var_16 ? var_13 : var_5);
            var_23 &= (var_5 == var_17);
        }
        var_24 = ((var_3 ? var_8 : var_13));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (min(((var_5 ? var_8 : var_13)), ((var_5 ? var_8 : var_17))));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_25 = 1742834824922118462;
            arr_11 [i_3] [i_2] [i_2] = -var_0;
            arr_12 [i_2] [i_2 - 2] [17] = (var_3 / var_0);
        }
    }
    var_26 = ((max(var_2, var_0)) - var_13);
    #pragma endscop
}
