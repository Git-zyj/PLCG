/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(var_3, var_2)));
    var_14 = (min(((min(127, 65529))), ((var_2 * ((min(32767, 7903999873555528076)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = 0;
        var_16 = (min(((max(var_12, 1))), ((0 ? var_3 : var_7))));
    }
    #pragma endscop
}
