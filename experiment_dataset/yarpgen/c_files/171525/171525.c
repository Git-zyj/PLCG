/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 |= ((var_7 ? -var_10 : ((var_5 ? var_8 : var_6))));
        var_12 = ((~((var_6 ? (~var_2) : var_2))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_16 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] = ((((((var_6 ? var_4 : var_9)))) + ((var_1 ? (!var_4) : ((var_8 ? var_8 : var_4))))));
                            arr_17 [i_2] [i_2] [i_0] [i_3] = ((((var_7 + ((-2 ? -16782 : 2037705826))))) ? ((~(var_2 && var_6))) : (!var_7));
                        }
                        var_13 += ((-var_6 ? ((var_10 ? var_2 : (~var_0))) : var_9));
                    }
                }
            }
        }
        arr_18 [16] |= ((~(((var_4 / var_3) + ((var_0 ? var_2 : var_9))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_7] [i_5] [i_6 + 1] = ((((((var_0 ? var_10 : var_7)))) ? (var_3 / var_7) : var_4));

                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            arr_31 [i_0] [i_5] [i_6 - 2] [i_7] [i_8 - 2] [i_8 - 2] [i_0] = (((var_9 + var_0) * (var_0 + var_5)));
                            var_14 = (((((var_2 ? (~var_3) : var_6))) ? ((((var_5 + (-127 - 1))))) : (var_0 % var_3)));
                        }
                        var_15 = (min(var_15, (((~(((var_0 < var_7) ? -var_9 : ((16419 ? 16781 : -16782)))))))));
                    }
                }
            }
        }
    }
    var_16 |= var_3;
    var_17 = (~-110);
    #pragma endscop
}
