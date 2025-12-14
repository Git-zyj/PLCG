/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((-127 - 1) ? (min(var_12, 15677349403213764211)) : (var_2 * var_1)))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_17 |= 1;
        var_18 = -7;
    }
    var_19 |= (((var_10 == 2419860956) ? ((0 ? 52431 : 6372496507869214505)) : var_10));
    #pragma endscop
}
