/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_1;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_13 = (min(var_13, -2301411792733782075));
        var_14 *= ((!(arr_2 [i_0 - 1])));
    }
    var_15 &= var_2;
    #pragma endscop
}
