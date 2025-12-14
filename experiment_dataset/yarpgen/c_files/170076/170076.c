/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (((var_6 == (max(1391445790, 3869578849452136780)))) ? var_4 : var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = ((var_2 ? ((var_12 ? var_8 : var_8)) : var_1));
        arr_3 [i_0] = (var_13 >= var_10);
        arr_4 [i_0] [i_0] = var_4;
    }
    #pragma endscop
}
