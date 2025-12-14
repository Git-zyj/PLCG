/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 55));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((!((((var_6 ? var_1 : var_12))))));
        var_21 = (max(var_21, (((((((var_8 ? (arr_1 [i_0]) : (arr_1 [i_0]))) <= var_17)) ? -207 : (((var_10 <= ((var_15 ? var_0 : (arr_1 [i_0])))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (arr_5 [i_1]);
        arr_6 [i_1] = (209 ? 48 : 57);
        var_23 = (min(var_23, 44));
        arr_7 [i_1] = var_4;
        var_24 *= ((var_4 ? var_6 : (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_25 = (((((arr_1 [i_2]) ? ((184 ? var_8 : var_0)) : var_3)) < (arr_10 [i_2])));
        var_26 += 65;
    }
    #pragma endscop
}
