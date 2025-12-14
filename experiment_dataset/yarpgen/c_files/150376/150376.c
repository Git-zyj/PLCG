/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((9 ? (((95 ? var_9 : var_13))) : ((var_0 ? var_10 : 27325))))) ? (((((var_6 ? var_0 : var_3)) << (((min(0, -1949193222)) + 1949193230))))) : var_5));
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = ((0 ? (arr_2 [i_0]) : (((arr_0 [i_0]) % var_13))));
        var_21 = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
    }
    #pragma endscop
}
