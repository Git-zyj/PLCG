/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_8;
    var_12 = max(((var_7 ? 31 : ((var_7 ? 13001 : var_10)))), (((1050119968 ? ((var_7 ? 24059 : -113)) : ((91 ? var_7 : var_2))))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_13 ^= -15;
        arr_3 [i_0 - 3] = (-127 - 1);
        var_14 = -113;
    }
    #pragma endscop
}
