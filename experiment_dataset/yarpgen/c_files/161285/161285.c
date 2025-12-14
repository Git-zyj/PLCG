/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = (!var_8);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_13 = ((187 | 1) / var_0);
                    var_14 = (((arr_5 [i_0] [i_2]) ? ((var_0 ? var_11 : var_8)) : (var_7 * -8064)));
                }
                var_15 = (((((var_1 & (arr_4 [i_1])))) ? var_6 : (((arr_5 [i_0] [i_1]) << (494162607 - 494162607)))));
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
