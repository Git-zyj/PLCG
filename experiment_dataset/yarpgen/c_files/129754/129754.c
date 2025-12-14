/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_12;
    var_21 = var_2;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_22 = (min(var_22, var_6));
        arr_3 [i_0] [i_0] = var_17;
        var_23 = (min(var_23, var_5));
    }
    #pragma endscop
}
