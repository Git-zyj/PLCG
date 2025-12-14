/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 += ((var_9 ? var_1 : (max((arr_5 [i_0] [i_1] [i_1 + 1] [i_0 + 1]), (arr_6 [0] [i_2] [i_1 + 1] [0])))));
                    var_13 = (((((((((arr_2 [i_1] [i_0]) ? var_9 : 0))) ? ((var_2 ? var_1 : (-127 - 1))) : ((((arr_0 [i_0]) < var_11)))))) ? (-127 - 1) : (((((var_0 ? (arr_1 [i_1]) : var_10))) ? (arr_1 [i_0]) : (((127 ? var_9 : (arr_4 [i_0]))))))));
                }
            }
        }
    }
    var_14 = (((((((min(var_0, var_4))) ? ((var_0 ? var_1 : 127)) : var_0))) && var_6));
    #pragma endscop
}
