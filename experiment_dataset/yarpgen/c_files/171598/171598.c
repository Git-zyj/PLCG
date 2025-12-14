/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((((var_1 ? (((var_2 ? var_15 : var_0))) : var_13)) == ((min((-368974092 + 241), (var_11 < var_5))))));
    var_20 = var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_21 = var_12;
        var_22 ^= var_1;
        var_23 ^= (((var_17 ? -13247 : 368974092)));
        var_24 = ((-(arr_1 [i_0 + 1] [i_0])));
    }
    #pragma endscop
}
