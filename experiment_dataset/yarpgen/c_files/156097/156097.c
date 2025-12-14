/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((max(var_6, var_11))) ? var_6 : (684288695644739756 - var_2)))) ? (((var_4 ? (max(var_3, var_13)) : var_10))) : 140737488322560));
    var_19 &= min(var_16, var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((17762455378064811860 + (arr_0 [i_0] [i_0])));
        var_20 = 1;
    }
    var_21 = ((max(17762455378064811847, ((min(24, var_8))))));
    #pragma endscop
}
