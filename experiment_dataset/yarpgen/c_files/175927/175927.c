/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_3] = ((-((max((arr_10 [i_3] [i_3] [i_3] [i_1] [i_3]), (arr_10 [i_3] [i_3] [7] [i_1] [i_3]))))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] = var_0;
                                var_12 = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] = ((((((max(var_11, var_9)) ^ (arr_0 [i_0] [i_0])))) ? 0 : (max(((1320515910 << (((arr_3 [i_1] [i_1]) - 965066808)))), (((var_8 / (arr_13 [i_1] [i_5] [i_1]))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_6] = ((((min(2974451374, (arr_16 [i_0] [i_1]))) / var_11)) + var_0);
                                var_13 = ((((((arr_2 [i_2] [i_1]) ? (arr_2 [i_0 + 2] [i_1]) : (arr_2 [i_0 - 2] [i_1])))) ? (~33552384) : (((arr_2 [i_0 - 2] [i_1]) ? 1886592909 : (arr_2 [i_2 + 1] [i_1])))));
                                var_14 = max((((var_4 / 9223372036854775807) - (arr_6 [i_0 - 3] [i_2] [i_0 - 3]))), (~var_11));
                                var_15 = max(((var_7 ? 65535 : 0)), (-1984637539 > 18403));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_26 [i_7] [i_7] [0] [10] [i_1] [10] [i_7] = (arr_10 [10] [8] [10] [i_1] [5]);
                                arr_27 [i_0] [i_1] [i_1] [i_7] [5] = (((arr_4 [i_0 + 2] [i_2 + 3] [i_8 - 3]) % var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 3; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 10;i_13 += 1)
                        {
                            {
                                arr_39 [i_9] [i_9] [i_10] [i_11] [i_9] [i_13] &= (max(((max((!64544), 2147483647))), (((1507747892 ? 1320515907 : var_5)))));
                                arr_40 [i_9] [i_10] [i_11] [9] [i_13] = (arr_32 [i_11 - 3]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 2; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_16 = ((min((min(4273, 1320515919)), (max(1886592917, 17689)))));
                                var_17 &= ((0 < (~var_11)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 2; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 4; i_18 < 9;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 12;i_19 += 1)
                        {
                            {
                                arr_56 [i_10] [i_10] [i_10] = 8917945599090379197;
                                var_18 = arr_38 [4] [i_9] [i_19] [i_17] [i_18] [i_19];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
