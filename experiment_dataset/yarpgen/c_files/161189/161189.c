/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = -var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((((min(var_18, var_1))) ? ((max(var_0, var_8))) : -var_0));
                arr_6 [i_1] [i_0] [8] = ((var_3 << (((((~var_18) ? ((min(var_8, var_3))) : var_16)) + 3812))));
                var_22 ^= ((min(var_18, var_3)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_23 &= (!var_14);
                            var_24 = var_3;
                            var_25 = ((~(var_7 / var_5)));
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_0] = ((((((~var_1) ? var_18 : (min(var_4, var_14))))) ? var_8 : ((~(~var_8)))));
                            var_26 = ((-(max(var_10, var_0))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_0] = ((var_17 ? var_11 : ((var_17 ? -var_2 : var_12))));
            }
        }
    }
    var_27 = (max((((var_0 ? var_9 : var_10))), var_5));
    var_28 |= ((((~var_6) ? var_11 : (~var_16))));
    #pragma endscop
}
