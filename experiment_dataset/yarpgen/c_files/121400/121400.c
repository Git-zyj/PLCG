/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, ((((min(175, 109))) ? (arr_2 [i_0 - 1]) : var_4))));
        var_12 = (arr_3 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_13 &= (147 + 151);
        arr_7 [i_1] = ((arr_6 [i_1 - 2]) / (arr_5 [9] [i_1 - 1]));
        var_14 = (((-9223372036854775807 - 1) + 151));
    }
    var_15 = (max(var_15, (max(var_5, var_1))));
    #pragma endscop
}
