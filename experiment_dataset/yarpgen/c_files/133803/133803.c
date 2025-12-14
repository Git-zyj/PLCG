/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = ((((var_10 ? (~var_4) : ((var_9 ? var_5 : 96878036424722612)))) ^ ((var_9 ? ((var_10 ? 1 : var_6)) : (~var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] = var_1;
                arr_9 [i_1] [i_1] = ((var_1 ? (arr_5 [2]) : ((max(12169, var_8)))));
            }
        }
    }
    var_13 = (max(var_13, ((((((max(var_6, var_0))) ? (min(var_3, var_3)) : (~1))) + var_4))));
    var_14 = var_1;
    #pragma endscop
}
