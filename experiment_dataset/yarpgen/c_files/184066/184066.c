/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 = (min(((var_12 ? (max(11289, 3264737591)) : (((min(-26223, var_7)))))), (((3264737591 + var_14) ? ((var_0 ? (arr_2 [i_0]) : 17287)) : var_8))));
        var_17 = (min(var_17, (arr_0 [i_0])));
    }
    var_18 = (var_15 << ((((~(!1169452664))) + 32)));
    #pragma endscop
}
