/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((var_3 ? ((((arr_2 [i_0]) != var_2))) : 112));
                var_13 = (min((arr_3 [20]), (min(((11981174150273141334 ? var_3 : -6713403191345723631)), (arr_0 [i_0 + 2])))));
            }
        }
    }
    var_14 = var_1;
    var_15 = (max((min((min(var_6, var_10)), ((max(var_11, 1))))), 112));
    #pragma endscop
}
