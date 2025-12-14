/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max((!7760), var_5))) ? (((((3556945492 ? var_7 : var_10))) ? (7760 | var_5) : var_6)) : (!-3253676490696692456)));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = (max(1920, (!57633)));
                            var_17 = ((((max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2])))) ? (((!(arr_6 [i_3 + 1])))) : (((!(arr_6 [i_3 - 2]))))));
                            arr_8 [i_0] [i_0] |= (((arr_0 [i_3 + 1]) > (~2751148936629019764)));
                        }
                    }
                }
                arr_9 [i_0] [i_1] = ((((-(arr_7 [8] [i_0 - 3]))) + ((((arr_4 [i_0 - 3] [i_0] [i_0 + 1] [i_0 + 1]) ? var_2 : var_2)))));
                arr_10 [i_0] [i_0] = (min((((!((((arr_4 [i_0] [i_1] [i_1] [i_1]) ^ (arr_2 [i_1] [i_0 - 1] [13]))))))), (((max(738021802, var_0)) & ((max(var_11, var_6)))))));

                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    var_18 *= (min(((max(-7760, var_0))), (min((arr_2 [i_0 - 1] [i_4 - 1] [1]), (arr_3 [i_4 + 1] [i_0 - 1] [i_4])))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_5] [i_4] [1] [i_5] [i_5] = (var_7 || ((max((((arr_17 [i_0 - 3] [i_1] [i_5] [i_5] [15]) >> 0)), var_3))));
                                var_19 = (min(var_19, 3556945492));
                                var_20 &= (((((38668 ? var_10 : (arr_16 [i_4 - 1] [i_4] [i_4 - 1] [i_5 - 2])))) ? (((arr_16 [i_4 - 1] [i_5] [i_5] [i_5 + 1]) - (arr_16 [i_4 - 2] [i_4] [i_4] [i_5 + 1]))) : (max((arr_16 [i_4 - 1] [i_5] [1] [i_5 - 2]), (arr_16 [i_4 - 2] [i_5] [i_5] [i_5 - 1])))));
                                var_21 += var_12;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_26 [i_7] = (min((arr_18 [15] [i_7] [i_1] [i_4] [i_7] [i_8]), (arr_5 [i_0] [12] [i_8])));
                                var_22 = (min(var_22, (((((arr_4 [i_0] [i_1] [i_7] [i_7]) >> (arr_6 [i_0 - 3])))))));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] [i_1] [i_4] = -1184962646655808809;
                }
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_23 *= ((!((((((var_10 ? 1948747879 : 62298))) ? var_8 : 158594418)))));
                                var_24 += (max((((!(arr_16 [i_0] [i_0] [i_0] [i_9 - 1])))), (((arr_16 [i_0] [i_1] [i_9] [i_9 + 2]) ? (arr_16 [i_0] [i_1] [9] [i_9 + 1]) : 1072693248))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_25 = ((((max(var_5, 1948747879))) ? ((((arr_39 [i_0 - 3] [i_9 + 2] [i_13 - 2]) && (arr_39 [i_0 - 3] [i_9 + 1] [i_13 - 1])))) : (((!(arr_39 [i_0 + 1] [i_9 - 2] [i_13 - 2]))))));
                                arr_44 [i_13 - 2] [i_0] [i_0] [i_1] [i_0] [i_0] = ((var_12 + (max((max(0, 0)), var_3))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_26 = (((max((arr_13 [i_0] [i_0 - 2] [i_0]), var_4)) << (((arr_13 [i_0 - 1] [9] [i_0]) - 1028945635))));
                                var_27 |= -11979;
                            }
                        }
                    }
                    var_28 = (min((arr_30 [i_0 - 3] [i_1] [i_0 - 3]), (((((~(arr_38 [i_0] [i_0] [i_1] [i_1] [i_1])))) ? ((1948747863 ? var_1 : var_11)) : (arr_4 [i_1] [i_1] [14] [i_1])))));
                    arr_51 [i_0] [i_1] [i_9] [i_1] = ((-(arr_17 [i_0 - 2] [i_9] [i_9] [i_1] [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
