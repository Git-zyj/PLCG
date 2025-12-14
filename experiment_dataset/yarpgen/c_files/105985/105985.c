/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_3;
    var_17 ^= (min(((var_10 ? (0 < 0) : var_6)), ((((min(var_10, var_6))) | var_12))));
    var_18 = (min(-65, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [14] [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] [i_0] = (((arr_2 [14] [i_0]) % (arr_2 [i_0] [i_0])));
    }
    #pragma endscop
}
