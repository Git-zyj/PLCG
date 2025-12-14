/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max((((var_1 ? -6 : 7800))), (var_10 ^ var_4)))) ? (((-(var_9 == 44188)))) : (((((0 ? var_16 : var_1))) ? ((var_14 ? var_11 : var_15)) : (var_14 ^ var_16)))));
        var_18 = (max((((!(var_8 && var_8)))), 30));
        var_19 = (max((max(((max(3411319937, var_7))), ((-32605 ? var_13 : var_10)))), (((((675999875 ? var_10 : var_15))) ? ((max(var_4, var_13))) : (4279148023864477271 / 3722)))));
    }
    #pragma endscop
}
