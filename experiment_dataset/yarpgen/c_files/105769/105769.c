/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_14 || (var_15 == var_8)))) > 0));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 ^= (arr_0 [13] [i_0]);
        var_21 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_22 &= (min(0, (min(var_4, (((arr_4 [i_1 + 1] [14]) ? var_0 : 0))))));
        var_23 = ((min((arr_5 [i_1 - 1]), var_9)));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_24 *= (min(((min(var_12, (-127 - 1)))), ((var_8 ? var_2 : var_3))));
        var_25 += var_6;
    }
    #pragma endscop
}
