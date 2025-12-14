/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(((5274 ? 5274 : (!var_4))), ((-18344 ? -9408 : 56))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_11 *= (((((((57328 ? -98 : var_3)) > ((0 ? var_0 : var_1))))) << (4611686018427387904 - 4611686018427387898)));
                var_12 = (min(((((9408 ? var_8 : var_5)) / (~18344))), var_1));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_13 *= (((((4535043939612813432 ? 0 : var_3))) ? (1 >= var_6) : (!var_3)));
                                arr_13 [i_0] [i_1] = -var_3;
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_0 + 1] [i_0] = 4304;
                            }

                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                arr_17 [i_1] [i_0] = (!1);
                                var_14 = (min(var_14, ((((9223372036854775807 ^ 1) ? (var_5 ^ var_5) : var_7)))));
                                var_15 *= 4168;
                            }
                        }
                    }
                }
                arr_18 [i_0] = ((169 ? (((~var_4) / 536870912)) : (32767 >= 458752)));
            }
        }
    }
    var_16 *= var_3;
    var_17 = ((~((var_9 ? ((max(32757, 2317141073))) : ((20944 ? 1472148751 : var_2))))));
    #pragma endscop
}
