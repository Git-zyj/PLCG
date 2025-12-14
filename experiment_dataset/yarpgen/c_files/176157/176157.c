/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = (var_14 / var_1);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((((((~var_6) ? var_11 : var_15))) ? (((!((max(var_18, 32)))))) : (arr_0 [i_0 - 1]))))));
                    var_23 = var_11;
                    var_24 = (!((max((arr_6 [i_0] [i_0 - 1] [i_2 + 1]), var_4))));
                }
            }
        }
    }
    #pragma endscop
}
