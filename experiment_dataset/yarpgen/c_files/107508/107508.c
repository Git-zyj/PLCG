/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(var_6, var_11);
    var_18 = ((!((max(((min(var_16, var_2))), var_6)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = var_0;
        var_20 = (max(var_20, (((!((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
    }
    #pragma endscop
}
