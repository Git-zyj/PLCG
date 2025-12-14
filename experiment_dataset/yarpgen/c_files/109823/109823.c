/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (arr_5 [i_0]);
                    var_20 = (min(var_20, ((max(-1383226442597527113, 0)))));
                }
            }
        }
    }
    var_21 = ((var_5 ? (var_3 - var_1) : var_6));
    var_22 = ((((((((var_3 ? -2 : var_5))) ? (((1383226442597527099 ? var_4 : var_11))) : (max(1383226442597527113, var_0))))) ? ((var_8 ? ((min(var_3, var_0))) : var_19)) : ((max(var_9, var_0)))));
    #pragma endscop
}
