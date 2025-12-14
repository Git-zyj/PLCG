/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_10;
    var_15 = var_5;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_16 = ((var_12 ^ ((var_12 >> (var_7 - 1246163152)))));
        var_17 = (var_4 & var_1);
    }
    var_18 = var_11;
    #pragma endscop
}
