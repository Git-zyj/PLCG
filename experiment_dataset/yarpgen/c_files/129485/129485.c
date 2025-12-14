/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (max(var_10, (!var_1)));
        arr_4 [i_0] = var_7;
        var_11 = var_7;
        var_12 = (((46 ? 196 : 210)));
    }
    var_13 *= var_5;
    var_14 = (((((var_4 & var_0) ? var_4 : var_6)) > ((min(var_4, var_4)))));
    var_15 &= (max((((min(var_1, var_0)))), ((((max(var_4, var_8))) ? (var_3 & var_5) : (min(var_1, var_0))))));
    #pragma endscop
}
