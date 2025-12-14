/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = ((((((var_2 ? var_5 : 1250605812762882906)) - ((var_0 ? -1 : 15542306052011682152)))) - 31670));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_14 -= (-47 != (arr_1 [i_0 - 1] [14]));
        arr_2 [i_0] = (max(((var_11 ? (arr_0 [i_0 - 2] [i_0]) : (arr_0 [i_0 - 2] [6]))), (max(0, 65533))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 -= (arr_4 [i_1]);
        var_16 = (min(var_16, ((~(arr_3 [i_1] [i_1])))));
    }
    #pragma endscop
}
