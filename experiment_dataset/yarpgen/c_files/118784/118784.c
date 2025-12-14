/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = var_5;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_17 |= var_12;
        arr_3 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = min(((min((min(var_0, var_12)), (!var_8)))), (min(var_1, var_13)));
        var_18 += var_10;
        arr_8 [i_1] = (max(var_10, var_9));
    }
    #pragma endscop
}
