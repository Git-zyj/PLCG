/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [1] &= (~var_10);
                    arr_9 [i_0] [1] [i_2] [13] = ((-((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, -var_7));
                                var_12 = (((-((var_4 * (arr_13 [13] [5] [5] [5] [21] [4] [i_0]))))));
                                var_13 ^= var_3;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_5] = (!((max((min(var_0, var_8)), (arr_2 [i_0] [i_0])))));
                                arr_28 [i_0] = (((var_1 ? var_9 : (arr_10 [i_7 - 1] [i_0] [i_7 - 1] [i_7 + 1] [i_7 + 1]))));
                                arr_29 [i_0] [i_0] [i_5] [i_5] [22] = var_0;
                                var_14 = ((~((1 ? var_3 : var_6))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_15 -= 1;
                        var_16 = (arr_23 [i_5] [i_5] [14] [i_5] [8] [21]);
                    }
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {

                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        var_17 = (max(var_17, ((((arr_7 [i_10 + 4] [i_9] [i_1] [i_0]) ? (arr_7 [6] [6] [15] [i_10 - 2]) : var_5)))));
                        var_18 = -1;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_19 = (max(var_19, ((((arr_32 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9] [9] [i_9 + 1]) ? (arr_32 [i_9 - 2] [12] [i_9 - 3] [i_9] [12] [i_9 - 2]) : (arr_10 [i_9] [8] [6] [8] [i_9 - 2]))))));
                        var_20 = ((-((((arr_32 [i_0] [i_0] [17] [i_0] [i_0] [i_0]) > var_3)))));
                        var_21 = (min(var_21, ((((arr_34 [i_0] [i_1] [i_9]) == (arr_12 [10] [i_9 + 1] [2] [i_9] [14] [i_9 - 2]))))));
                    }
                    arr_39 [i_0] [i_1] [i_0] = ((~((var_5 ? (arr_11 [i_0] [i_1] [22] [19]) : (arr_4 [i_0] [11])))));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((((-(min((arr_24 [7] [8] [i_1] [i_0] [2] [i_0] [i_0]), var_9))))) ? ((((((((arr_42 [11] [i_1] [11] [18] [17]) >= var_8))) >= (~var_2))))) : (((arr_19 [16] [i_1] [i_12] [i_13]) ? (arr_19 [2] [i_1] [i_12] [i_13]) : (arr_19 [10] [i_1] [i_1] [i_1]))))))));
                            arr_44 [11] [11] [i_0] [i_13] = (min((((-9223372036854775807 - 1) ? (arr_21 [i_0] [22] [i_12] [1] [i_0] [i_13]) : (arr_24 [i_0] [i_0] [13] [i_0] [i_0] [17] [i_0]))), ((max(((min((arr_22 [i_13] [i_0] [i_0] [i_0]), -64))), var_0)))));
                            var_23 = (min(var_23, (((((max(var_9, (arr_40 [12] [22] [i_1] [12])))) ? (((arr_25 [i_0] [2] [22] [i_13]) ? var_0 : (arr_40 [2] [i_12] [i_1] [2]))) : (arr_40 [20] [0] [i_1] [20]))))));
                            var_24 = min((((0 & (arr_2 [i_0] [i_0])))), (1 - var_2));
                        }
                    }
                }
                var_25 ^= ((+((60 ? (arr_25 [20] [6] [i_0] [20]) : (arr_25 [i_1] [14] [14] [18])))));
            }
        }
    }

    for (int i_14 = 1; i_14 < 18;i_14 += 1)
    {
        arr_48 [i_14 - 1] [i_14] = (min(((max(var_3, (arr_35 [i_14] [i_14 + 3] [i_14] [5] [i_14 + 2] [i_14])))), ((var_5 ? var_10 : (arr_35 [i_14] [19] [i_14] [i_14] [i_14 + 3] [13])))));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                {
                    arr_55 [i_15] = ((-((~(arr_18 [i_14] [0])))));
                    /* LoopNest 2 */
                    for (int i_17 = 3; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 3; i_18 < 21;i_18 += 1)
                        {
                            {
                                var_26 = (min((arr_30 [i_15] [i_15] [2] [i_15] [1]), (((~(arr_31 [i_14 + 2]))))));
                                var_27 = (min(var_27, (((-(((!((((arr_19 [18] [i_18] [18] [i_18 - 2]) ? (arr_61 [2] [4] [i_16] [i_16] [2]) : var_1)))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
