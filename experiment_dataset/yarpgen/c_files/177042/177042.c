/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((arr_7 [i_1 - 2] [i_1 + 2]) ? (arr_7 [i_1 - 1] [i_1 + 2]) : (arr_7 [i_1 + 3] [i_1 - 1]))))));
                arr_8 [i_0] [i_0] [i_0] = (((((+(((arr_6 [i_0] [i_0] [i_0]) ? var_0 : (arr_6 [i_0] [1] [i_1])))))) ? (arr_0 [i_0]) : -17179));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    var_12 = 17178;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4] [i_5] [i_4] [3] [i_6] = (arr_0 [i_5]);
                                var_13 = (arr_7 [i_2] [i_3]);
                                var_14 = ((((((((arr_17 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2]) ? var_0 : (arr_11 [i_2])))) ? (arr_4 [i_2] [i_3] [i_4]) : (arr_0 [i_5])))) - (min((~var_10), (((arr_3 [i_3]) | (arr_11 [i_3]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_15 *= var_4;
                                var_16 = ((~(((arr_7 [i_2 - 1] [i_2 + 2]) & (arr_16 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_4 - 1])))));
                                arr_28 [i_2] [i_3] [i_4] [i_3] [i_2] = (arr_26 [i_2] [i_7] [i_2] [i_3] [i_2]);
                                arr_29 [6] [i_3] [i_8] [i_7] [i_8] [0] = arr_6 [i_2] [i_4] [i_2];
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
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            {
                arr_35 [i_9] [i_9] = ((~((~(arr_13 [i_10 - 1] [i_10] [i_9])))));
                var_17 = ((-(((arr_17 [6] [i_10] [5] [i_10 + 1] [i_10] [i_10]) ? ((14685 ? 2 : 919290301298644361)) : ((((arr_24 [11] [11] [i_9] [i_9] [i_9]) ? (arr_17 [i_9] [i_10] [i_9] [i_9] [i_9] [i_9]) : (arr_17 [9] [9] [0] [0] [10] [0]))))))));
                var_18 = (((arr_34 [1] [i_10 - 1]) & ((var_9 ^ (arr_9 [i_10])))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 12;i_12 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 13;i_13 += 1)
                            {
                                arr_44 [i_9] = (arr_34 [i_12 - 4] [i_10 + 1]);
                                arr_45 [i_9] [i_9] [i_11] [i_10] [i_9] = (arr_43 [i_10 - 1] [i_9] [i_10] [i_10] [i_10]);
                            }
                            var_19 = (arr_23 [i_9] [1] [i_11] [i_11] [i_12]);
                            arr_46 [i_9] = ((((((((~(arr_39 [i_9] [i_9] [i_9])))) ^ ((32141 ? var_0 : (arr_3 [i_9])))))) ? (((!((((arr_16 [3] [i_10] [i_11] [i_11]) ? 277242462 : (arr_9 [5]))))))) : (arr_2 [i_11])));
                        }
                    }
                }
                arr_47 [i_9] [i_9] [i_9] = arr_0 [i_9];
            }
        }
    }
    #pragma endscop
}
