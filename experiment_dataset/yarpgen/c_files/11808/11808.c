/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((max(103, (max(208, var_11)))))) - var_14));
    var_17 |= (((((((min(29, 230))) ^ 63))) ? (min(((var_13 ? 29 : 1)), ((max(32, var_8))))) : ((var_9 ? var_6 : var_3))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((((arr_0 [14] [i_0]) ? 247 : 227))) != -3983581997401122589));
        var_19 = (29 - var_0);
    }
    var_20 += (((max(998775755, var_2)) - var_1));
    #pragma endscop
}
