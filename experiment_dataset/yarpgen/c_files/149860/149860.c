/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(-543, -18873)) ? var_8 : (var_7 <= var_8)))));
    var_15 = ((((!((max(-834816416, var_2))))) ? var_11 : (max(3297954206436014627, (var_8 && var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [13] [i_1] = ((!((min(1791085540321250913, 2202063833)))));
                arr_7 [i_0] = 2202063843;
            }
        }
    }
    #pragma endscop
}
