/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((115 & ((56 ? var_4 : 22))));
                arr_6 [i_1] [13] [i_0] = ((-117 > (~113)));
                var_17 = (((var_6 ? 127 : var_16)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                var_18 = (max(var_18, var_7));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_19 ^= ((((min(73, (-127 - 1)))) ? (var_0 + 3) : -5));
                            var_20 = ((~((77 ? (-127 - 1) : -70))));
                        }
                    }
                }
                var_21 = (((((~-13) >= (((arr_9 [1] [i_3 + 1]) ? var_3 : -121)))) ? (-57 - 78) : (max((-60 / -1), (!var_2)))));
            }
        }
    }
    #pragma endscop
}
