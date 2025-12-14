/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((((var_4 ? var_18 : var_13))));
        arr_2 [1] = ((~((var_0 ? (var_5 | var_4) : (((var_3 ? var_12 : var_15)))))));
        var_22 = ((~(min(1160463712, 246))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [18] [18] = ((~((max(var_0, var_3)))));
        var_23 = ((max(10, -16406)));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_24 = (max(var_7, var_3));
        arr_11 [i_2] [5] = ((var_9 + (!var_2)));
        var_25 = (min(var_25, (-16419 / 7644015268551382783)));
        var_26 = (((~var_9) ? (~var_13) : ((min(var_18, var_8)))));
        arr_12 [i_2 - 1] = var_7;
    }
    var_27 = var_4;
    #pragma endscop
}
