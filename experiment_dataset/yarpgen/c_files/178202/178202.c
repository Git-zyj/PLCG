/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = var_5;
                arr_6 [i_0] = (max(((14 ? (min(2871200406, 1401019812)) : (((var_15 ? var_5 : var_15))))), ((var_4 ? var_6 : var_5))));
                var_18 = ((((max(2351722852, 2351722852))) ? (arr_0 [i_0]) : (((((var_7 ? 2102811639 : var_1))) ? ((min(var_0, var_13))) : var_2))));
            }
        }
    }
    #pragma endscop
}
