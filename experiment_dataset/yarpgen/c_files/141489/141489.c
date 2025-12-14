/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 += ((((4294967294 ? 30280 : 2)) < ((((var_11 == (arr_1 [i_0])))))));
        var_17 = 4294967291;
        var_18 = 14998093904392523330;
    }
    var_19 = (min(var_19, ((((((-var_0 ? 1125899906838528 : (~0)))) ? (18553 == 3807536054) : (max(var_1, var_8)))))));
    #pragma endscop
}
