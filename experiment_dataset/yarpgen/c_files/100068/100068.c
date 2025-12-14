/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_12 ? ((((!(~var_15))))) : ((var_6 ? var_6 : var_12)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        var_17 = ((!(((54065 ? -var_12 : -100)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (((((var_4 ? var_13 : var_7))) ? (((var_5 ? var_5 : var_9))) : ((var_8 ? var_14 : var_11))));
        var_19 = ((~((var_1 ? var_3 : var_11))));
        var_20 = var_7;
    }
    #pragma endscop
}
