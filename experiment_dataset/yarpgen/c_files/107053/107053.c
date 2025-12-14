/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (arr_13 [i_4 + 4] [i_2 + 3] [i_0] [i_0 + 1] [i_0])));
                                var_12 = (max(var_12, ((((arr_4 [i_3]) << (((arr_4 [i_3]) - 17355626457351885236)))))));
                                var_13 = (arr_4 [i_0]);
                                arr_15 [i_2] [i_0] [i_2] [i_1] [i_0] [i_0 - 1] = (arr_12 [i_0] [i_0 - 1] [i_2] [i_3] [i_4 + 3]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] = ((!(arr_4 [i_0])));
                }
            }
        }
        arr_17 [i_0] = var_1;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_14 += (arr_14 [i_0 + 2] [i_6] [i_7 + 1] [i_7 - 1] [i_6]);
                            var_15 = (-(arr_9 [i_0]));
                            arr_28 [i_0] [i_5] [i_6] [18] [i_8] = ((-(arr_22 [i_0 + 1])));
                        }
                        arr_29 [i_0] [i_5] [i_5] [i_5] [i_5] = var_7;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_16 = (((((-(arr_12 [i_12] [i_11 - 1] [i_12] [i_11 + 2] [i_11])))) ? ((min((arr_12 [i_12] [i_11 + 2] [i_11] [i_11 - 1] [15]), (arr_12 [i_12] [i_11 - 1] [i_11] [i_11 - 1] [i_11])))) : (((arr_12 [i_12] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11]) ? var_2 : (arr_12 [i_12] [i_11 - 1] [i_11] [i_11 + 3] [i_12])))));
                            var_17 = 8258273704280094967;
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    arr_44 [i_9] [i_10] [i_13] = (((((arr_25 [i_9] [i_9] [i_13] [i_13]) ? (arr_4 [i_13]) : (arr_31 [i_9]))) - (((arr_41 [i_9] [i_9] [i_10] [i_10]) ? 3 : (arr_41 [i_9] [i_10] [i_10] [i_13])))));
                    var_18 = ((-(min(((var_7 << (2373747840 - 2373747819))), (arr_20 [i_9] [i_10] [i_13])))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_19 = (-(arr_14 [i_15] [i_14] [i_15 + 1] [i_14] [i_15 - 1]));
                                arr_50 [i_14] [i_14] [i_14] [i_13] [5] [i_14] = (((((var_7 ? var_9 : (arr_47 [i_14] [i_15 + 1])))) ? (min((max(var_5, 5338600653554208396)), (arr_38 [i_13] [i_10]))) : ((((!(((0 ? var_3 : var_2)))))))));
                                var_20 = ((((min((arr_39 [i_15] [i_14] [i_15]), var_1))) ? var_7 : ((((arr_30 [i_15 - 1]) ? (arr_30 [i_15 + 1]) : (arr_39 [i_13] [i_14] [i_15]))))));
                                arr_51 [i_14] [i_14] [i_13] [i_13] [i_10] [1] [i_14] = ((-var_2 % (((arr_24 [i_15 + 1] [i_15 - 1]) ? (arr_24 [i_15] [i_15 - 1]) : (arr_24 [i_15 - 1] [i_15 - 1])))));
                            }
                        }
                    }
                }
                arr_52 [i_10] = (arr_2 [10] [10]);

                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    var_21 = (arr_6 [i_16]);
                    arr_55 [i_9] = ((((arr_54 [i_16 + 2] [i_16 + 1]) ^ (arr_26 [i_10] [i_16] [i_16 - 2] [i_16 - 2] [i_16]))));
                    var_22 += (!(1 < 1));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((!((min((arr_23 [i_16 + 2] [i_17] [i_16]), (arr_37 [i_16 - 2] [i_10] [i_9])))))))));
                                var_24 = (max(var_24, (((!(((arr_5 [i_16 - 1] [i_16 + 2] [i_16 - 2]) < (arr_5 [i_16 + 2] [i_16 + 1] [i_16 - 2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_9;
    var_26 = var_7;
    #pragma endscop
}
