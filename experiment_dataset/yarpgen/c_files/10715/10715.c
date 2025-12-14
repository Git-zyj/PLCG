/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_1 [i_0] [i_0]);
        var_22 *= (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        arr_2 [13] [13] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_2));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (-8 ? (((arr_4 [i_1]) << (((((arr_3 [8] [i_1 + 1]) + 85)) - 18)))) : (arr_3 [i_1] [i_1 + 1]));
        arr_6 [i_1] = max(var_4, (((max(var_16, var_4)) << (var_3 - 3331496115))));
    }
    #pragma endscop
}
