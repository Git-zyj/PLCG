/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_1 | (((max(var_9, var_7)))))))));
    var_13 ^= ((!var_9) ? (min(((56 ? 63 : -9223372036854775806)), -9223372036854775806)) : (max(var_9, (var_11 % 56))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        var_14 = (-9223372036854775807 - 1);
                        var_15 = (min(var_15, (!-56)));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_16 [i_0] [i_4] [i_2] = 0;
                            var_16 = (!68);
                            var_17 = ((29 >> (((arr_7 [i_2] [i_5 + 2] [4] [i_5 + 2]) - 88))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_19 [8] [i_1] [i_1] [i_4] [5] = var_9;
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_11 / var_3) * 0));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_18 = ((var_11 ? (arr_22 [i_0]) : -123));
                            arr_23 [i_4] = (((arr_17 [11]) ? ((-9223372036854775806 ? (-2147483647 - 1) : 1)) : (16 / 38)));
                            var_19 = var_3;
                            var_20 = (((-30 && var_11) && 65522));
                        }
                        var_21 = (!-78);
                        var_22 = (max(var_22, (((0 ? 0 : (arr_8 [i_0]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_23 *= (((((32754 / (arr_24 [i_1] [i_1] [i_0])))) ? ((var_7 * (arr_22 [i_8]))) : var_11));
                                arr_28 [i_0] [i_0] [i_9] [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                                arr_29 [i_0] [i_9] [i_2] [4] [i_9] = (((arr_18 [i_0]) ? (arr_18 [i_0]) : var_8));
                                var_24 -= var_1;
                            }
                        }
                    }
                    var_25 *= (((var_2 + 2147483647) << (var_7 - 104)));
                    arr_30 [i_0] [i_1] [i_0] |= (arr_11 [i_0] [i_0] [i_0] [i_0]);
                }
                arr_31 [i_0] = ((((var_8 <= (arr_22 [i_0]))) ? 3714051469750803478 : ((max(((var_8 ? var_3 : var_3)), 0)))));
            }
        }
    }
    #pragma endscop
}
