/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_2 / var_4) ? (((((var_2 ? var_0 : var_4))) % 101)) : ((max(((var_16 ? var_16 : -112)), (((2078807381 >> (var_17 - 137)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = 109;
                    var_21 = (((((min(19303, 96)))) <= (min(((((arr_2 [i_0] [11]) >= var_17))), ((19303 ? var_17 : (arr_7 [i_2] [i_1] [i_0])))))));
                    var_22 = var_13;
                    var_23 = ((min(17314750766873709828, 1)) - (min(((var_17 ? 18446744073709551615 : -112)), (((4 ? -32751 : 9223372036854775807))))));
                }
            }
        }
    }
    var_24 = (min((!9223372036854775807), (max((!var_12), 0))));
    #pragma endscop
}
