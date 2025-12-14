/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((((~1) * (var_12 > var_3)))) ? (65514 ^ -var_6) : ((var_1 ? (~140737488355327) : var_6))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 1] = 2047;
        arr_4 [i_0] = (min((arr_0 [i_0]), 4294967295));
    }
    var_21 = (((~3709625660745296296) ? var_3 : (-127 - 1)));
    #pragma endscop
}
