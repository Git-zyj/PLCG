/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_12 = (((arr_4 [i_0 - 1] [i_0 + 3]) ? (((!(arr_4 [i_2] [i_1])))) : (arr_4 [i_0 - 2] [i_0 - 4])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (max(var_13, ((((arr_3 [i_0]) >= ((~(arr_4 [11] [11]))))))));
                        var_14 = (arr_0 [i_0 + 2]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_15 = ((1 ? 1 : (-127 - 1)));
                        var_16 = (arr_10 [i_4] [i_2] [i_0] [i_2] [i_1] [i_0]);
                        var_17 = ((~(((arr_9 [i_0] [0] [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_1 [9] [5])))));
                        var_18 = ((var_11 || (arr_10 [i_4] [i_1] [i_1] [i_1] [i_1] [11])));
                        var_19 = ((arr_6 [i_4] [i_2] [10] [i_0]) ? ((((arr_8 [i_0] [i_1] [i_2] [i_1]) && var_2))) : ((((arr_0 [i_0]) < (arr_0 [i_0])))));
                    }
                    var_20 = var_5;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_21 = ((((((arr_0 [i_0 + 1]) ? (arr_4 [i_0 - 2] [i_0]) : var_7))) ? ((min(1, var_2))) : (min(var_1, (arr_11 [i_0] [i_1] [i_5] [i_0])))));
                    var_22 = (min((arr_11 [i_0 - 2] [i_0 - 2] [i_0] [i_0]), (((!(arr_7 [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_23 = (8 > var_2);
                                arr_18 [10] [2] [i_0] [i_0] [i_1] [i_0] = ((-(((min(var_10, -113))))));
                                var_24 = (arr_13 [6] [i_1] [i_0] [i_0]);
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_25 ^= (min((arr_6 [i_0 - 4] [i_0 - 4] [i_0 - 1] [i_0 - 3]), ((var_2 % (max((arr_7 [i_8]), var_5))))));
                    var_26 = (((((((var_8 > (arr_8 [4] [i_1] [8] [i_8])))) * ((~(arr_15 [i_0] [8] [i_8] [7] [i_8] [i_8]))))) * (!1)));
                }
                var_27 = ((1 % (1 & var_9)));
                var_28 ^= max(7663, 22114);

                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    var_29 = (max(var_29, (((-(min(-268435455, (arr_1 [i_0 - 2] [i_0 - 3]))))))));
                    var_30 = ((((arr_19 [i_0] [i_9 - 2] [i_0 - 4] [i_0]) != (arr_19 [i_0] [i_9 - 2] [i_0 + 2] [i_9 - 2]))));
                    var_31 = (arr_13 [i_0] [8] [i_1] [1]);
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_32 ^= ((~((min((arr_8 [i_0 - 2] [i_0 - 2] [i_10] [i_0 - 2]), (arr_8 [i_0 - 1] [9] [i_12] [i_12]))))));
                                var_33 = ((max((arr_15 [i_0 - 1] [0] [i_10] [i_10] [i_11 - 2] [i_12 - 1]), (((arr_14 [i_0] [i_10] [i_11] [i_12]) ? var_10 : (arr_11 [i_10] [i_10] [i_10] [i_10]))))) + var_9);
                                arr_32 [i_12] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = 1;
    #pragma endscop
}
