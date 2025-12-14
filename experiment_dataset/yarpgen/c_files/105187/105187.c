/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(var_5, var_6)), (max(var_8, (((var_9 ? var_5 : var_4)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((var_3 ? (min(((var_5 ? var_6 : var_9)), var_4)) : var_4));
        arr_3 [i_0] = var_10;
    }
    var_15 = ((9 ? -4 : 31285));
    var_16 = (max((((var_2 ? var_13 : var_3))), var_11));
    var_17 = var_3;
    #pragma endscop
}
