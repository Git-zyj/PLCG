/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 ^= var_8;
                                var_17 = ((((7680 ? (arr_9 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0]) : (arr_9 [6] [i_0 + 1] [i_0] [i_0 - 3] [i_0 + 1])))) ? (arr_3 [i_0 - 3]) : (arr_8 [i_1] [i_3]));
                                var_18 = (max(var_3, (((arr_4 [i_1] [i_4]) ? ((-(arr_5 [i_0]))) : (!67108864)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((((((arr_3 [i_1]) ? var_1 : var_8)) - ((((arr_10 [i_0 - 2] [2] [i_5 - 1] [i_0 - 2]) - var_8)))))))));
                            arr_22 [1] [i_5] [i_5] [i_6] = (arr_14 [i_0 + 1]);
                            var_20 &= (var_3 >= 17185);
                            var_21 &= ((+(((arr_15 [i_0 + 1] [i_0]) ? ((var_6 ? (arr_20 [i_6] [i_5 - 2] [i_6]) : (arr_8 [1] [i_6]))) : 283963300))));
                            var_22 = (~var_10);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_23 *= max(-1, (~var_9));
                            arr_28 [i_0] [i_0] [i_1] [i_7] [i_7] [i_8] = (arr_2 [7]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_24 = (((arr_33 [i_9]) == ((0 ? 3674547420620913311 : (arr_32 [i_9])))));
                                arr_44 [i_11] &= (((((arr_39 [i_12 + 1] [i_13 - 1]) ? (arr_39 [i_12 + 1] [i_13 + 1]) : var_6)) / 1));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 3; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 0;i_16 += 1)
                        {
                            {
                                var_25 &= ((((((arr_39 [i_10] [i_16 + 1]) & var_12)) ^ ((((arr_34 [6]) ? 42 : var_6))))));
                                var_26 = (((~(arr_45 [i_9 - 3] [i_14 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
