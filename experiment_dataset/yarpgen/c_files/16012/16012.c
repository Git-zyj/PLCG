/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_16, var_8)) - (((((((119 ? var_3 : var_7))) <= ((var_2 ? var_15 : var_0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_3] = (arr_6 [3] [i_2 - 2] [i_3 - 1]);

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_1] [9] [i_4] [i_1] [10] = (max((((88 ? var_13 : var_8))), (min(3528411947103066845, (arr_5 [i_0] [i_1])))));
                            var_18 = (min(var_9, ((-(var_16 + var_1)))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            var_19 = (-(arr_7 [i_0]));
                            var_20 = var_0;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_23 [4] [i_1] [i_2] [i_5] [i_7] = (((min((((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_11 [i_7] [i_5] [i_1] [i_0]) : var_10)), (arr_16 [i_0] [i_2] [i_0] [i_0] [i_7])))) ? (((var_6 ? -var_1 : (arr_10 [7] [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 + 1] [i_2 + 1])))) : (((arr_6 [i_7] [i_0] [i_2 - 1]) ? -var_8 : (~var_16))));
                            var_21 = ((arr_12 [i_1] [i_2] [i_5] [2]) ? var_7 : 4013026427573230603);
                            var_22 = ((-(((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) / var_9))))));
                        }
                        var_23 = ((((((var_12 != (var_16 & 190))))) + ((var_12 ? -var_14 : var_11))));
                        var_24 = (max(var_24, (((((((max(var_9, var_11))) >> (((11534671752019274558 - 7864320) - 11534671752011410215)))) < 42150)))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_2] [i_2] = (-176 ? (((-((var_5 >> (-21 + 40)))))) : (((arr_20 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_8] [i_8] [i_8]) % var_16)));
                        arr_27 [i_8] [2] [i_8] [i_8] [i_8] [i_8] = (-(((arr_2 [i_0] [i_2 + 1]) ? (arr_2 [i_8] [i_2 - 2]) : var_9)));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_25 *= ((1 ? (var_10 * 1908506512) : (((arr_25 [i_0] [i_0] [i_10 - 4] [i_10 - 4] [i_2 - 1] [i_9 - 1]) ? (arr_25 [i_9] [i_9] [i_10 - 4] [i_1] [i_2 - 1] [i_9 - 1]) : var_4))));
                                var_26 -= ((((((((arr_14 [i_0] [i_0] [i_0] [i_0]) ? var_6 : (arr_24 [i_0] [i_1] [i_9] [i_10])))) ? (((min(var_1, 79)))) : (min(var_11, var_6)))) - ((((arr_1 [i_9]) ? -var_14 : var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((((var_1 ? (~11534671752019274558) : var_9)) + var_4));
    var_28 = ((-((-((min(var_8, 1)))))));
    #pragma endscop
}
