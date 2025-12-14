/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((var_3 ? var_10 : var_1)));
        var_17 *= var_0;
        var_18 = -252;
    }
    var_19 -= ((var_5 ? 252 : var_15));
    var_20 = 65283;
    #pragma endscop
}
