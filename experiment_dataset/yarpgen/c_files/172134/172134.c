/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = var_6;
                arr_4 [i_0] = ((((min((max(var_3, 0)), 0))) ? ((((min(12, 7788231526347673138))))) : (min(((-(arr_0 [i_0]))), ((min(192, 9223372036854775807)))))));
            }
        }
    }
    var_15 = (min((((!(((var_13 ? -14 : var_13)))))), (((var_7 ? var_12 : var_6)))));
    #pragma endscop
}
