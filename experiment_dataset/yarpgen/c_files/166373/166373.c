/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = 2258173049;
        var_13 += 2258173049;
        arr_4 [21] [i_0] = 2258173034;
    }
    var_14 = var_0;
    #pragma endscop
}
