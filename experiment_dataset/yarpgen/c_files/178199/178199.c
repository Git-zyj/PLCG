/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (max(var_7, -1974902593));
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] [i_0] = -1974902593;
                var_20 = (((((16252928 <= var_1) >= -2073042438)) ? (arr_3 [i_0] [i_0]) : var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((((max(var_12, var_14))) ? -var_0 : var_3))) ? (((((-76 ? var_4 : 72)) <= var_4))) : ((((((~(arr_10 [i_0] [i_0] [i_2] [i_4])))) && var_2)))));
                                var_21 = var_11;
                                arr_13 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0 - 2] = ((~((((((1974902593 ? var_8 : var_15)) + 9223372036854775807)) << ((((((~(arr_2 [i_0 - 2] [i_1] [i_1]))) + 225)) - 30))))));
                                arr_14 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4] [i_4] = var_4;
                            }

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_22 = (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1 + 1] [i_0]);
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5] = (arr_10 [i_5] [i_2] [i_1 + 1] [i_0]);
                                arr_18 [i_5] [i_3] = (arr_0 [i_1 + 1] [i_1 - 1]);
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_21 [i_0] [i_1] = var_1;
                                arr_22 [i_1] [i_1] [i_2] [i_3] [i_1] = ((!(((176 ? var_9 : (arr_9 [i_0 - 2] [i_0 - 1]))))));
                            }
                            var_23 = ((~((((min(var_7, (arr_19 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_3]))) < 1974902593)))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (((2047 ? (((var_5 ? var_16 : (var_15 ^ var_7)))) : (min(var_6, (var_5 ^ 6508390681458238859))))))));
    #pragma endscop
}
