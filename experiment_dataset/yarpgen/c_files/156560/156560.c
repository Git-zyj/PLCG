/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_0 ? 31 : var_0))) ? (((min(var_4, (min(var_0, -23)))))) : ((var_6 - (min(11173192709367560483, -31)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((arr_0 [i_0]) ? -47 : (arr_2 [14])))) ? (((var_5 ? (((arr_0 [i_0]) ? var_0 : var_5)) : (((-31099 || (arr_0 [i_0]))))))) : ((4130914396183208521 + (min((arr_1 [0]), (arr_1 [20]))))))))));
        var_13 ^= (((min(121, 50))));
    }
    #pragma endscop
}
