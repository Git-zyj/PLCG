/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(var_7, (-1865222024 <= 4294967282)));
    var_11 = var_6;
    var_12 = (min((var_9 | var_7), ((((min(var_8, var_8)) < (!var_5))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_13 = var_9;
        arr_3 [i_0] = var_6;
        var_14 = (((min(-66, 1))));
        var_15 = ((var_4 & (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 3]) : var_2))));
    }
    #pragma endscop
}
