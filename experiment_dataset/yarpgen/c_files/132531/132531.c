/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min((((((var_12 ? var_16 : var_11))) ? (((var_17 ? var_14 : var_12))) : (min(var_3, var_9)))), (var_0 & var_6))))));
    var_19 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (min(var_20, (((10294 ^ (~var_14))))));
        var_21 = (max(var_21, ((((arr_2 [i_0] [1]) ? var_6 : (arr_2 [12] [12]))))));
    }
    var_22 = var_8;
    #pragma endscop
}
