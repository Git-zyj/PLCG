/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(9223372036854775807, 1)) & var_10)));
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0 - 1] [i_0] = (min(21123, 2097151));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((1 ? (arr_1 [i_1 + 2]) : 127));
        var_15 = var_14;
    }
    var_16 = ((-((var_3 ? (var_11 & var_13) : -32764))));
    #pragma endscop
}
