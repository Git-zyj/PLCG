/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_10, (min(((var_12 ? 11383 : var_8)), ((var_4 ? var_3 : var_11))))));
    var_20 = (((115 <= 225) ? (max(((var_1 ? var_14 : var_4)), var_0)) : var_15));
    var_21 = ((-(((var_17 ? 20167 : 3683274870)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (max(var_22, ((((var_11 ? 11383 : var_7))))));
        arr_4 [i_0] = ((var_14 ? var_6 : var_18));
        var_23 = ((var_2 ? (~3089705117) : -var_15));
    }
    var_24 = (var_15 ^ var_18);
    #pragma endscop
}
