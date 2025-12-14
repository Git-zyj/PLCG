/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_5 - -var_5);
    var_15 = ((((((65535 ^ var_13) ? var_13 : (12066 / -1)))) ? ((((!(-5889 + 1))))) : ((((min(var_6, var_8))) ? (~12066) : ((var_4 ? var_9 : 12066))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (((((65535 ? (arr_1 [i_1]) : (arr_2 [i_0] [i_0])))) ? (((max((((arr_4 [i_0] [i_1]) >= var_9)), (65535 > 5051448524351711945))))) : ((+(((arr_2 [15] [i_1]) ? var_0 : -16006))))));
                var_17 = ((-1685025425 ? 65535 : ((max(12066, -10704)))));
            }
        }
    }
    #pragma endscop
}
