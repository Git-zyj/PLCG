/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_7 - var_16);
    var_18 = (min(var_18, (((-((var_3 ? (var_2 > var_9) : ((var_4 ? var_5 : var_9)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        arr_4 [14] [i_0] = (((~var_7) ? var_14 : (var_11 % var_6)));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_7 [1] |= var_3;
        var_19 = (42527 <= 7272433388406236943);
    }
    var_20 = (max(var_20, -var_12));
    #pragma endscop
}
