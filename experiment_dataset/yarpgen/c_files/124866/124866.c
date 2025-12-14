/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((((~(~var_1)))) ? (max(((var_8 ? (arr_5 [i_1] [i_0]) : var_14)), ((var_1 ? var_6 : var_5)))) : (arr_1 [i_0] [i_1]));
                var_16 = (max(var_16, (((((max((arr_5 [i_0] [i_0]), (arr_0 [i_1])))) ? ((max((((arr_6 [13] [i_1]) ? var_2 : var_9)), (max((arr_2 [i_1]), var_1))))) : (max((arr_0 [i_1]), 8301)))))));
            }
        }
    }
    var_17 = ((var_2 | (~-var_0)));
    var_18 = ((max(-var_7, var_8)));
    var_19 |= var_5;
    var_20 = var_10;
    #pragma endscop
}
