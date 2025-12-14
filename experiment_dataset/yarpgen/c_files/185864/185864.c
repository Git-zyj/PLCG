/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_10;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (min((max((arr_1 [i_0]), (min(249, 33)))), 1));
        var_15 = (max(var_15, 0));
        var_16 ^= (max((max((((arr_1 [i_0]) - 1)), ((-(arr_1 [i_0]))))), ((min(1, 543190514)))));
    }
    #pragma endscop
}
