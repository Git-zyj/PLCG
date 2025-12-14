/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 56925328;
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = ((-2147483647 - 1) ^ 39372715);
        arr_3 [i_0] = 39372715;
    }
    var_18 = var_2;
    var_19 = -1238305603;
    #pragma endscop
}
