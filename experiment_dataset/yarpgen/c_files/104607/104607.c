/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_15 &= (max((arr_1 [i_1 - 3]), 194));
                var_16 = var_11;
                var_17 = min((((arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? (arr_2 [i_1 - 3] [i_1 - 4] [i_1 - 2]) : (arr_2 [i_1 - 3] [i_1 - 3] [i_1 - 1]))), (arr_2 [i_1] [14] [i_1]));
                var_18 = (((!2408947254) >> ((((~(arr_1 [i_1 - 1]))) - 3271704403898992440))));
            }
        }
    }
    var_19 *= ((((max(var_6, ((var_12 ? var_3 : var_7))))) ? ((var_8 ? ((max(-184207619, -184207619))) : var_1)) : (((var_2 ? var_13 : var_7)))));
    #pragma endscop
}
