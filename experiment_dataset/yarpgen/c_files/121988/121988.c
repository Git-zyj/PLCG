/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 = var_7;
        var_15 = (max(-3226092922679087593, (arr_0 [i_0])));
        var_16 = (min(var_16, (((+(((arr_0 [i_0 + 1]) ? (((var_2 ? (arr_0 [i_0]) : (arr_1 [9])))) : var_10)))))));
    }
    var_17 = (max(((34 ? var_2 : var_4)), var_5));
    var_18 = (min(var_18, -3226092922679087593));
    #pragma endscop
}
