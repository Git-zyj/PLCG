/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (!var_10);
        arr_4 [i_0] [i_0] = var_9;
        var_16 *= var_12;
        arr_5 [i_0] [i_0] = var_4;
        var_17 = var_0;
    }
    var_18 = (max(var_18, var_8));
    #pragma endscop
}
