/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] = (arr_3 [i_0]);
                var_15 = (arr_0 [i_1]);
                var_16 |= min(((max((max((arr_2 [i_0]), (arr_1 [i_0]))), (arr_4 [17])))), (min((arr_4 [i_0 - 2]), (arr_0 [1]))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 2] [i_1] [i_2] [i_2] [i_2] = (max((min(((min((arr_13 [i_0] [i_1] [i_0] [i_0] [12] [i_4] [i_2]), (arr_4 [i_4])))), (min((arr_7 [i_2]), (arr_12 [i_3] [i_2]))))), ((max(-1632331289810245645, ((min((arr_7 [i_2]), -46))))))));
                                var_17 -= (min((arr_8 [i_2] [i_3] [i_2] [i_1] [i_1] [i_0 - 2]), (max((min(-1632331289810245662, -1632331289810245645)), (arr_8 [i_0] [i_0 - 2] [i_1] [i_2] [i_0] [i_1])))));
                            }
                        }
                    }
                    var_18 = (arr_1 [i_0]);
                    arr_15 [i_2] [i_2] [i_0 - 2] [i_0] = (min((min(((min(1632331289810245644, -1632331289810245645))), (max((arr_1 [i_0]), (arr_3 [i_0]))))), (arr_9 [i_0] [i_2] [i_2] [i_2] [1])));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_19 = (arr_3 [i_0]);

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_5] [i_0] |= (min((arr_21 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_5] [i_6])));
                        var_20 = (arr_17 [i_0]);
                        arr_23 [0] [i_1] [0] [i_1] [i_6] = (arr_18 [i_0] [i_1] [i_5] [i_6]);
                        var_21 = (min((arr_3 [i_0 - 1]), (arr_1 [i_5])));
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            var_22 = (min((min((arr_25 [i_7 - 1] [i_7 - 1]), (arr_12 [i_0] [i_7]))), ((max((arr_26 [i_8 - 2] [i_5] [i_5] [i_0] [i_0] [i_0] [i_0]), ((max((arr_16 [i_0] [i_5] [i_8]), (arr_1 [i_7])))))))));
                            arr_29 [i_7] [i_7] = (min((arr_18 [i_0] [i_1] [8] [i_7]), ((max((arr_9 [i_8] [i_7] [i_5] [i_7 + 1] [8]), (arr_4 [i_8]))))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_7] = (max((arr_25 [i_0] [i_0]), (max((arr_28 [i_0] [i_1] [i_7] [i_7 + 1] [i_8]), (min((arr_27 [i_7] [i_1] [i_5] [i_7] [i_1]), (arr_25 [i_5] [i_7])))))));
                        }
                        var_23 = (max((arr_12 [i_0] [i_7]), (arr_16 [i_0] [i_1] [i_0])));
                        var_24 = (arr_18 [i_0] [i_5] [i_5] [i_7]);
                        arr_31 [i_0] [i_1] [i_1] [i_5] [i_7] = (max((max((arr_18 [i_0] [i_0] [i_0 + 1] [i_0]), (max((arr_25 [i_1] [i_5]), (arr_3 [i_1]))))), (max((arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_7]), (arr_25 [i_0 + 1] [i_7 - 1])))));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_35 [i_5] = (arr_6 [i_0 - 2] [i_1] [i_0 - 2]);
                        arr_36 [i_5] = (arr_7 [i_0]);
                    }
                    arr_37 [i_1] [i_1] [i_0] = (min((max(-3109, 4525289699161610833)), (min((min((arr_4 [i_0]), (arr_3 [0]))), ((min((arr_19 [i_0] [2] [i_1] [2]), (arr_0 [i_0]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                arr_44 [i_10 - 1] [i_10 - 1] = arr_0 [i_10];
                var_25 = (arr_4 [i_11]);
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 14;i_14 += 1)
                        {
                            {
                                arr_52 [i_10] [i_11] [i_10] = (arr_43 [i_10]);
                                var_26 |= (arr_17 [i_10]);
                                arr_53 [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_10] [i_10] = (arr_13 [i_10] [i_11] [i_11] [i_11] [i_12 + 3] [i_12 + 3] [i_11]);
                            }
                        }
                    }
                }
                arr_54 [i_10] = (min((min((min((arr_25 [i_10] [i_10]), (arr_2 [i_10]))), ((min((arr_6 [i_10 - 1] [i_11] [i_11]), (arr_2 [i_11])))))), (min((arr_6 [i_11] [11] [i_10]), (arr_12 [i_10] [i_11])))));
                var_27 ^= (max((max((arr_49 [i_10] [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_10]), ((min((arr_24 [i_11]), (arr_6 [i_11] [i_11] [i_10 - 1])))))), (arr_7 [i_11])));
            }
        }
    }
    var_28 = (max(15913002953133491769, 9223372036854775807));

    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        var_29 = (min(var_29, (arr_40 [i_15] [i_15])));
        arr_57 [i_15] = (max(15, 1632331289810245644));
    }
    #pragma endscop
}
