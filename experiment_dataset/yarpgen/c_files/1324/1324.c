/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [15] [i_0] [i_0] = ((~(arr_2 [i_3] [i_0] [i_0])));
                            var_16 = (max(var_16, ((max(((min(1090200758, ((1 | (arr_8 [i_0] [i_1] [i_2])))))), (arr_3 [i_2] [i_1] [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((!((((2020983820 <= var_1) - ((min((arr_2 [i_0] [i_1] [i_4]), var_3)))))))))));
                            var_18 = ((~(((!(((var_8 >> (var_13 - 30)))))))));
                            arr_17 [i_0] [i_1] [i_0] [i_5 + 1] = ((((((arr_7 [i_0] [i_0]) - (arr_7 [i_0] [i_0])))) ? (((min(1, (arr_10 [i_0]))))) : (min((((1 >> (var_14 - 100)))), (min(var_4, (arr_0 [i_0])))))));
                            var_19 -= 1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] = ((max(((60658 / (arr_14 [i_0])), ((-(arr_19 [i_0])))))));
                                arr_26 [i_0] [i_0] [i_6] [i_7] [i_8] [i_8] [i_6 + 2] = (((arr_2 [i_6 - 1] [i_7] [i_1]) ? ((1 ? (arr_21 [i_0] [i_6 + 1] [i_6] [i_7]) : (arr_23 [i_6 + 2] [7] [i_1] [i_6] [i_6 + 2] [i_6 + 2] [i_1]))) : (((arr_23 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) * (!var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_20 = var_15;
                            var_21 *= (((((~4294967264) != (max(var_12, (arr_35 [0] [i_10 - 1] [i_9] [0]))))) ? ((((arr_19 [i_9]) + ((min(1, 1)))))) : (((arr_32 [i_9] [i_9] [i_9]) - (min(1, (arr_6 [i_9] [i_10] [i_12] [i_12])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 12;i_15 += 1)
                        {
                            {
                                arr_46 [i_15 + 1] [i_14] [i_13 + 1] [i_14] [i_9] = (arr_5 [i_9] [i_10] [i_14 - 3] [i_14]);
                                var_22 ^= var_7;
                                var_23 *= 27;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
