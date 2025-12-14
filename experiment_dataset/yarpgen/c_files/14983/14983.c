/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((!((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))))));
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = (1737712761540211717 ? 2068848037 : (-9223372036854775807 - 1));
        var_18 ^= ((((-(((arr_1 [i_1]) ? (arr_6 [i_1] [i_1]) : var_17)))) >> (((((((arr_6 [i_1] [i_1]) + 9223372036854775807)) >> (((arr_7 [i_1]) - 746249624)))) - 9842240))));
        var_19 -= 248;
    }
    var_20 = var_15;
    var_21 = 2510303933794502342;
    var_22 = (min(var_22, (821476571 ^ 3695780512)));
    var_23 = (((~((3695780500 >> (var_14 - 1394))))));
    #pragma endscop
}
