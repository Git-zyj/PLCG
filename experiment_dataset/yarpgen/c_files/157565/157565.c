/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 ^= (!469756572212549824);
        var_15 = (min(-29027, 109));
    }
    var_16 = (min((((var_4 ? var_7 : var_11))), ((min((min(var_2, var_6)), var_12)))));
    #pragma endscop
}
