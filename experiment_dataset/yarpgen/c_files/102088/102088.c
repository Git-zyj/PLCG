/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(112, ((128 ? var_0 : 127))));
    var_12 = (max(var_9, ((var_10 ? var_2 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_8;
                var_13 = ((((max(var_0, var_3))) | ((var_8 ? var_8 : (arr_4 [i_0])))));
            }
        }
    }
    #pragma endscop
}
