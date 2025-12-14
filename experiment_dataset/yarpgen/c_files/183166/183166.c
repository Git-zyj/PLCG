/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 -= ((var_12 ? var_7 : (((((var_10 ? var_5 : 19))) ? (((var_11 ? var_3 : 437452059))) : var_0))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((max((arr_0 [i_0]), 4194303)) <= ((31739 ? 4194303 : 19762))));
        var_19 = (max(var_19, (arr_1 [i_0])));
    }
    #pragma endscop
}
