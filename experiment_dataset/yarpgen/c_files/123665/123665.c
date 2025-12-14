/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 ^= (max((min((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (min((arr_0 [i_0]), var_0)))), var_5));
        var_13 *= (((arr_3 [i_0] [i_0]) << (((((arr_1 [1] [i_0]) ? (arr_2 [i_0]) : (!4294967295))) - 17073))));
        var_14 = (min(var_14, (((((((arr_0 [i_0]) ? ((var_8 ? (arr_0 [i_0]) : var_6)) : (((((arr_2 [i_0]) < 1))))))) ? (max(((var_0 ? (arr_1 [i_0] [i_0]) : 32)), ((((arr_1 [i_0] [i_0]) ? var_5 : 805306368))))) : (2097151 * 2023))))));
    }
    var_15 = ((var_5 ? var_1 : 1));
    var_16 = var_0;
    var_17 = var_7;
    #pragma endscop
}
