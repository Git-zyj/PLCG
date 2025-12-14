/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max((((arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1]) ? (arr_0 [i_4]) : ((243 / (arr_4 [i_1] [i_2] [i_1]))))), (((-(var_16 || 1949965316))))));
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_3] = ((((-(!2345001977))) | (min((~var_1), (max((arr_2 [i_4]), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_21 += (min((arr_9 [i_1] [i_2]), (((((1949965298 && (arr_19 [i_1] [i_2] [i_6]))) && 36987)))));
                                arr_20 [i_2] [i_2] [6] [i_6] &= (min((((28544 ? (arr_6 [i_0 - 1] [1] [i_0 - 3]) : (arr_6 [i_0 - 1] [4] [i_0 - 3])))), (~var_19)));
                                arr_21 [15] [i_0] [i_1] [i_2] [i_5] [i_1] = max(1123006269, (min((arr_4 [i_0] [i_0 - 2] [i_1]), ((min(36985, 1130597801))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_22 -= (((arr_17 [i_7 - 2] [11] [11] [i_7 + 1] [i_7 - 1] [i_7 + 1]) | (min((arr_12 [i_1] [i_7 - 1] [i_8] [i_8] [i_8]), 1))));
                                arr_29 [i_0] [i_1] [i_1] [i_8] = (max((~3164369496), var_15));
                                var_23 = (!990813038);
                                var_24 = (!26663);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_25 = var_1;
                                var_26 = ((1949965305 && (((-(arr_35 [i_0] [i_9] [i_10]))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = 1130597788;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_28 = 3164369515;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_49 [i_11] [i_12] [i_13] [i_11] [13] [i_13] = (arr_16 [i_11] [i_11] [i_14] [11]);
                                arr_50 [i_11] [i_11] [1] [1] [i_11] [i_15] = ((!(arr_43 [i_11])));
                            }
                        }
                    }
                    var_29 = ((((((-2147483647 - 1) ? 1949965299 : 1130597780))) - var_10));
                }
            }
        }
    }
    var_30 = 3164369511;
    var_31 = ((((min(var_17, var_7))) && (var_4 | 26662)));
    var_32 = ((((((1949965309 ? var_11 : var_1))) ? (var_9 ^ var_7) : var_19)));
    var_33 = (max(var_33, var_18));
    #pragma endscop
}
