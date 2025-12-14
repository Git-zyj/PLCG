/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(9650469331060002509, ((396710634 ? ((max(201, 2305843009213689856))) : 8444473448759003884))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_11 = 240;
        var_12 &= var_7;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (67108864 > 9650469331060002509);
        var_13 = (((~1879048192) - (min((((arr_3 [i_1]) ? var_6 : var_9)), (!var_3)))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_14 = ((!(arr_6 [i_2 + 2])));
        var_15 = ((!((!(arr_8 [i_2 - 1])))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_16 = (min(var_16, (~var_4)));
        var_17 = ((-54 > (!var_2)));
    }
    #pragma endscop
}
