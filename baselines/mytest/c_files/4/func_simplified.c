/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/4
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 ? 125 : ((((var_7 & (1006632960U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3)
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1)
        {
            {
                var_20 = var_9;
                var_21 = (((arr_4 [i_1] [i_0]) < (arr_4 [i_0] [i_1])));
                arr_5 [i_0] = var_15;
            }
        }
    }
    var_22 = ((+(((((var_14 ? (4115711148349067572LL) : var_14))) ? var_18 : (((var_6 ? var_7 : var_13)))))));
    #pragma endscop
}
