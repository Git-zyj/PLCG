/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((!var_17), var_8))) ? 14128047752749202194 : (((((4318696320960349421 >= var_0) >= var_8))))));
    var_20 = var_13;
    var_21 = ((var_5 & (var_16 + 16221696199711453761)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((59 ? (arr_0 [i_0]) : 4318696320960349421))) ? 4318696320960349417 : -28682)));
                var_22 = (((arr_0 [i_0]) * (arr_4 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
