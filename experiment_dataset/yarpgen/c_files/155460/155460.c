/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_1 [i_0])));
        var_16 = ((-(~-12)));
    }
    var_17 += var_1;
    var_18 = (max(var_18, var_10));
    #pragma endscop
}
