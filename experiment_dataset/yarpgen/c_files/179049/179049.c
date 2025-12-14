/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (((((var_5 ? var_11 : var_10))) <= (max(var_0, var_8))));
        var_13 = ((2251799813619712 ? -1650813347 : 2016));
        arr_3 [i_0] [i_0] = ((-var_1 ? var_0 : (-1650813347 / -1471720799959027632)));
        var_14 = (max(var_14, ((((((min(var_9, var_2))) ? (((18861303 ? 3613366072 : 3613366072))) : ((var_3 ? var_0 : var_11))))))));
    }
    var_15 = var_3;
    #pragma endscop
}
