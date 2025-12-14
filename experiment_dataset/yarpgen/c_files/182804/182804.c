/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_4] [i_4] = ((!((min((arr_7 [i_0] [i_2]), (arr_4 [i_0]))))));
                                arr_18 [i_0] [i_1] = (max((((arr_15 [i_1] [i_3] [i_3] [i_3] [i_3]) ? (arr_15 [i_1] [i_3] [1] [i_1] [i_1]) : (arr_15 [i_1] [i_3] [i_2] [i_1] [i_1]))), (arr_15 [i_1] [i_1] [7] [i_3] [i_2])));
                                arr_19 [i_0] [i_1] [i_1] [2] [i_3] [i_4] = (arr_9 [i_0]);
                                arr_20 [i_1] [12] [i_2] [i_1] [i_1] = (arr_0 [i_0]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    arr_24 [i_1] [i_1] [1] = ((arr_4 [i_0]) + 3118163108695980514);
                    arr_25 [i_0] [i_1] [4] [i_1] = 485986;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_32 [i_1] = (arr_28 [i_6] [i_1] [i_5] [i_6] [2] [i_1] [7]);
                                arr_33 [i_0] [i_1] [i_5] [i_7] [i_7] = (arr_13 [i_6] [i_1] [i_1] [i_0]);
                                arr_34 [i_0] [i_0] [i_5] [i_7] [i_5] = min(((((arr_12 [i_7] [i_1] [i_0]) >= (arr_16 [i_5])))), (max((arr_28 [i_0] [i_5] [i_6] [i_6] [i_7] [i_0] [i_1]), ((~(arr_16 [i_0]))))));
                                arr_35 [i_0] [i_1] [i_5] [i_7] [i_7] = (((arr_6 [i_0]) * ((((!((min((arr_12 [15] [i_1] [i_5]), var_2)))))))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_44 [i_0] [i_1] [i_0] [i_8] [i_9] [i_9] [i_10] = (max(((max((arr_0 [i_10]), (arr_0 [i_0])))), (((arr_26 [i_0] [i_1] [i_8] [i_9] [8]) ? (arr_28 [i_0] [i_1] [12] [i_1] [i_8] [i_8] [i_10]) : 27993))));
                                arr_45 [i_0] [i_9] [i_8] [i_9] [i_1] = ((!((!(arr_13 [i_0] [i_1] [i_9] [i_10])))));
                            }
                        }
                    }
                    arr_46 [i_0] [i_1] [i_0] = 485986;
                    arr_47 [i_8] [i_1] [i_1] [i_0] = ((+((((arr_23 [i_0]) || (arr_0 [i_0]))))));
                    arr_48 [1] [0] [i_1] = (arr_6 [12]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_55 [i_1] [i_11] [i_8] [i_1] [i_1] = (max((arr_38 [i_8] [i_1] [i_8] [i_8] [i_8]), var_11));
                                arr_56 [i_1] = ((!((((arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_8 [i_12] [i_8] [i_8] [i_0]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    arr_59 [i_1] = (((arr_16 [i_1]) * (((((arr_41 [i_1]) >= (arr_4 [i_0])))))));
                    arr_60 [i_13] [i_1] [i_1] = var_11;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_66 [i_0] [i_0] [7] [i_0] [i_1] = (arr_26 [5] [i_14] [5] [i_1] [2]);
                                arr_67 [i_0] [i_0] [i_0] [i_0] [i_1] = ((!(arr_9 [i_0])));
                                arr_68 [i_1] [i_1] = ((-(arr_0 [i_13])));
                            }
                        }
                    }
                    arr_69 [i_13] = ((9 / (arr_40 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0])));
                    arr_70 [i_1] [i_1] [i_1] [i_1] = (~3955915624);
                }
                arr_71 [i_1] = (arr_54 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    var_13 = var_7;
    var_14 = var_5;
    var_15 = var_3;
    #pragma endscop
}
