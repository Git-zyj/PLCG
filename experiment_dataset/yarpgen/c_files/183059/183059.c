/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -88));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_18 = (min(var_18, ((min((var_0 / 66846720), (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2]))))))));
        var_19 = ((~(((min(var_3, var_6)) % (((-2340822713999571016 ? var_9 : (arr_0 [i_0]))))))));
    }
    var_20 = var_5;
    #pragma endscop
}
