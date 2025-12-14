/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] &= ((((1 ? 27173 : -27200)) / -27175));
        var_12 = ((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]));
    }
    var_13 = (max(var_13, (((-27163 ? var_0 : var_3)))));
    var_14 -= (((var_2 || var_1) ? var_6 : (((((var_10 ? var_8 : var_11)) >> (var_7 - 1522724876))))));
    var_15 &= (max((-27182 / 5845226684385852772), var_1));
    #pragma endscop
}
