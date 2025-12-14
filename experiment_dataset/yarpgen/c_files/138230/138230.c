/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_8 || var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (min((((3 ? 65533 : 0))), var_11));
                            arr_12 [i_0] [i_1] [i_0 + 3] [9] = ((((((~(arr_4 [i_1] [i_2]))))) % ((((min(-19440, 150))) * -21065))));
                        }
                    }
                }
                arr_13 [i_0 - 1] [i_1] [i_1] = arr_4 [i_0] [i_1];
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 = -var_9;
                                arr_23 [i_4] [i_1] [i_1] [i_4 - 2] [i_1] [i_6] = var_9;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_31 [i_0] [i_1] [i_8] [i_8] [i_7] [i_0 + 3] = (((~70368735789056) - (-21065 && 21064)));
                            var_18 ^= var_12;
                            var_19 = var_13;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_43 [i_12] [i_10] [i_10] [i_9] = ((-18971 ? (((-4061596684321529707 & (65532 / 1044)))) : ((var_11 * (((31 ? 7 : 0)))))));
                            arr_44 [i_9] [i_10] [i_10] [i_12] = (arr_38 [i_10] [i_10] [10]);
                        }
                    }
                }
                arr_45 [i_10] = (((arr_39 [i_10 + 4] [i_10 - 3] [10] [10] [10] [10]) / ((-(arr_34 [i_10 + 3])))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_20 = (((((min((arr_39 [9] [12] [i_13] [i_10] [i_10 + 2] [i_9]), (((!(arr_46 [i_9] [i_10] [i_14])))))))) ^ (max((arr_37 [i_9] [i_10] [i_13]), -1))));
                            arr_50 [i_10] = 65532;
                            var_21 = (min(var_21, (((~((-(arr_40 [i_9]))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((((5364 ? var_0 : 7)) / var_10))) ? var_8 : ((((!var_14) | 41658)))));
    #pragma endscop
}
