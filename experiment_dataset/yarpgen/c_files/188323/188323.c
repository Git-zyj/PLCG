/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, (min((min((min(18, var_3)), (arr_0 [i_0] [i_0]))), (min((!var_8), (max(var_9, (arr_1 [i_0])))))))));
        var_14 = (max(var_14, (((~((-(arr_0 [i_0] [i_0]))))))));
    }
    var_15 = var_1;
    #pragma endscop
}
