/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (-2023634017 ? (((arr_4 [i_0] [i_1] [i_0]) / var_5)) : ((-(min(var_18, 5182778209219754573)))));
                var_20 = ((((5182778209219754562 ? 9223372036854775807 : 9223372036854775807))) ? ((((((var_3 ? -1761148288 : var_10)) + 2147483647)) >> (((min(var_6, 5182778209219754580)) - 46216650)))) : var_10);
            }
        }
    }
    var_21 = 2023634043;
    var_22 = var_18;
    var_23 = var_9;
    #pragma endscop
}
