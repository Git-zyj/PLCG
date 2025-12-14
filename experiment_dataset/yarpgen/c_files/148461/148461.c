/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((!((max(24728, 48210)))));
        var_19 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0])));
    }
    var_20 = 100;
    var_21 &= (((((~var_6) == var_12)) ? var_8 : (var_6 || 18)));
    #pragma endscop
}
