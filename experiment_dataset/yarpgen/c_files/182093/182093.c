/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] = ((max(((271643141 / (arr_0 [i_0] [i_0]))), (arr_4 [i_1] [i_0] [i_3]))));
                                arr_16 [i_0 + 1] [i_0] [i_0] [i_2 - 1] [i_0] [i_4] = (i_0 % 2 == zero) ? (((var_8 ? (arr_2 [i_0 + 1]) : (((94 != var_5) ? ((((arr_4 [i_3 + 2] [i_0] [i_0]) << (((-124 + 164) - 39))))) : (arr_10 [i_0] [i_3 + 1] [i_2] [i_0])))))) : (((var_8 ? (arr_2 [i_0 + 1]) : (((94 != var_5) ? ((((((arr_4 [i_3 + 2] [i_0] [i_0]) + 9223372036854775807)) << (((((-124 + 164) - 39)) - 1))))) : (arr_10 [i_0] [i_3 + 1] [i_2] [i_0]))))));
                            }
                        }
                    }
                    arr_17 [1] [i_1] [6] [1] &= (((arr_5 [i_0 + 1]) ? (arr_14 [i_0] [i_1 - 1] [i_2 - 1]) : ((((arr_14 [i_0] [i_1 - 1] [i_2 - 1]) ? -1 : 0)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [17] [i_2 - 1] [16] [i_0] = (max(((((min(43941, 1))) ? (arr_23 [i_6] [i_6] [i_1] [15] [i_1] [i_0]) : ((21594 ? 21594 : 21579)))), -1));
                                var_13 = ((-88 ? ((-121 ? var_7 : 0)) : 1));
                                arr_25 [i_0 + 1] [i_1 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_6] = (((-(arr_10 [i_0] [14] [i_2 - 1] [8]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_42 [i_7] [i_11 + 1] [i_9] [i_10 - 1] [4] [i_9] = 21594;
                                arr_43 [i_9] = ((43941 ? 0 : -33));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((max((((arr_38 [i_7] [i_8] [i_12] [20]) ? (arr_41 [i_7] [1] [16] [i_7]) : 66)), (((!(arr_35 [1]))))))) ? (((arr_33 [8] [8] [8]) - (arr_31 [i_7 + 2]))) : (!-1678381469)))));
                                arr_48 [i_9] [i_13] [i_13] [i_12] [i_9] [14] [i_9] = -var_8;
                                var_16 *= ((-((((((arr_34 [1] [18] [1]) ? -1 : 0))) ? ((min(1, 0))) : (max(var_4, (arr_34 [1] [12] [i_13])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                {
                    arr_56 [i_14] [22] = (~var_4);
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_18 = var_8;
                                arr_63 [i_14] [19] [i_15] [i_16] [i_17] [i_17] [i_18] = (max((max((arr_54 [i_18 - 1] [i_18 - 1]), ((1678381469 ? (arr_60 [i_17] [15] [i_15] [i_14]) : (arr_60 [i_14] [i_16] [i_16] [i_18]))))), var_1));
                                var_19 = 18446744073709551615;
                                arr_64 [i_14] [i_14] [i_16] [i_17] [i_14] |= (~21615);
                            }
                        }
                    }
                    arr_65 [i_14] [i_14] [i_16] = (max(0, (((arr_50 [i_14]) ? ((1 ? -6772422450754558821 : (arr_54 [i_15] [i_15]))) : -0))));
                    var_20 += 1;
                }
            }
        }
    }
    #pragma endscop
}
