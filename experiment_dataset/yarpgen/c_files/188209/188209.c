/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (arr_2 [i_1] [i_0 - 2]);
                var_17 &= min(9223372036854775807, (!63));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] = (!-9223372036854775799);
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_2 [3] [i_5]);
                                var_18 = (((arr_1 [i_2] [i_3]) | ((-1573823669 ? (max(9223372036854775807, (arr_7 [i_2] [7] [i_2]))) : ((min((arr_7 [i_6] [i_4] [i_2]), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                                var_19 = (max((arr_17 [i_2] [i_2] [i_4] [i_5] [2] [i_2] [i_4]), var_2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_26 [i_2] [i_2] [3] [i_2] [i_8] = (((-var_4 ? (arr_15 [i_3 - 1] [i_3] [i_4 + 2] [i_8 + 3]) : (arr_9 [i_2] [12] [i_2] [i_7]))));
                                var_20 = ((-((var_1 >> (((arr_12 [i_4 - 2] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]) + 741727678))))));
                                var_21 -= (((((((arr_7 [i_3 - 1] [i_4 - 2] [i_8 + 3]) >= 158)))) != 4088984317710300026));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_22 = ((((max((3342983164056169608 / 32390), (min(var_0, 4088984317710300026))))) ? 1 : ((1573823654 << ((((var_14 ? var_12 : var_5)) - 126330875))))));
                                arr_32 [i_2] [i_3] [i_2] [i_9] [i_9] [i_2] = var_16;
                                arr_33 [i_3] [i_2] = ((-((-2494501358238068737 ? 3563936192 : -4088984317710300007))));
                            }
                        }
                    }
                    var_23 = (max((((var_16 ? (arr_8 [i_3 - 1] [i_4 - 1]) : (arr_1 [i_4] [i_2])))), ((((arr_31 [0]) ? -4088984317710299993 : (arr_9 [i_2] [i_3] [i_4 - 2] [i_3]))))));
                    arr_34 [i_2] [i_4] = ((!(var_11 ^ 4088984317710300006)));
                }
            }
        }
    }
    var_24 = (max(var_24, var_14));
    #pragma endscop
}
