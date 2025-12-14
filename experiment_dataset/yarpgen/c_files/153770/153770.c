/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [4] [1] [i_1] = ((-((var_10 ? var_6 : var_10))));
                var_20 = ((((min(var_16, var_10))) ? ((var_0 ? ((min(var_18, var_7))) : ((max(var_5, var_8))))) : ((var_15 ? var_14 : var_17))));
                var_21 = (((((var_2 ? var_0 : var_8))) ? (max(var_10, var_4)) : var_15));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_4] [i_3] [i_4] [i_0] [i_2] = var_15;
                                var_22 ^= (((var_12 || var_9) ? (((min(var_2, var_6)) % var_17)) : ((var_1 ? var_1 : -var_13))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 *= ((((min(((min(var_6, var_13))), var_4))) ? (((var_9 | ((max(var_9, var_17)))))) : (min(var_6, ((var_12 ? var_4 : var_8))))));
    #pragma endscop
}
