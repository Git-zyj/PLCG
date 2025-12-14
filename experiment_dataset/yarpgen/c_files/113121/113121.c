/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1879048192;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 ^= var_7;
        var_21 = var_15;
        var_22 = ((~((-1879048193 ? (arr_0 [i_0]) : 27430))));
    }
    #pragma endscop
}
