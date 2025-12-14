/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((max((arr_0 [i_0]), ((32758 ? var_8 : var_2))))) > (max((((-32764 ? (arr_0 [i_0]) : var_2))), (min((arr_1 [i_1]), var_10))))));
                var_16 -= (((((arr_3 [i_0] [i_0]) & ((var_6 | (arr_3 [i_0] [i_0]))))) ^ ((max((((arr_0 [i_0]) | var_15)), (~var_14))))));
                arr_6 [16] [i_1] [i_1] = var_4;
            }
        }
    }
    var_17 = (((((-var_5 ? var_10 : (((var_12 ? var_14 : 1)))))) ? var_2 : (((!var_6) ? var_7 : (var_6 / var_2)))));
    var_18 ^= (max((-9153 + 1), var_8));
    #pragma endscop
}
