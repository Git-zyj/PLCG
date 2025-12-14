/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_4 [i_0 - 2] = (24182 <= (arr_2 [i_0]));
        var_17 = ((~((-3251251827 ? -var_1 : (arr_3 [i_0])))));
    }
    var_18 = (max(var_18, var_14));
    #pragma endscop
}
