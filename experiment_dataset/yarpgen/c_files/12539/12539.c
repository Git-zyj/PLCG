/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, 1));
                            var_18 = (max(var_18, (((((((arr_2 [i_0] [i_0] [i_0]) >= 0)))) + (((arr_5 [i_1]) / (4413312760911226643 <= -16252)))))));
                            var_19 = (min(((((arr_3 [i_2] [i_3]) < ((-4101004436018363690 ? (arr_2 [i_3] [1] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])))))), (arr_6 [i_0] [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] = (arr_10 [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_5 + 1]);
                            var_20 = ((~(((arr_8 [i_5 - 2] [i_4 + 2] [i_4 + 2] [i_1] [i_0] [i_0]) / ((((arr_6 [i_0] [i_0]) | 1)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((min(((((arr_24 [i_8] [i_8 - 1] [i_8] [i_9]) ? -4630 : var_9))), ((-1200768183 ? (arr_24 [i_8] [i_8 - 1] [4] [i_6]) : (arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))))));
                            var_22 |= (min(((-4630 ? (((((arr_18 [i_6] [i_9]) != (arr_20 [i_6] [i_6]))))) : (arr_25 [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1]))), ((min(((4630 != (arr_23 [i_6] [i_9]))), var_1)))));
                            var_23 ^= (((((1 - (arr_18 [i_6] [i_7])))) ? (((arr_22 [i_6] [i_6] [i_8 - 1] [i_9]) + (arr_18 [i_9] [i_7]))) : (((arr_22 [i_6] [i_7] [i_8 - 1] [i_9]) - var_13))));
                            var_24 *= (~-var_3);
                            var_25 = var_13;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_26 = -var_13;
                            var_27 = var_2;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_28 |= ((-(arr_35 [i_12 - 1] [i_14] [i_14 + 1] [i_14 - 1])));
                                var_29 = ((min(12187962975015808486, (arr_38 [i_6] [i_6] [i_7] [i_13] [i_13] [i_14 + 1] [i_14 - 1]))));
                                var_30 = (max(((((arr_24 [i_6] [i_12] [i_7] [i_14]) ? (arr_24 [i_13] [i_13] [i_13] [i_13]) : -4630))), (min((arr_24 [i_12] [i_7] [i_6] [i_6]), var_5))));
                                var_31 = (arr_31 [i_7] [i_7] [i_7] [i_7]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_32 += 13317;
                                arr_49 [i_7] [i_15] = (~39300);
                                var_33 = (min((!23611), 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
