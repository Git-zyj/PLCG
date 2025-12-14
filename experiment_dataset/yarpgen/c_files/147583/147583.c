/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((var_11 >= 2147483642), (var_12 / 64005)))) ? (((1530 < 149) ? (min(var_16, var_0)) : var_5)) : (-64007 > var_8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 = var_16;
        var_20 = (64005 >= -7658045838742361741);
        arr_2 [i_0] = (((arr_1 [i_0]) ? (((arr_1 [i_0]) * (arr_0 [i_0]))) : (~var_15)));
        arr_3 [i_0] [1] = (((arr_1 [i_0]) < (((((arr_0 [i_0]) != var_4))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((arr_0 [i_1]) / (185 - 1528))))));
        var_22 = (7658045838742361741 && -7658045838742361747);
    }
    var_23 = (max(((var_11 ^ (~var_15))), (((var_0 / (((1530 ? -27121 : 64))))))));
    var_24 |= var_11;
    var_25 = var_3;
    #pragma endscop
}
