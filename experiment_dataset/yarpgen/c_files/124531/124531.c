/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124531
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
                            var_20 = (max((((arr_4 [i_3]) ? (arr_4 [i_1]) : (arr_4 [i_1]))), 0));
                            var_21 -= (min((((((max(251, 0))) / (arr_1 [i_0] [4])))), ((-(arr_2 [8])))));
                            var_22 += (arr_2 [8]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_23 -= (-4194304 == 251);
                            arr_13 [i_0] [i_1] [i_1] [i_5] = var_2;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_24 += (var_1 ? (min((max(var_3, (arr_17 [i_7] [i_7] [1]))), 5)) : var_5);
                                arr_28 [i_6] [i_6] [i_7] [6] [i_8] [i_9] [i_10] = ((var_11 && (((90 * (arr_14 [i_6]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_35 [i_6] [i_6] [i_6] [i_12] [i_12] = (max(((-(!251))), ((~(min((arr_19 [i_6] [11] [i_11]), 1611894530))))));
                                var_25 = (max((arr_26 [i_7 + 1] [i_8 - 1]), (((~(arr_14 [i_7 + 1]))))));
                                arr_36 [i_6] [i_6] [i_8 - 1] [i_8] [i_12] [i_8] = 92;
                                arr_37 [i_12] [9] [i_8] [i_11] = (((~92) ? ((((-92 > (max(58047, -6697781915976842995)))))) : (((arr_21 [i_8 - 1] [i_7 - 1]) ? (arr_21 [i_8 - 1] [i_7 + 1]) : (arr_21 [i_8 - 1] [i_7 + 1])))));
                                arr_38 [i_6] [i_6] [8] [0] [i_12] = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 11;i_14 += 1)
                        {
                            {
                                var_26 = (20377 / 107);
                                var_27 = ((-1611894531 ? 4099 : ((var_15 * ((((-6697781915976843010 == (arr_40 [4] [i_13])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
