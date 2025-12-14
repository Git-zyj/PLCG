/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [10] [i_2] [i_1] [11] = (!-var_4);
                            var_16 ^= (!-var_3);
                            var_17 -= var_13;
                            var_18 = ((var_6 - (!var_7)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 = ((-(var_14 / -var_14)));
                                var_20 ^= (((!-335888254) * (~var_10)));
                                var_21 = var_6;
                            }
                        }
                    }
                }
                var_22 &= -var_12;
            }
        }
    }
    var_23 = (~-var_14);
    #pragma endscop
}
