/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(0, 572333995));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(var_12, (((min(3642331049259184512, 694349517)) * ((((arr_0 [i_0]) ? var_2 : (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = (arr_1 [i_0] [1]);
        var_13 = (((!((((arr_1 [8] [i_0]) ? var_8 : var_9))))));
    }
    #pragma endscop
}
