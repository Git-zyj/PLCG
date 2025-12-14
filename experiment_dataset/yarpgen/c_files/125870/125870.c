/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    var_12 = (arr_3 [i_1 - 1]);
                    var_13 = (min(var_13, (arr_7 [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 *= (arr_7 [i_0]);
                                var_15 = (arr_1 [i_0] [i_1 - 1]);
                                arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_2 - 3] [i_3 - 1] [i_4] = (arr_7 [i_0]);
                                var_16 = (arr_0 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_17 ^= (arr_4 [i_0] [i_0] [i_0]);
                                arr_17 [i_1 - 1] [i_1 + 2] [i_0] [i_5 - 3] [i_6 - 1] [i_0] = (arr_11 [i_6 + 4] [i_5 + 2] [i_0] [i_2 - 1] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_22 [i_0] [i_7] [i_1 - 1] [i_0] = (arr_2 [i_0] [i_1 - 1]);
                            var_18 = arr_7 [i_0];

                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                var_19 = (arr_24 [i_0] [i_7] [i_0] [i_8 + 1] [i_9]);
                                var_20 = (min(var_20, (arr_21 [i_1 - 1])));
                                arr_26 [i_9] [i_0] [i_8 + 1] [i_7] [i_0] [i_0] = (arr_5 [i_0] [i_7] [i_9]);
                                arr_27 [i_8 + 1] [i_0] = (arr_10 [i_9] [i_7] [i_1 + 1]);
                            }
                            for (int i_10 = 0; i_10 < 12;i_10 += 1)
                            {
                                arr_31 [i_0] [i_1 + 1] [i_7] [i_0] [i_10] = (arr_0 [i_7]);
                                arr_32 [i_0] [i_1 + 1] [i_7] [i_0] [i_10] = (arr_21 [i_0]);
                                arr_33 [i_0] [i_7] [i_1 + 2] [i_0] = (arr_7 [i_10]);
                                var_21 = 215;
                            }
                        }
                    }
                }
                arr_34 [i_0] [i_0] = (arr_8 [i_0]);
            }
        }
    }
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                arr_40 [i_11] [i_11] = (arr_37 [i_12] [i_11 + 1]);
                arr_41 [i_11] [i_12] = 9223372036854775807;
                arr_42 [i_11] [i_12] = (arr_39 [i_11 - 1]);
                arr_43 [i_11] [i_12] = (arr_36 [i_11 + 1] [i_11]);
                arr_44 [i_11] [i_11 + 1] [i_11] = (arr_37 [i_11 - 1] [i_12]);
            }
        }
    }
    #pragma endscop
}
