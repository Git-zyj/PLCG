/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_10 = (min(var_10, (((var_9 ? var_5 : ((var_1 ? var_4 : var_4)))))));
        var_11 = (min(var_1, 120389942));
        var_12 = (min(var_12, ((max((((var_0 ? var_9 : ((0 ? 0 : var_8))))), var_3)))));
        arr_2 [9] |= var_8;
    }
    var_13 = var_4;
    var_14 = (11 | 0);
    var_15 = (!12501);
    #pragma endscop
}
