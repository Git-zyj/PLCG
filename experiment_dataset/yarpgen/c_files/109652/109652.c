/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_14 *= max((max((arr_2 [i_0] [i_1]), 1266399853)), 1266399849);
                var_15 = (max((((-(arr_2 [i_0] [i_1])))), (min((arr_0 [i_0]), var_0))));
            }
        }
    }
    var_16 = min(((((max(var_7, 23812))) ? ((var_0 ? 3028567439 : var_12)) : (((var_6 ? var_10 : var_11))))), (min((!var_5), (max(3028567431, 65970697666560)))));
    var_17 = ((var_2 | (var_2 | var_4)));
    #pragma endscop
}
