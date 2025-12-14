/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(18, 58558));
    var_11 = (~133);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (170 && 153);

                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_13 ^= (min((((min(var_7, var_6)) > var_0)), var_4));
                    arr_8 [14] [i_2] [i_2] = (max((((var_5 / 1) / (var_9 / var_6))), (var_2 * 1)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_14 = -128;
                    arr_12 [5] [i_3] [i_3] = (2771957300 <= 6104744676626002898);

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_17 [i_0] [i_3] [i_3] [i_3] [15] [i_5] [i_5] = var_9;
                            var_15 *= var_7;
                            var_16 = (min(var_16, (var_9 - var_6)));
                            var_17 = var_4;
                        }
                        var_18 = ((~((var_4 ? var_7 : var_1))));
                        var_19 = (max(var_19, var_7));
                        var_20 = (max(var_20, 56538));
                        var_21 = 156;
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_22 -= ((min((((var_7 ? 3 : var_6)), (max(var_5, 1))))));
                            var_23 = ((((var_6 / 208) * ((var_1 ? var_6 : 7470251559767133043)))));
                            var_24 += ((((min(var_9, var_0))) != (max((max(0, 64018)), (!var_0)))));
                            var_25 = (min(var_25, (((-var_3 - (~var_6))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
