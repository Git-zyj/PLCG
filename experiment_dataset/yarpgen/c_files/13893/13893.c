/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0]) ? ((-(arr_0 [i_0]))) : (arr_0 [i_0])));
        var_13 = ((10929001326230487342 << ((((arr_0 [i_0]) <= var_1)))));
    }
    var_14 -= (var_4 && 7517742747479064250);
    #pragma endscop
}
