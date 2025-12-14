/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = arr_1 [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_1] [i_1] = (min(var_2, -203));
                                var_10 = (((arr_8 [i_1] [i_4 + 2] [i_1]) ? (((arr_8 [i_1] [i_4 - 2] [i_1]) ? (arr_8 [i_1] [i_4 - 2] [i_1]) : (arr_8 [i_1] [i_4 - 2] [i_1]))) : (arr_4 [i_1 - 1] [i_1])));
                                arr_12 [i_1] = (min(-var_3, (~1)));
                            }
                        }
                    }
                    arr_13 [i_1] = ((+(((arr_5 [i_1] [i_1 - 1] [i_1]) ? (arr_5 [i_1] [i_1 + 2] [i_1]) : (arr_5 [i_1] [i_1 - 2] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] = (~1);
                                arr_20 [i_0] [i_5] [1] [i_2] [i_1 - 2] [i_0] [i_0] &= 53558;
                                arr_21 [16] [8] [i_1] [i_1] [i_0] [i_5] [i_6] |= (+(min((min((arr_18 [i_0] [i_0] [i_0] [i_0]), 8)), ((max(var_2, 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                arr_28 [i_7] [i_8] |= ((-((4 ? ((min((arr_8 [i_8] [i_8 - 2] [i_8]), 20857))) : ((max((arr_17 [i_7] [i_7] [i_8]), 11978)))))));
                arr_29 [i_7] [i_7] [i_7] = ((-((~(arr_4 [i_8] [i_7])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_35 [i_9] = (min(((min(11978, (arr_30 [i_9])))), (arr_30 [1])));
                var_11 = (max(var_11, (((~(~-70))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_42 [8] [i_9] [i_9] [2] [i_11] [i_12] = ((max((~4), ((min(21, var_2))))));
                            var_12 = (max(var_12, ((min(18446744073709551592, ((max(var_7, (min(1233, (arr_38 [i_9] [i_10] [16] [i_11])))))))))));
                        }
                    }
                }
                arr_43 [i_9] [i_9] [i_9] = ((!((min((arr_39 [i_9] [i_9] [i_9] [i_9]), ((min((arr_32 [i_9]), var_6))))))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_13 |= ((~(min(27264, (~24752)))));
                            arr_49 [i_14] = (arr_47 [i_9] [20] [i_9]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            arr_61 [i_15] [i_15] [i_15] [i_15] [i_15] = (max(var_1, ((min(10862, (arr_58 [i_17 - 1] [i_16 - 1]))))));
                            arr_62 [7] [i_15] [i_17] [i_18] = (arr_30 [i_17 + 1]);
                        }
                    }
                }
                arr_63 [i_15] = ((!(((~(arr_24 [i_16 - 1]))))));
                /* LoopNest 3 */
                for (int i_19 = 2; i_19 < 10;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 11;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            {
                                arr_71 [i_15] [i_15] [i_15] [i_19] [i_20 + 1] [i_21] = ((1 ? 2 : 11947));
                                var_14 = (min(var_14, (((-(~110))))));
                                arr_72 [i_15] [i_15] [9] [i_20] [i_21] = (min((~53558), ((~(arr_31 [i_20 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
