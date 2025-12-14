/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [2] &= (((((558551906910208 ? var_0 : 255))) ^ ((240 ? var_3 : var_9))));
        var_14 = (arr_1 [i_0]);
    }
    var_15 = ((((var_8 - var_1) / ((var_7 ? var_0 : var_13)))) % (((6 ? ((min(1, 1))) : (26995 != var_4)))));
    #pragma endscop
}
