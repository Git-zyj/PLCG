/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_1));
    var_19 = (var_13 + var_8);
    var_20 = (((-var_17 << (46424 - 46418))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((var_3 | (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_1]) : var_12)) : ((((arr_1 [i_1]) | (arr_1 [i_0]))))))));
                arr_7 [i_1] = (max(((((min(var_8, (arr_1 [i_0])))) * ((var_0 ? var_6 : var_6)))), ((((max(var_3, var_8))) * (!var_0)))));
                var_22 = max(var_14, (arr_1 [i_0]));
                var_23 = var_16;
            }
        }
    }
    #pragma endscop
}
