/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-2147483631 >= var_1);
    var_20 = (6104831186052404349 + -6104831186052404360);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 = ((((-6104831186052404358 ? var_5 : var_16)) + (var_3 / -1822183935)));
        var_22 = (min(var_22, -2147483632));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 -= ((((6104831186052404348 << (var_17 - 32))) & (6104831186052404371 <= -58)));
                    arr_8 [i_0 + 4] [i_1] [i_2] [i_2] = ((var_7 ? 6104831186052404379 : var_14));
                    var_24 = (3261466979277305076 >= -2147483632);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_17 [i_5] = (6104831186052404360 | var_1);

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_25 = ((var_6 ? ((max(var_16, var_17))) : (max(0, var_7))));

                        for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_26 &= ((var_12 < (44 > var_3)));
                            var_27 = var_12;
                        }
                        for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (((max(-6104831186052404364, 6104831186052404399))))));
                            var_29 |= (6104831186052404349 & (max(var_5, (-501862239102402424 | 1))));
                            var_30 = (max(var_30, (-58 * 5)));
                        }
                        var_31 = (max((((var_7 ? (var_6 << 9) : (var_18 ^ 3)))), (((var_18 + 4000179540) ? -6104831186052404364 : (4294967295 > 255)))));
                    }
                    var_32 = (max(var_32, ((max((((4294967295 % 11) | 6)), (((-2147483631 > (-2147483647 - 1)))))))));
                    var_33 = (max((((((max(2097024, 452292360))) > ((var_2 ? var_7 : var_4))))), var_8));
                }
            }
        }
    }
    #pragma endscop
}
