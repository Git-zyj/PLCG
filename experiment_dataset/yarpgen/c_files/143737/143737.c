/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        var_22 = 4;
    }
    var_23 = (((min(((12101 ? var_9 : var_2)), ((max(var_18, var_14))))) + 8176));
    #pragma endscop
}
