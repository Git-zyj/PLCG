/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 -= -15737;
                            var_13 ^= (((arr_0 [i_0] [i_3]) ? ((~(arr_3 [i_0] [i_1]))) : (((1 ? var_0 : 1)))));
                            arr_10 [i_2] [i_1] [9] [i_0] = (1 > (var_5 * 32756));
                            arr_11 [i_0] [i_0] [i_2] [i_3] [1] [1] = ((((max(17, (arr_3 [i_3] [2])))) ? var_0 : var_9));
                            var_14 = -15016;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] = (max((var_8 > 0), (~-8192)));
                            arr_17 [i_0] [9] [i_5] = (((arr_8 [i_0]) * (max((arr_13 [i_0] [i_4]), var_6))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 865056734;
                            arr_19 [i_0] [i_1] [i_0] [5] = (!(var_7 && -32757));
                            arr_20 [7] [4] [i_4] [i_4] [7] [i_0] = ((-30886 ? ((max(var_8, 0))) : (((arr_1 [i_0]) | (arr_1 [i_4])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((max((((1 < (arr_6 [i_6 - 2] [i_6] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_0])))), (max(1057145012, (arr_6 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_0]))))))));
                            arr_26 [i_0] [i_0] = 0;
                        }
                    }
                }
                arr_27 [i_0] [i_1] [i_1] = var_7;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_34 [i_9] [i_0] [i_9] [i_9] [i_9] [i_9] = (((~-32748) > (max((arr_25 [i_0] [i_8 + 1]), (arr_5 [i_0] [i_0] [i_8] [i_0])))));
                            var_16 = (max((var_10 + var_2), (arr_2 [i_0] [i_1])));
                            arr_35 [i_0] [1] = (var_8 < 1);
                            arr_36 [i_0] [i_0] [i_0] [i_9] [i_8 - 2] = var_5;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_50 [i_12] [i_11] [i_11] = ((var_11 * ((((4485100433005097711 + 1) || ((((arr_45 [i_11] [i_12] [i_12]) * var_5))))))));
                            arr_51 [i_12] [i_13] = max((var_7 > var_7), (((var_8 / -32748) || 1846138899)));
                            var_17 = (max(1, (max((arr_47 [i_12] [i_12]), var_10))));
                        }
                    }
                }
                arr_52 [i_10] [i_11] |= ((!((((arr_43 [i_11] [i_11] [i_11]) + 124)))));
                arr_53 [i_10] [i_11] = (((max(((((-9223372036854775807 - 1) == 1))), (arr_44 [i_10] [i_11]))) > (((var_0 ? (~var_9) : -32767)))));
            }
        }
    }
    #pragma endscop
}
