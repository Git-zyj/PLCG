/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((((!var_9) ? var_11 : ((var_11 ? var_14 : var_10)))))));
    var_16 = ((((((~var_1) ? ((var_8 ? var_9 : var_3)) : var_4))) ? (-2128216051 | -84) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = var_7;
                    var_18 = var_9;
                    arr_8 [i_0] [i_0] [i_2 - 1] [i_2 - 2] = (arr_2 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
