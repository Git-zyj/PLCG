/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((min((arr_3 [i_0] [i_0] [i_0]), (-27755 < 2153675075))))));
                var_20 = (38399 % 92);
            }
        }
    }
    var_21 = (min(7596, 4));
    var_22 -= min((-28798 > -var_18), (min((min(4194303, var_16)), 7)));
    var_23 = var_6;
    var_24 = ((~((-25527 ? (max(var_3, var_15)) : ((5848396092391621512 ? var_4 : var_15))))));
    #pragma endscop
}
