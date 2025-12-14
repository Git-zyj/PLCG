/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = ((var_11 + ((+(((arr_1 [i_0]) ? var_13 : (arr_1 [i_0])))))));
        arr_2 [i_0] [15] = ((-(~112)));
        var_21 = var_13;
    }
    var_22 = (var_0 && var_18);
    var_23 = (min(var_23, ((((var_5 ? (((min(var_18, var_17)))) : (var_9 / var_12))) * (((var_16 ^ var_12) ? var_2 : var_0))))));
    #pragma endscop
}
