/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 - 1] = (((arr_6 [1] [1] [i_2] [i_3]) ^ (((!(var_7 >= var_8))))));
                                var_12 = (((var_11 ? (((arr_4 [i_0]) ^ var_11)) : ((max(1, 1))))) == (arr_1 [i_0]));
                                var_13 = (((-((1 % (arr_11 [1] [i_1] [i_2] [i_2] [1] [i_4]))))) != (((max((arr_8 [i_0] [i_1]), var_7)) ? (arr_1 [i_0]) : ((min((arr_1 [i_0]), (arr_3 [i_2] [i_0] [i_4])))))));
                                arr_15 [i_0] [i_0] [i_0] [1] [i_0] = arr_11 [i_0] [i_1] [i_2] [1] [i_3 - 1] [i_4];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = 1;
                                var_15 = ((((((var_3 != 1) ? 1 : -1))) ? (!1) : ((var_11 ? 1 : ((min(1, var_11)))))));
                                var_16 = arr_19 [i_0] [i_1 - 1];
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_33 [1] [i_8] [i_9] [i_8] [i_11] = ((1 / (((arr_25 [i_8] [i_11] [i_9] [i_10]) ? (arr_25 [i_8] [i_9] [i_10] [i_11]) : (arr_25 [i_8] [i_8] [i_10] [i_11])))));
                                var_17 = (max(((var_4 ? var_2 : var_2)), ((((1 ? 1 : 1))))));
                                arr_34 [i_7] [i_11] [1] [i_8] [1] = (((max(1, 1))));
                                arr_35 [i_8] [i_8] [i_9] [i_8] [1] = max(1, (((arr_32 [i_7] [i_10]) != 1)));
                                arr_36 [i_8] [i_9] [i_11] = ((max((arr_28 [i_8]), (((arr_20 [i_7]) ? var_2 : 1)))) == (((var_5 == var_9) ? ((max(var_8, var_8))) : 1)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_45 [i_7] [0] [i_12] [i_8] = var_2;
                            arr_46 [i_8] [1] [i_12 + 1] [i_13] = (((max(1, 1))));
                            var_18 = (((arr_27 [i_8] [i_8] [i_12]) ? var_7 : (max(((1 ? (arr_30 [1] [1] [i_12 + 1] [1]) : 1)), var_1))));
                            arr_47 [1] [0] [i_12] [1] &= (((((1 || var_2) >= (1 * 1))) ? -var_7 : 1));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 0;i_16 += 1)
                        {
                            {
                                var_19 = (var_10 && var_6);
                                var_20 = ((!-1) && (min((1 || 1), (((arr_32 [i_7] [i_16]) || var_10)))));
                                var_21 += max((arr_41 [1] [i_16 + 1] [i_16 + 1] [i_16 + 1]), (max((arr_41 [i_14] [i_16 + 1] [i_16 + 1] [i_16 + 1]), 1)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_22 = ((1 ? (max(1, -var_11)) : ((((max(1, 1)) || ((!(arr_59 [1] [i_8] [i_17] [i_18 - 1]))))))));
                            arr_62 [i_7] [i_7] [i_8] [i_7] = ((~(max(1, ((1 ? var_5 : var_10))))));
                            arr_63 [i_8] [i_8] [i_8] = ((arr_24 [i_17]) >= (((max(1, (arr_44 [i_7] [i_8] [i_7] [1]))))));
                            arr_64 [1] [i_8] [i_8] [i_18] = (min(var_0, (arr_41 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
