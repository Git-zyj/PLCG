/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_0] [i_0] [11] = ((((11019 | (arr_2 [i_2] [11]))) ^ (((((arr_4 [i_0] [i_1 - 1] [i_2 - 1]) | (arr_9 [i_0] [10] [10] [i_2 - 2] [1]))) ^ (arr_11 [i_0] [i_0] [i_2 - 1] [i_0] [12] [i_0])))));
                            var_18 ^= ((((-(2147483647 > 13205041541325941889))) - (max((arr_10 [i_1] [7] [i_1] [i_1 + 2] [i_1 + 2]), (arr_1 [i_1 + 1])))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_19 = ((-(((arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]) - (arr_3 [i_0] [i_1 + 1])))));
                    var_20 = max((((((arr_10 [i_0] [1] [i_0] [i_0] [4]) ? (arr_1 [i_0]) : 536870911)) << (8496660572143514793 - 8496660572143514781))), (min(((((arr_4 [i_0] [i_0] [i_0]) ? 511899767 : 139))), (max((arr_5 [5]), 14)))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_21 = ((((((20 ? 5241702532383609726 : 111)) ? 0 : 13205041541325941889))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_7] [1] [1] [i_7] [i_7 + 4] [i_7] = min(1460327802, ((((arr_9 [i_0] [i_1 + 2] [i_5] [i_7] [10]) ? (arr_4 [i_0] [1] [1]) : -15))));
                                var_22 = (min(var_22, (((((!1) ? 255 : 1460327802))))));
                            }
                        }
                    }
                }
                var_23 = ((~(max((~42598), (arr_17 [i_1 + 1] [i_1] [i_1 + 1] [i_1])))));
            }
        }
    }
    var_24 *= (((!(~var_7))));
    var_25 = (min(((var_1 ? (!var_8) : var_0)), (((!(~var_14))))));
    var_26 ^= (max((~var_9), var_5));
    var_27 = var_15;
    #pragma endscop
}
