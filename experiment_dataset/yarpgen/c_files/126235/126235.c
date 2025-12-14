/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_7;
    var_15 = ((~(((((var_11 ? var_3 : var_11))) ? (((-1 + 9223372036854775807) >> (var_11 + 6908681451211482937))) : var_3))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = ((!(-43 & -90)));
        var_17 = (min(var_17, ((((89 ? 2287828610704211968 : 14275583873836319231))))));
    }
    #pragma endscop
}
