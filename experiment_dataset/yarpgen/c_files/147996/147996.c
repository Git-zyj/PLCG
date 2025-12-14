/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = 3445838418;
        arr_4 [i_0] [i_0] = var_0;
    }
    var_13 = ((((min(var_2, var_4))) ? (min(((var_6 ? var_2 : var_3)), var_7)) : ((((min(var_9, var_6))) ? var_0 : var_3))));
    var_14 = var_4;
    #pragma endscop
}
