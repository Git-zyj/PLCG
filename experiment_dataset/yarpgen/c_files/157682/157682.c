/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (max(var_12, ((max(((var_7 ? var_0 : var_0)), (var_6 > var_14))))));
    var_20 = ((min(var_0, ((var_9 ? var_18 : var_0)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 |= ((!(((-(arr_2 [i_0]))))));
        var_22 = var_6;
    }
    var_23 = (min(var_23, (((32752 ? ((-213 ? var_3 : 213)) : -7569)))));
    #pragma endscop
}
