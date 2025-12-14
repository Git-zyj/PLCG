/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((-(min((((var_3 ? var_9 : var_1))), (2595238362685073843 + 4294967285))))))));
    var_21 = (max(var_21, (-32767 - 1)));
    var_22 *= (max(var_9, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 ^= 2108097172;
        var_24 = (max(var_24, ((((((arr_3 [i_0]) ? (arr_0 [i_0]) : var_17)) * 0)))));
    }
    #pragma endscop
}
