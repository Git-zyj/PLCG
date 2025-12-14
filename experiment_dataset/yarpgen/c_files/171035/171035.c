/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (!0);
        var_20 *= ((-(((((var_14 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) ? ((max((arr_1 [i_0] [i_0]), var_15))) : var_17))));
        var_21 *= ((~(((arr_2 [i_0]) & var_0))));
    }
    #pragma endscop
}
