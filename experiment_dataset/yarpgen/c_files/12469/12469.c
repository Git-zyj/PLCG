/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 + 2] [4] = (arr_2 [i_0] [0] [i_1]);
                arr_5 [i_0 + 1] = var_1;
                var_10 = (max(((var_5 ? (max((arr_1 [i_0]), var_9)) : var_3)), ((~(max(var_9, var_5))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_2] [1] [i_2] &= arr_11 [i_2] [i_2] [i_3];
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_11 = 0;
                                var_12 = (min(var_12, ((max((arr_15 [i_2]), ((0 ? (arr_20 [18] [0] [18] [i_5] [i_5] [i_5] [i_5]) : (arr_16 [i_2]))))))));
                                var_13 = (min(var_13, ((((~-2485) >> ((13198456825183440915 ? (((-2486 + 2147483647) >> (((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - 39)))) : (arr_10 [i_4]))))))));
                                arr_22 [i_2] [i_2] [i_4] [i_2] [i_2] &= ((((((arr_13 [i_2] [i_3] [i_4] [i_2]) + var_4))) ? ((min(var_1, var_4))) : (((arr_9 [i_5] [i_3]) ? 0 : (arr_8 [i_2])))));
                            }
                        }
                    }
                }
                var_14 = var_2;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 21;i_9 += 1)
                            {
                                arr_29 [i_3] = -578030787220593404;
                                var_15 = var_9;
                                var_16 = ((127 ? (arr_17 [i_2] [i_2] [3] [15] [15] [i_9 + 2]) : var_5));
                                var_17 = 5064334678980588639;
                                arr_30 [i_3] = ((!(((1250068092 ? (arr_16 [i_8]) : 0)))));
                            }
                            for (int i_10 = 0; i_10 < 1;i_10 += 1)
                            {
                                var_18 = (~0);
                                var_19 = max(((max(0, var_7))), ((((~var_3) != var_6))));
                                var_20 *= arr_13 [i_2] [i_7] [i_7] [i_2];
                                arr_34 [i_3] [i_3] [16] [i_10] = (arr_15 [i_2]);
                            }
                            for (int i_11 = 1; i_11 < 1;i_11 += 1)
                            {
                                var_21 *= (arr_37 [i_11] [i_3] [20] [i_7] [16] [20]);
                                var_22 += (min(var_9, (((((arr_8 [i_2]) >= (arr_37 [10] [i_2] [i_3] [i_7] [i_8] [i_11])))))));
                                var_23 |= (((arr_18 [i_7] [i_7] [i_7] [i_11 - 1] [i_11 - 1] [i_8] [i_8]) - (!0)));
                            }
                            arr_38 [i_3] [i_7] = (min(((-(arr_8 [i_7]))), ((min((arr_37 [i_2] [4] [13] [i_2] [i_2] [i_2]), var_1)))));
                            var_24 = (arr_27 [4] [4] [i_7] [i_8] [i_8]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                var_25 += ((!((max((~204350065), -204350078)))));
                var_26 = (max(var_26, var_9));
            }
        }
    }
    #pragma endscop
}
