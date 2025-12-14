/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 += ((var_2 ? 147 : ((var_9 ? var_17 : var_10))));
                var_22 = var_7;
                var_23 = (max(var_23, (((((((var_16 ? var_3 : var_8))) ? var_15 : var_3))))));
                var_24 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_25 *= var_15;
                                var_26 = ((var_15 ? ((var_9 ? var_11 : var_11)) : -1));
                                var_27 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_13;
    #pragma endscop
}
