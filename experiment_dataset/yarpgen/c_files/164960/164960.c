/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = ((((((var_0 & var_2) << (((((arr_6 [i_0] [i_1] [i_1] [i_2]) ? var_1 : (arr_3 [i_1 + 1] [16]))) + 79))))) ? var_1 : (arr_0 [13])));
                    var_13 -= (arr_4 [i_1] [i_1]);
                    var_14 = (((~var_1) - (min(((var_2 ? (arr_1 [i_1]) : (arr_0 [i_1]))), 1))));
                }
            }
        }
    }
    var_15 = (max((((var_4 < (var_1 & var_5)))), (((~-4974) ? ((var_9 ? var_2 : var_1)) : ((var_5 ? var_0 : var_2))))));
    var_16 = var_10;
    #pragma endscop
}
