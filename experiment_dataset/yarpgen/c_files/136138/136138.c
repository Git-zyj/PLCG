/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!(17206773544124047052 == var_11))));
    var_16 |= ((((max((min(var_4, 1)), ((var_14 ? 24685 : var_0))))) | var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = ((max(var_3, 2498336384818215766)));
                    arr_11 [i_0] = ((!((!(((var_8 ? var_12 : (arr_5 [i_1]))))))));
                }
            }
        }
    }
    var_18 = 1;
    var_19 -= (((-5783561317501243340 == 1) <= var_4));
    #pragma endscop
}
