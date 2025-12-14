/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_11 = (~0);
        var_12 = (((var_0 % (-127 - 1))));
        var_13 = (max(var_13, (0 * 0)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = ((var_3 ? (1 - var_0) : -var_2));
        arr_6 [i_1] = ((-((var_6 ? 7177623760916468805 : var_0))));
        var_15 = (min(var_15, var_8));
    }
    var_16 = 2146435072;
    var_17 = var_9;
    var_18 &= var_2;
    #pragma endscop
}
