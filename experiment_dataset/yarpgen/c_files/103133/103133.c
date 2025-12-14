/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 |= var_2;
                                var_19 -= (max((arr_8 [2] [i_0] [i_1 + 1]), (((min(var_11, var_4))))));
                                var_20 -= (max(17, (arr_4 [i_0] [i_0])));
                                var_21 = ((((max((min(var_4, (arr_0 [i_2]))), 17953))) | (-115 * 50735)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_22 = (((arr_11 [i_6] [i_1] [i_1]) ? var_11 : 114));
                                var_23 += (arr_9 [i_2 + 1] [8] [i_0 + 1]);
                                var_24 = (((-127 - 1) ? var_5 : (arr_12 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_6])));
                            }
                        }
                    }
                    var_25 ^= (((arr_15 [i_1 - 2] [i_0] [i_2 + 1]) ^ (((!(arr_15 [i_1 + 1] [i_0] [i_1 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_26 = (-127 - 1);
                                arr_22 [i_1] [i_7] [i_8] = (max((~var_14), ((max(var_15, 32768)))));
                                var_27 &= ((((min(var_5, (arr_15 [i_7] [i_7] [i_0])))) ? (((((4032 ? 8646911284551352320 : (arr_2 [i_8]))) == (((65535 ? (arr_21 [22] [i_1] [i_2] [i_2] [i_7] [i_7] [i_8 + 1]) : (arr_12 [16] [16] [16] [16] [i_7] [i_7]))))))) : 0));
                                var_28 = (arr_10 [i_8 + 3] [i_7 - 1] [i_0] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1] = (arr_29 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_10 + 1]);
                                var_29 = ((((((var_8 % var_16) ? ((min(var_4, (arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_1] [i_0 - 2])))) : 39))) * (((((arr_27 [i_1] [i_2]) < (arr_1 [i_1 - 3] [i_1 - 3]))) ? ((((var_12 <= (arr_7 [2] [i_1 - 2] [i_1 - 2] [i_9]))))) : ((-1 ? var_12 : var_9))))));
                                var_30 ^= var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            {
                var_31 = (((29950 | 1) >> (var_10 - 753866683)));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_32 = (arr_25 [i_11]);
                            var_33 = max((((((~(arr_10 [i_11 - 1] [i_12] [i_13 + 1] [i_14])))) ? (var_16 + var_15) : (!-98))), (~var_0));
                            var_34 = (((arr_12 [i_12 - 1] [i_14 - 2] [i_13 - 2] [i_11] [i_12] [i_13 + 1]) ? -1 : 1));
                        }
                    }
                }
                var_35 = (max(var_35, (((max((arr_0 [i_11 - 1]), (arr_0 [i_12 + 1])))))));
                var_36 = ((!(((~(arr_18 [i_12]))))));
            }
        }
    }
    #pragma endscop
}
