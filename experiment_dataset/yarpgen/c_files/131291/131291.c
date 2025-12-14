/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 &= ((((((-63 ? 1193 : 1193)))) ? ((min((max(var_9, var_5)), var_7))) : ((max(var_17, var_5)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] = min(((min(var_3, var_5))), (((((var_12 & (arr_7 [i_2 - 1] [i_1] [i_2] [i_2])))) ? var_17 : ((var_0 ? -7 : var_7)))));
                                var_19 += var_14;
                                var_20 -= (min((!var_4), (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) > var_9))));
                            }
                        }
                    }
                    var_21 = (min(var_10, 152218879));
                }
            }
        }
        arr_15 [i_0 + 1] = (max(((var_5 ? ((max(1193, -66))) : ((var_17 ? 205 : -55)))), (((((var_15 ? var_14 : var_14))) ? var_16 : ((18446744073709551615 ? var_11 : var_16))))));
        var_22 = var_0;
        arr_16 [i_0] [i_0 - 1] = ((-4392452977307219998 ? -2731505737302000501 : -874612703));
    }
    var_23 = ((var_4 ? ((max(var_17, var_5))) : ((var_10 ? (max(var_8, var_16)) : 3))));
    #pragma endscop
}
