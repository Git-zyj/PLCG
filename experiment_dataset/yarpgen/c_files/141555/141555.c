/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                arr_12 [i_0] = 42889;
                                arr_13 [i_0] [i_1] [9] [i_3] [i_0] [i_0] = (arr_3 [i_4] [i_3] [i_0]);
                                var_13 = (min(var_13, (((var_11 ? (arr_1 [i_4]) : (arr_1 [i_4]))))));
                                var_14 = ((var_3 ? ((42895 ? var_1 : var_11)) : var_4));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                var_15 = ((-(((((var_6 ? var_4 : var_6))) ? ((((arr_1 [i_0]) ? (arr_11 [i_1] [i_3] [i_2] [i_1] [i_0] [i_2] [i_3]) : (arr_1 [i_0])))) : ((22667 ? var_11 : var_5))))));
                                var_16 = (((((((-127 - 1) ? (arr_16 [i_0] [i_0] [i_2 + 1] [i_3] [i_3]) : var_6)) >= (arr_17 [i_0] [i_2 + 1] [i_3] [i_5] [i_0] [i_5] [i_5]))) ? ((+((-1 ? (arr_9 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_5]) : (arr_15 [i_1] [i_1] [i_1] [i_3] [i_0]))))) : (arr_7 [i_2 + 1] [i_2])));
                                arr_18 [i_0] [i_3] [i_5] = var_12;
                                var_17 += ((((((arr_0 [11] [16]) ? (arr_16 [5] [5] [13] [i_3] [19]) : (((arr_4 [i_1] [i_2] [i_1]) / var_6))))) ? ((0 ? ((((arr_10 [0] [i_1] [4] [i_5] [0] [0]) ? var_11 : (arr_7 [i_0] [i_0])))) : var_8)) : ((((((var_6 ? 63 : 22647))) ? 1 : (arr_5 [4] [i_1]))))));
                                arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = (((((var_6 ? 121 : 22641))) + -2499069972));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] &= var_6;
                                var_18 |= arr_16 [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                            var_19 = (max(var_19, 1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 21;i_9 += 1)
                            {
                                var_20 = (arr_4 [i_0] [1] [i_9]);
                                var_21 = ((((((arr_8 [i_9] [i_0] [i_1]) ? (arr_10 [6] [1] [i_1] [i_0] [i_8] [i_9]) : (!var_5)))) ? (((-(((arr_4 [i_0] [i_7] [i_9]) ? -21 : var_9))))) : var_5));
                            }
                            for (int i_10 = 1; i_10 < 20;i_10 += 1)
                            {
                                var_22 = ((0 ? (arr_17 [i_0] [i_1] [i_7] [i_8] [i_0] [12] [i_8]) : (((((((arr_5 [i_0] [i_1]) ? var_6 : var_1))) ? ((var_8 ? (arr_1 [i_0]) : 1)) : -8316)))));
                                var_23 = (((arr_0 [i_8] [i_0]) ? (((arr_25 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1]) ? 0 : (arr_25 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]))) : ((27400 ? (arr_23 [i_0] [i_7] [i_0] [i_10]) : (((arr_25 [i_0] [1] [i_7] [i_0] [13]) ? (arr_14 [i_0] [15] [15] [6] [i_0]) : (arr_8 [13] [i_0] [13])))))));
                            }
                            var_24 = 3742842826;
                        }
                    }
                }

                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_25 = (max(var_25, var_7));
                                arr_37 [i_0] [i_0] = 0;
                            }
                        }
                    }
                    var_26 = var_5;
                }
            }
        }
    }
    var_27 ^= (~var_11);
    var_28 = -17172;
    var_29 = var_0;
    #pragma endscop
}
