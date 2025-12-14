/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((1358 ? (min((var_11 | var_15), (~-2099790154))) : (var_9 & var_6)));
    var_20 = (((((((var_4 ? var_1 : -2099790170))) ? var_14 : var_18))) ? var_12 : ((var_7 ? (var_17 % var_5) : (((1912461967 ? var_6 : var_12))))));
    var_21 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 -= ((!(((var_15 | (!262136))))));
        var_23 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (max(16383, 67522500));
        var_24 = (min(var_24, ((min(-5343078968230921723, (~2099790169))))));
        var_25 = ((max((arr_1 [i_1] [i_1]), (241 ^ 126))));
    }
    #pragma endscop
}
