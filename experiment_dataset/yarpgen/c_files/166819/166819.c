/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((max(var_7, (89 >= 114))) >> ((((-(min(141, var_1)))) - 860067729))));
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 += (56 ? ((min(1, 150))) : 211);
                                arr_11 [1] [8] [i_2 - 1] [i_3 - 1] [i_4] |= 148;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(145, 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (max(var_13, (max(var_6, 13654903779877493418))));
                                var_14 = (arr_13 [8] [8] [6] [i_5]);
                                var_15 = (max((max(196, (arr_13 [i_0 + 1] [10] [i_2 + 1] [i_2 + 1]))), 110));
                                var_16 |= arr_13 [i_1] [10] [i_5] [5];
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_17 = ((-(arr_5 [i_1] [i_1] [8] [10])));
                        var_18 = (arr_18 [i_0 - 1] [i_0 - 2] [i_2 + 1] [i_7 + 3]);

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_24 [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0] [1] [i_0] = (arr_7 [i_0 + 2]);
                            var_19 |= (((arr_3 [i_0 + 2] [i_2 - 1]) ? (arr_3 [i_0 - 1] [i_2 - 1]) : (arr_3 [i_0 + 2] [i_2 + 1])));
                            var_20 = (arr_9 [0] [i_1] [i_2] [6] [6] [i_7 + 1] [i_8]);
                            var_21 |= (arr_19 [i_1] [i_7 + 1] [i_1] [i_1]);
                        }
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2 - 1] [i_1] [i_9 - 1] = (-(arr_2 [i_0 + 1] [i_9 + 3]));
                            var_22 = var_5;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_23 += var_3;
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                            arr_32 [i_0] [i_2 - 1] [i_7] = (((arr_29 [10] [i_1] [i_1] [i_1] [i_1]) ? (arr_29 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1]) : (arr_29 [i_0 + 1] [i_0 + 1] [i_10] [i_7 + 1] [i_2 + 1])));
                            var_24 += 2487468104;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
