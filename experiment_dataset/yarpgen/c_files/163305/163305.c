/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [11] = ((arr_1 [i_0 + 1] [i_0 + 1]) ? (((var_3 ? 4294967286 : var_0))) : -var_6);
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [i_0 + 1]);
        var_15 = ((var_10 ? var_10 : 933444719));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_16 = (max(var_16, (var_4 <= 0)));
        arr_8 [i_1] = ((-((var_13 ? ((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) : (((arr_4 [i_1] [i_1]) ? var_11 : var_7))))));
    }
    var_17 = (max(var_17, var_10));
    #pragma endscop
}
