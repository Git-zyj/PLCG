/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((var_9 ^ var_4) && (arr_0 [i_0])));
        var_14 = (max(var_9, (arr_1 [i_0] [i_0])));
    }
    var_15 = (min(((((((min(var_1, var_11)))) / (max(43, var_4))))), (((var_7 - var_8) ? (min(var_9, 6207236737900600979)) : var_8))));
    #pragma endscop
}
