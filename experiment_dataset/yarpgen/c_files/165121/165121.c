/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((-76 % var_6) ? (min(2988516812, var_11)) : 0))) ? ((73 ? var_5 : var_0)) : var_16));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = (arr_1 [i_0 + 1]);
        var_20 *= ((-410399214 ? ((((!((((arr_1 [5]) ? var_3 : 75))))))) : (min(var_13, var_7))));
    }
    #pragma endscop
}
