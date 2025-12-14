/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((4294967293 & -1) << (var_10 - 28069)));
    var_15 = (min(var_15, ((max(((-((min(-49, var_11))))), -var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [9] = (((-var_10 + 2147483647) << ((((var_4 ? var_6 : 46497)) - 4074220277))));
        arr_4 [i_0] = ((!(arr_1 [i_0] [i_0])));
    }
    var_16 = (min(var_4, (~0)));
    #pragma endscop
}
