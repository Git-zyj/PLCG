/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 4024926636965037019;
    var_21 *= ((((((!(~var_1))))) | 3561051069));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_22 = 719573196;
        var_23 ^= (!var_19);
        var_24 ^= (arr_1 [i_0 + 1] [i_0 + 1]);
    }
    #pragma endscop
}
