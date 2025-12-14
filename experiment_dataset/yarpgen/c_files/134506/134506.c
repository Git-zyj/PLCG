/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = (((~234) - (arr_5 [i_0] [i_2] [i_3])));
                            var_12 = (min((~-115), 1));
                            var_13 = -118;
                            var_14 *= (min((arr_4 [i_0] [i_1]), ((15733 + ((-(arr_3 [i_1] [5])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_15 ^= arr_4 [i_4 - 1] [i_5];
                            var_16 = (max((((var_10 || ((max((arr_7 [i_0] [i_0] [2]), (arr_2 [i_0]))))))), (arr_1 [i_1] [i_1 - 1])));
                            arr_14 [i_4] = arr_6 [i_0] [i_1] [i_4 - 2] [i_5];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 7;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 6;i_8 += 1)
                        {
                            {
                                arr_24 [i_0 + 2] [i_0 + 2] [3] [i_7] [i_8] [i_6] = ((((min(-89772642424186566, 1))) ? 0 : ((max((max(-97, var_4)), var_7)))));
                                var_17 = (max(var_17, (((min((min((arr_3 [i_7] [i_1]), 89772642424186566)), ((min(var_8, var_8)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_18 = var_5;
                            var_19 = (((arr_34 [i_9] [i_10] [i_9] [i_9] [i_12]) || (~var_9)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_20 = ((-((((var_7 <= var_2) > ((((arr_36 [i_9] [i_10] [i_10] [i_10]) >= (arr_30 [i_14] [i_10] [i_10])))))))));
                            arr_42 [i_10] = (arr_37 [i_9] [i_9] [i_10]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 1; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 24;i_17 += 1)
                        {
                            {
                                arr_52 [i_9] [i_9] [i_9] [i_9] [i_10] [0] [i_9] = (min((((!((max((arr_46 [i_15]), var_2)))))), (max((1 * -89772642424186545), (arr_39 [i_10] [i_10] [i_10] [i_16] [i_10])))));
                                var_21 ^= ((((((((arr_48 [i_9] [i_10] [i_9]) + 9223372036854775807)) >> (((!(arr_39 [i_9] [i_10] [i_15] [i_16] [i_15]))))))) ? var_3 : (max((((arr_35 [i_10] [i_10] [i_10] [i_10] [i_9]) * (arr_36 [i_9] [i_15] [i_9] [i_17]))), (arr_45 [i_15] [i_15 + 2] [i_15 - 1] [i_15] [i_17 + 1] [i_17 - 1])))));
                                var_22 = (max(var_5, (arr_43 [i_9] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
