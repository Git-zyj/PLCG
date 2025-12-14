/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_5 * (min(var_12, 16760832)))) >> (((min(((65527 ? var_4 : 27435)), 903432288)) - 903432266))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_3 [i_0] = (arr_2 [i_0]);
        var_19 = (min(var_19, (((!((((arr_1 [18]) + var_9))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_20 ^= ((((((arr_4 [i_1 - 1]) > var_15)))) < ((var_9 ? 1 : var_8)));
        var_21 = var_5;
        var_22 = -var_10;
        var_23 = var_2;
        arr_7 [i_1 + 2] |= (~var_1);
    }
    var_24 = var_8;
    #pragma endscop
}
