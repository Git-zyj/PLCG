/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_6));
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1 - 1] [i_1 - 1] = ((-(((arr_0 [i_1 - 1] [i_0]) | (min(0, (arr_5 [i_1] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (((((((((arr_8 [i_0] [i_2] [i_3] [i_4]) ? var_6 : 33554368)) > (!var_8))))) > (((arr_1 [i_1 + 1] [i_1 + 2]) * (arr_8 [i_4] [6] [i_2] [i_0])))));
                                var_23 *= (((arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0]) + (232 - -29556)));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_24 = 0;
                        var_25 = (0 * 18014398509481983);
                        arr_20 [i_6] [i_5] [i_6] [i_0] = ((var_4 ? var_3 : 2481901481));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_26 = (min(var_26, (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_7])));
                                arr_27 [i_1 - 1] [i_5] [i_8] &= (max((max(var_6, (arr_13 [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))), ((-(arr_13 [i_1 + 2] [i_1 + 1] [5] [i_1] [i_0])))));
                                arr_28 [i_0] [i_1] [1] [i_7] [i_7] [i_8] [i_8] = (max(3816251384, ((~(min(var_4, (arr_7 [i_7] [i_1])))))));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    var_27 = (arr_12 [7] [i_0] [11] [i_1] [i_9] [i_9] [5]);
                    arr_32 [i_0] = (((arr_2 [i_0]) ? (((arr_2 [i_1]) ? var_7 : (arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 + 3]))) : (min((arr_13 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1]), (arr_8 [i_1 - 1] [i_1] [i_1 + 3] [i_1 - 1])))));
                    var_28 = (min((arr_29 [i_0]), (((!(!var_1))))));
                    arr_33 [i_0] = (min((((996305469 + var_1) ? (!25705) : var_3)), (((~(arr_2 [i_1 + 1]))))));
                }
                arr_34 [i_1 + 1] = (min(var_5, 65535));
                var_29 += ((-(-var_0 & -70)));
                arr_35 [i_0] = (arr_17 [i_0] [i_0] [i_1 + 1] [i_0] [i_1 + 2] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
