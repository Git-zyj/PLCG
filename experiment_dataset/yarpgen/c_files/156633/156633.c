/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [9] = (var_0 ? (min(((var_12 ? var_11 : (arr_2 [i_0]))), ((((-9223372036854775807 - 1) && var_3))))) : ((var_1 ? (((arr_0 [i_1] [i_1]) ? (arr_2 [i_0]) : 106)) : (((min(0, var_8)))))));
                var_15 = ((!(((32767 >> (61227 - 61205))))));
            }
        }
    }
    var_16 = ((var_8 || (((((max(var_13, 1625))) ? var_12 : var_14)))));
    #pragma endscop
}
