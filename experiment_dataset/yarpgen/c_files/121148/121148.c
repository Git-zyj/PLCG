/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1989544943 ? 13 : ((((((var_10 ? var_5 : 18))) ? (var_4 || var_3) : (~248)))));
    var_13 ^= ((var_2 ? ((var_5 ? var_2 : (max(var_9, var_0)))) : ((min(81, var_11)))));
    var_14 = (((var_10 ? (max(var_2, var_9)) : ((2147483647 ? var_3 : var_2)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 = (-(max((arr_0 [i_0] [i_0]), ((max(2, var_1))))));
        var_16 = -9223372036854775799;
        var_17 = 2142606869801285497;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 *= (((arr_0 [i_1] [i_1]) ? (((var_2 ? var_10 : var_8))) : var_0));
        var_19 = (((arr_1 [i_1]) ? var_1 : 252));
    }
    #pragma endscop
}
