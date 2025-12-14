/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (((var_15 ? var_0 : ((var_9 ? var_7 : var_7)))));
    var_20 = var_5;
    var_21 = (-1765726508 ? -8911508292692709526 : 24771);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = ((((arr_1 [i_1 - 3] [i_0 - 2]) ? var_14 : (arr_1 [i_1 - 3] [i_0 - 2]))));
                arr_6 [i_1] [11] = (((((((var_0 ? 24771 : var_5)) * (arr_3 [i_1])))) ? ((max((arr_1 [i_0] [i_0]), (min(var_0, var_7))))) : var_1));
            }
        }
    }
    #pragma endscop
}
