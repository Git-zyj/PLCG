/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(var_16, (((((~(arr_1 [16]))) == (((arr_1 [13]) ? (arr_1 [i_0]) : (arr_0 [i_0] [8]))))))));
        var_17 = (max(var_17, (((~(arr_0 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = ((-(arr_1 [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 ^= ((~(arr_1 [i_1])));
                        var_20 ^= ((-(arr_12 [i_0] [i_1] [i_1] [i_3])));
                    }
                }
            }
        }
        var_21 = ((!(arr_7 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (arr_4 [i_4]);
        arr_17 [i_4] [i_4] = (((arr_8 [16] [i_4] [i_4]) ? (arr_2 [i_4]) : (arr_13 [i_4])));

        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            arr_22 [i_4] = (arr_1 [i_5 - 4]);
            arr_23 [i_5 - 1] [i_5 - 2] [i_4] = (arr_18 [i_5 - 3] [0] [i_5 - 4]);
            arr_24 [i_4] [i_5 - 1] = ((-(arr_2 [i_5 + 1])));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (arr_8 [i_4] [i_4] [i_6])));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_37 [i_4] [i_8] [i_8] [i_4] [i_8] [4] = (((arr_7 [8] [i_8] [18]) ? (arr_29 [i_9] [i_7] [i_6] [i_4]) : (arr_0 [i_4] [i_6])));
                            arr_38 [i_8] [i_7] [1] [i_7] = (arr_3 [i_7]);
                        }
                    }
                }
            }
            var_23 = (((arr_9 [i_4] [i_6] [i_6]) % (((arr_29 [i_4] [i_4] [i_4] [i_4]) ? (arr_6 [i_6]) : (arr_32 [i_4] [i_4] [7] [i_4] [1] [i_4])))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_11] = (((arr_29 [i_4] [i_6] [i_4] [i_11]) + (arr_31 [i_6] [i_4] [i_10] [i_11])));
                        var_24 -= (arr_19 [i_11] [i_6]);
                        var_25 = (min(var_25, (((-(arr_11 [16] [i_11] [i_10] [8] [10] [1]))))));
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
        {
            arr_46 [6] [i_4] [i_4] = (((arr_40 [i_12] [i_12] [i_12] [i_12]) == (((arr_35 [4]) ? (arr_41 [i_12] [11] [1] [i_4] [0] [i_4]) : (arr_25 [i_12] [i_12] [i_12])))));
            var_26 *= (((~(arr_45 [i_12]))));
        }
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            arr_50 [i_4] [i_4] = (arr_41 [i_13] [i_13] [i_13] [i_4] [i_4] [i_4]);
            arr_51 [i_4] = ((-(arr_31 [11] [9] [i_4] [i_4])));
            var_27 |= (!((((arr_6 [i_4]) ? (arr_39 [i_13] [10] [i_4]) : (arr_18 [i_4] [i_4] [2])))));
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                {
                    var_28 = (((arr_49 [i_4] [i_14]) <= ((((arr_12 [i_4] [i_4] [i_14] [i_15]) ? (arr_10 [i_4] [6] [5] [i_14]) : (arr_41 [i_4] [3] [i_4] [i_4] [i_4] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_29 = (arr_11 [i_17] [i_17 - 2] [1] [i_17] [i_17] [i_17]);
                                var_30 = (((arr_7 [i_15 + 4] [i_14] [i_17 + 1]) ? (arr_18 [i_4] [i_14] [i_14]) : ((((arr_58 [i_15 + 3]) >= (arr_10 [i_4] [i_4] [i_15 + 2] [i_14]))))));
                                arr_62 [i_17] [i_15 + 2] [i_15 + 2] [i_14] [i_17 - 1] [3] = (arr_39 [i_14] [i_4] [i_16]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(((min(var_2, var_7))), (~-var_10)));
    #pragma endscop
}
