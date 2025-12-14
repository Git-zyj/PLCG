/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = var_11;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [8] &= (min((arr_1 [i_0]), (max(12407776948471462997, 6038967125238088604))));
        var_16 = var_5;
        arr_3 [i_0] = var_2;
    }
    var_17 ^= var_8;
    var_18 -= var_11;
    #pragma endscop
}
