/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = (max((max((min(-5839414053363613884, (arr_0 [12]))), var_7)), ((((min(var_10, var_2)) ^ var_10)))));
        arr_2 [i_0] = (!-var_2);
        var_21 = ((!((max(-var_7, ((1 ? var_13 : var_0)))))));
        arr_3 [i_0] = 3272409667;
        var_22 = (((((var_17 + (arr_1 [i_0])))) ? (((max((arr_1 [i_0]), (arr_0 [1]))))) : (min(-22962, (arr_1 [i_0 - 1])))));
    }
    var_23 = var_15;
    #pragma endscop
}
