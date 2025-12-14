/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min((65535 <= 2321855775115279282), var_8)))) + (min(var_6, (var_7 % var_0)))));
    var_12 = ((var_9 ? (65531 & 65531) : ((var_9 ? (((1 ? 0 : var_8))) : ((139 ? var_9 : var_6))))));
    var_13 = var_1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_14 = ((var_1 ^ (((((arr_0 [i_0] [i_0 - 1]) + 2147483647)) << var_10))));
        arr_2 [i_0] = (((25 & 1) + (arr_0 [i_0 - 2] [i_0 + 4])));
        var_15 += ((-(arr_0 [i_0 - 1] [i_0 - 1])));
        var_16 = (arr_0 [i_0 + 1] [i_0 + 2]);
    }
    var_17 = (max(var_17, var_4));
    #pragma endscop
}
