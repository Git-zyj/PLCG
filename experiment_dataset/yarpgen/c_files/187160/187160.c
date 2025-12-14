/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_14 -= (arr_1 [i_0]);
        var_15 *= (((((((((var_10 ? (arr_2 [i_0]) : var_10))) ? ((max(var_0, var_9))) : var_1)) + 9223372036854775807)) << (var_7 - 541689817)));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((!(((var_8 ? (~var_11) : var_6)))));
        var_16 = (((var_1 ? 702 : 1147860212)));
        arr_7 [i_1] = var_2;
        var_17 -= ((((arr_3 [i_1 + 1]) | (arr_3 [i_1 + 1]))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_18 = (arr_9 [i_2 + 1]);
        var_19 ^= var_13;
    }
    var_20 = (min(-713, var_4));
    var_21 = (max(var_21, ((min(((-(57549 & var_9))), ((~(!var_0))))))));
    var_22 = var_5;
    #pragma endscop
}
