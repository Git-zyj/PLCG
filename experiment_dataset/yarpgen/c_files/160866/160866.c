/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_1] [16] [i_1] = (((arr_7 [i_0] [0] [6]) << ((((min(var_4, (min(33, var_9))))) - 24))));
                            arr_12 [15] [i_1] [i_1] [i_1] [15] = var_9;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_5] [i_4] [i_1] [i_0] = (((127 / 142) < 102));
                                var_10 -= 65;
                                arr_23 [i_0] [i_0] [i_4] [11] [i_0] = ((((min(0, 190))) ? 245 : ((((18 ? 48 : (arr_6 [i_0] [i_0] [i_4 - 2] [i_6])))))));
                                arr_24 [i_5] [i_4 - 2] [i_1] [i_0] = (!0);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((((var_5 == ((var_7 ? (arr_20 [6] [16] [i_1] [i_8 + 3] [i_9]) : 0)))) ? ((((arr_18 [i_1] [i_8 - 1] [i_8 + 1] [i_8 + 3] [i_8]) >= (arr_18 [11] [i_8 - 2] [i_8 + 1] [i_8 + 3] [14])))) : ((227 ? (arr_9 [i_8] [i_8] [i_8 + 3] [i_8]) : (arr_9 [i_8 - 2] [i_8] [i_8 - 2] [7]))))))));
                                var_12 += var_9;
                                var_13 = (max(var_13, (((((max(((((arr_18 [i_0] [i_1] [i_7] [i_8] [8]) >= (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))), 166))) ? 210 : 63)))));
                                arr_33 [13] [13] [i_7] [i_7] [11] [i_7] = ((162 ? (((!(arr_6 [i_0] [i_8] [i_8 - 1] [i_8])))) : (((((108 | (arr_1 [i_0])))) ? ((max(104, var_1))) : ((min(81, var_5)))))));
                                arr_34 [i_8 - 1] [i_8 - 1] = ((((((min((arr_15 [i_1] [i_8] [i_9]), 141))) ? 142 : 128)) + ((min(239, 151)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_40 [13] [i_1] [i_1] [i_1] = ((179 >> ((((arr_17 [i_10]) == var_8)))));
                            arr_41 [7] [i_1] [i_1] [i_10] [i_11] = (((((arr_39 [i_11] [i_10] [4] [i_0]) < (arr_39 [i_0] [i_1] [i_10] [i_11]))) ? ((15 / (arr_9 [i_0] [i_1] [10] [10]))) : ((((var_1 == (arr_3 [i_0] [i_11])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 22;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 24;i_16 += 1)
                        {
                            {
                                var_14 = ((~(max(100, ((max(var_1, var_4)))))));
                                arr_58 [i_13] [i_15 + 1] [i_13] [20] [9] = ((!((((!7) ? var_8 : ((max((arr_43 [i_12]), (arr_42 [i_14 - 3])))))))));
                                var_15 = arr_48 [i_13] [i_13] [i_13];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 23;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            {
                                arr_64 [i_13] [i_13] [8] [0] [i_18] [i_18] = (var_5 == 87);
                                arr_65 [i_12] [i_12] [i_12] [i_13] [i_12] = 246;
                                var_16 = (min(var_16, ((((((!(var_0 != 85)))) / (arr_55 [i_12] [i_13] [i_14] [i_18]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 25;i_20 += 1)
                        {
                            {
                                arr_72 [i_13] = (!-89);
                                arr_73 [i_12] [i_12] [i_12] [i_12] [i_13] = ((var_8 && (((arr_52 [i_14 + 3] [i_20] [i_20] [i_20]) != (arr_66 [i_14 + 1] [22] [i_13] [i_19])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 15;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 15;i_25 += 1)
                        {
                            {
                                var_17 -= ((!(var_7 + 50)));
                                var_18 = (min(var_18, (arr_32 [i_23] [i_23] [i_23])));
                                var_19 += (((var_7 / 255) ? ((+((max((arr_26 [9] [i_23]), (arr_61 [i_23] [i_24] [i_25])))))) : 139));
                                var_20 = (max(var_20, (((90 ? 85 : (0 << 15))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_26 = 1; i_26 < 14;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 15;i_27 += 1)
                    {
                        for (int i_28 = 3; i_28 < 11;i_28 += 1)
                        {
                            {
                                var_21 = 86;
                                arr_96 [i_21] [i_21] [i_27] [i_21] [i_27] = ((!(arr_91 [i_21] [i_26 - 1] [i_28 - 3] [i_27])));
                                arr_97 [i_21] [5] [i_26] [i_21] [i_28] [i_28 - 2] [i_27] = (((arr_79 [6] [6]) ? (arr_66 [11] [4] [i_27] [12]) : (min(((15 & (arr_5 [i_21] [i_21]))), ((max(51, 108)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
