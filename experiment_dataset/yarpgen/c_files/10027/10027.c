/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = ((max(var_9, (var_8 / var_1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 172;
        var_12 = 94;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = -65524;
        var_14 = ((var_5 ? var_5 : var_6));
    }
    #pragma endscop
}
