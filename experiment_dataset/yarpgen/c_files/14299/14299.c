/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min(8371864752039556662, 114)) - var_4)));
    var_18 = (((((25 ? 96 : 0))) && var_13));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 = arr_0 [i_0];
        var_20 -= 62;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_21 *= (((((var_1 / (arr_4 [1] [1])))) && (var_10 == -31)));
        var_22 ^= (((var_10 && 1) & var_2));
    }
    #pragma endscop
}
