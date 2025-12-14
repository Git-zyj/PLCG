/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~var_1) ? (((var_13 ? var_18 : ((var_4 ? -1088091164 : var_5))))) : (((var_4 ? var_1 : var_0))));
    var_20 = ((var_0 != (min(var_3, (((var_9 ? var_4 : var_10)))))));
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_5;
                var_22 = ((((((var_10 ? (arr_1 [i_0]) : var_5)))) ? (min((arr_2 [8] [i_1]), (arr_0 [i_0 - 4]))) : ((max(var_0, (arr_3 [i_0] [i_0 + 1] [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
