/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = 2564609991;
                var_12 = (!var_7);

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_13 = -var_4;
                    arr_9 [i_0] [4] [8] &= (!3859833509);
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] = ((0 ? 4294967295 : 1));
                                var_14 = (min(var_11, (~var_5)));
                            }
                        }
                    }
                    var_15 = (max(var_15, -0));
                    var_16 = ((var_9 ? ((var_7 ? var_10 : (arr_2 [i_0] [i_0]))) : var_9));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_3] [i_6] [i_7] = ((min(1077371051, 1)));
                                var_17 += (((~(arr_0 [i_0] [i_1 - 1]))));
                                arr_23 [i_0] = var_3;
                                var_18 = max(4863864097372586779, 0);
                                arr_24 [i_0] [5] [i_0] [i_0] [i_0] [8] [i_0] = 4294967295;
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] [8] = (var_3 ? ((-var_9 ? 1730357304 : (arr_0 [i_3] [i_0]))) : var_1);
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_19 = ((var_6 ? var_4 : (((-(min(var_0, var_1)))))));
                                var_20 = min(((var_6 ? var_1 : (max(var_2, var_2)))), (arr_26 [i_1]));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_21 ^= ((((13582879976336964844 ? 65525 : 3031372121))) ? (min(2564609991, 2291280757)) : -930686051);
                                var_22 = (min(var_22, (((((max((arr_43 [i_11] [i_12] [i_13] [i_12] [i_15]), 119))) ? var_3 : (((((57894 ? 2564610006 : 4863864097372586779))))))))));
                                var_23 = (max(var_23, ((max(((var_10 ? 0 : var_11)), (!var_1))))));
                            }
                        }
                    }
                    arr_44 [i_11] = (arr_41 [i_11] [2] [i_11] [i_13]);
                    arr_45 [i_11] [i_13] = (arr_34 [i_11]);
                }
                arr_46 [3] [3] [i_12] = ((~((-var_7 ? var_5 : (arr_43 [i_12] [i_12] [i_12] [i_11] [i_12])))));
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 13;i_18 += 1)
                        {
                            {
                                var_24 = var_2;
                                arr_54 [4] [i_18] = var_9;
                                arr_55 [i_11] [i_17] [i_16] [12] = ((-(max(var_7, 1263595174))));
                            }
                        }
                    }
                }
                var_25 = ((min((min(0, var_7)), ((min((arr_53 [i_11] [i_11] [i_12] [i_12] [5]), 120))))));
            }
        }
    }
    #pragma endscop
}
