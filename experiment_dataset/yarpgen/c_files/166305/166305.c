/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_18 -= (((((((65535 ? 13 : var_15))) ? var_7 : -125)) ^ (~13)));
                arr_4 [i_0] [i_1] = (min((((((65523 ? 25 : 8))) ? 24 : ((min(247, var_4))))), ((min(50873, (15 || -8))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 ^= ((((65522 - ((max(0, 8520))))) < (!-25)));
                            var_20 |= (!var_0);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_12 [i_2] [i_1 + 1] [i_2] [i_2] [i_4] = ((-65 ? (!208) : (!9)));
                                var_21 = (var_15 & var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 80;
    #pragma endscop
}
