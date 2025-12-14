/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 += ((47107 >> 7) > (arr_0 [i_0] [1]));
        var_18 += ((((!(arr_0 [6] [10]))) ? (((!var_0) >> (var_10 - 3104750240))) : (((((arr_1 [i_0] [i_0]) + 2147483647)) >> (((arr_1 [i_0] [i_0]) + 32286))))));
    }
    var_19 = (max(var_19, ((((((((var_10 ? var_0 : var_2))) ? var_13 : var_2))) ? (((((var_0 - 47113) > -32768)))) : var_9))));
    var_20 = (max(var_20, var_15));
    var_21 |= ((var_7 ? 2147483647 : ((var_11 ? (max(var_10, 2147483647)) : var_13))));
    #pragma endscop
}
