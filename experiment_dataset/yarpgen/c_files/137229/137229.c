/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = var_16;
        var_18 = (((((~26350) + 2147483647)) >> (((max(((16380 ? var_13 : var_8)), 199)) - 12597))));
    }
    var_19 = var_15;
    var_20 = ((+(((6626 - 268435456) ? var_11 : (var_9 < var_12)))));
    var_21 ^= var_16;
    var_22 = min(8796093022208, (((!(48 && var_0)))));
    #pragma endscop
}
