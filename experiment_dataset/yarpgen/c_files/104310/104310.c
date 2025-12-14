/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_15);
    var_17 &= (min(var_9, 18323370234647078659));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1 + 1] [5] [i_3] [i_3] [i_4] [8] = 1899611866;
                                arr_13 [i_0] [i_1] [5] [i_1] [i_4 + 2] [i_3] [i_3] = (arr_6 [i_0] [5] [i_2 - 2] [7]);
                                arr_14 [i_1] [i_1 + 1] [i_2] [2] [i_3] [12] = ((0 ? (min((((arr_6 [i_2] [i_1] [i_1] [i_0]) - 18323370234647078659)), var_6)) : (max(((1 ? 9193868406907624674 : 12198132274303737806)), 18323370234647078659))));
                                var_18 = ((38 == ((min(var_6, (!1))))));
                                arr_15 [i_3] = arr_9 [i_0] [i_0] [4] [i_3] [i_3] [i_3];
                            }
                        }
                    }
                }
                var_19 = (-1 ? var_13 : ((var_6 ? (arr_4 [i_0] [i_1] [i_1 + 1]) : (arr_4 [i_1] [i_1] [i_1 + 1]))));
                arr_16 [7] [i_0] [i_0] = (max(1, 589659837));
                var_20 = (((arr_2 [i_0]) ? var_11 : (arr_1 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_21 -= (arr_7 [i_5] [i_6 + 1] [i_6] [i_6] [i_6]);
                            arr_22 [i_0] [i_6] [i_5] [9] [i_5] = 429221059;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
