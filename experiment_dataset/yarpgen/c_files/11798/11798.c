/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_12 ? var_7 : (((57344 >= (~var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (!11435091545023131603);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, (((var_11 >> ((((7011652528686420016 << (((arr_4 [i_0 + 1] [i_1] [i_1]) - 2329566313)))) - 7500745179385561086)))))));
                    var_18 = (!11435091545023131603);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 ^= (arr_11 [i_1] [i_4 + 2] [0] [20] [i_4]);
                                arr_13 [i_0] [i_0] [i_0 - 1] = (~var_13);
                                var_20 = 3235491586;
                                arr_14 [i_0] = ((!(arr_2 [i_2] [1])));
                            }
                        }
                    }
                    var_21 = var_0;
                    var_22 = (~61);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] = 7011652528686420033;
                    arr_18 [i_0] [i_0] [19] [i_0] = (((arr_12 [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 3]) | (arr_12 [i_1 - 3] [i_1 + 1] [i_1 - 1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_23 = (arr_5 [i_0]);
                                var_24 = (~9007194959773696);
                                var_25 = ((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]));
                                var_26 = (max(var_26, 0));
                            }
                        }
                    }
                    arr_26 [i_0] [i_0] [i_5] = var_8;
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_35 [i_1] [9] [19] [i_0] [i_1] [i_1 - 2] [i_1 + 1] = var_5;
                                var_27 = ((1 ? (max((arr_27 [i_0] [i_8] [i_9]), (max(7011652528686420016, var_6)))) : (((arr_10 [10] [i_0] [i_8] [10] [10]) % (arr_28 [i_0] [i_0 - 1] [i_8])))));
                                arr_36 [i_0] [i_1] [i_8] [i_1] [i_9] &= (max((((((min((arr_24 [i_1 - 3]), 7011652528686420028))) ? (arr_5 [i_9]) : (~14148)))), (((-(arr_4 [i_0] [i_1] [i_9]))))));
                                arr_37 [i_0] [i_1] [0] [i_9] [i_10] [i_0] [18] = (min(14148, var_14));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_28 = (min(((4135238151 ^ (arr_4 [i_0 + 1] [i_0 + 1] [i_0]))), (arr_4 [i_0 - 1] [i_0 - 1] [i_0])));
                                arr_44 [i_0] [i_0] [i_0] [i_8] [i_11] [i_12] [i_12] = ((((min(7011652528686420033, (arr_42 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [3] [i_0 - 1] [i_0])))) ? ((((arr_15 [i_1] [i_1] [i_1 - 2]) > 0))) : (((arr_15 [i_1] [i_1] [i_1 - 1]) + (arr_42 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))));
                                arr_45 [i_0] [i_1] [i_1] [i_8] [i_11] [17] = ((-(((((var_11 ? var_6 : (arr_32 [i_0] [i_1] [i_1] [i_0] [i_12])))) ? ((min((arr_41 [i_12]), 123))) : (arr_29 [i_0] [9] [i_8])))));
                            }
                        }
                    }
                    arr_46 [i_0 + 1] [i_1 - 3] [i_0] = (max((max((max(var_14, 7011652528686420033)), (arr_0 [i_1 - 1] [i_0 - 1]))), (((!(arr_5 [i_0]))))));
                }
                var_29 = ((~(arr_39 [i_0 - 1] [i_0] [i_0] [i_1] [i_1] [20])));
                var_30 = (~7011652528686420018);
            }
        }
    }
    var_31 += 504403158265495552;
    var_32 = var_9;
    #pragma endscop
}
