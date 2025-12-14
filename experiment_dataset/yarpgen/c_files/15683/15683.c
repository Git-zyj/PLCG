/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 += ((((((min((arr_13 [13] [i_1 - 1] [i_1] [i_1] [i_1] [8]), (arr_11 [i_4 + 1])))) ? ((var_1 ? var_0 : (arr_9 [i_4 - 1] [i_3] [i_3] [i_1]))) : -27462)) > (arr_11 [i_0])));
                                var_11 += (max((((arr_7 [i_1 + 1] [i_3] [i_4 + 1]) ? -27477 : (arr_7 [i_1 - 1] [i_3] [i_4 - 1]))), ((max((arr_2 [i_1 + 1]), var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_12 += (max((arr_9 [i_6] [i_5] [i_5] [i_1]), 27481));
                                var_13 = (min(var_13, var_8));
                                var_14 = (((((!(arr_16 [i_0] [i_1] [i_2] [9] [i_6] [i_6])))) != (((-8903694429826210652 >= (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_6]))))));
                                var_15 -= (arr_1 [i_0]);
                                var_16 = (min(var_16, ((max((max(((((arr_18 [i_6 - 1] [i_5] [i_2] [i_2] [i_2] [i_5] [i_0]) && (arr_17 [i_0] [i_1 - 1] [i_0])))), (max(60320, (arr_14 [i_1]))))), (((27457 ? (arr_10 [i_1 - 1] [i_1 + 1] [i_6 + 1] [i_6 + 1]) : (arr_10 [i_1 + 1] [i_1 + 1] [i_6 + 1] [i_6])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_17 = (max(((max((arr_9 [i_0] [i_1 + 1] [i_1] [i_7]), (arr_10 [i_8] [1] [i_1 + 1] [i_0])))), (max(((max((arr_12 [i_0] [i_1] [i_2] [i_7] [i_8]), (arr_3 [i_0] [i_0] [i_0])))), (arr_16 [i_1 + 1] [i_1 - 1] [14] [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                                var_18 = ((((min(-1, 27462))) ? (((((0 / var_6) >= (((0 ? 1 : (arr_19 [i_2] [i_2] [i_0] [i_0])))))))) : (max(((var_3 % (arr_22 [i_7] [i_8] [i_2] [i_7] [i_8 - 3]))), -27462))));
                                var_19 = (~-73);
                                var_20 = ((!123) > 8);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_21 = ((((max(((0 ? 65535 : -27477)), (((1 || (arr_1 [i_0]))))))) ? var_1 : -28687));
                                var_22 = (min((arr_3 [i_1] [i_1] [i_10 + 1]), 27477));
                                var_23 = (min((54772 != 27477), ((-(arr_11 [i_1 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_24 = ((((((arr_3 [i_1] [i_1] [i_12]) ? (arr_3 [i_1 + 1] [i_11] [i_1 + 1]) : (arr_5 [i_1])))) ? (((!(arr_3 [i_1 + 1] [i_1 - 1] [i_0])))) : ((min(0, (arr_5 [i_1]))))));
                                var_25 = (((arr_7 [i_0] [i_1] [i_0]) ? ((((arr_7 [i_11] [i_1] [i_2]) || var_8))) : (1 / 1)));
                                var_26 = ((-(((arr_21 [i_12 - 1] [i_12 + 1] [i_12] [9] [i_12 + 1] [4]) * (arr_21 [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 1] [i_12] [i_12])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 21;i_14 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_27 += ((!((min(243, -128)))));
                                var_28 ^= (arr_39 [i_13] [i_13] [i_13]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_29 = max((max((arr_40 [i_19 - 1] [i_18] [i_14]), 123)), ((((arr_35 [i_14 - 1] [i_14 + 1]) && (arr_35 [i_14 + 1] [i_14])))));
                            var_30 = ((max((((arr_50 [i_19]) ? (arr_37 [i_14]) : var_6)), var_6)));
                            var_31 = ((+(max((arr_45 [i_13] [i_19 + 1] [21] [i_14 - 1] [i_14 - 1] [i_14]), (arr_45 [i_13] [i_19 + 1] [i_18] [i_14 - 1] [i_19] [i_13])))));
                            var_32 = (min(var_2, (((!((min(62383, 1))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
