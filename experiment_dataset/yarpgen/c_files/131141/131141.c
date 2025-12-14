/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_11 = ((~((min(61346, var_0)))));
    }
    var_12 &= -98;
    #pragma endscop
}
