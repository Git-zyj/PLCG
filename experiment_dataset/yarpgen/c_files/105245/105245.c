/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 -= ((-(((arr_2 [i_2] [i_0 - 1]) ? (arr_2 [i_2] [i_0 - 1]) : (arr_2 [i_4] [i_0 - 1])))));
                                var_21 += ((~((~(arr_6 [i_0] [i_0 - 1] [i_2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 -= var_5;
                                arr_18 [i_0] [i_5] [i_2] [i_5] [i_0 - 1] = ((((!((min(-2147483643, (arr_17 [i_0] [i_1] [i_2] [i_0])))))) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_5]) : (((arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_2] [15] [i_0 - 1] [i_6]) ? var_4 : ((min((arr_1 [16]), var_12)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((var_12 / -var_0) ? (((max((arr_31 [i_7] [i_7] [i_9] [i_10] [i_7]), (arr_30 [i_10] [i_8] [i_9] [i_10] [i_10] [i_10]))))) : (max(((-(arr_29 [i_7] [i_8] [i_9] [i_10] [0]))), (arr_25 [i_7] [1]))))))));
                                arr_32 [i_7] [i_7] [i_10] [i_10] [14] [i_7] = (((((max((arr_20 [i_11]), 0))) ? (!18446744073709551615) : (arr_30 [i_11] [i_11] [i_9] [i_10] [i_9] [i_10]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_24 = ((((((-(arr_35 [i_7] [i_8] [i_13 - 1]))))) ? ((((((arr_36 [i_7] [i_7] [i_7] [i_7] [i_8]) ? (arr_23 [i_7] [i_7] [i_9]) : var_9))) ? (((arr_23 [i_8] [i_9] [i_12]) >> (var_3 - 137944378))) : ((~(arr_31 [1] [1] [i_9] [i_12] [i_13]))))) : ((max((arr_30 [i_13 - 3] [i_8] [i_13 - 3] [i_12] [i_13] [i_9]), (arr_30 [i_13 - 2] [i_8] [i_9] [i_12] [i_13 - 2] [i_13]))))));
                                var_25 = (arr_19 [i_7] [i_7]);
                                var_26 = ((max(var_9, 18771)));
                                var_27 = (arr_21 [i_13 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_28 = (arr_21 [i_16 - 1]);
                            arr_49 [i_16] = ((((((arr_21 [i_16 - 1]) ? (arr_36 [i_14] [i_15] [i_16] [i_15] [i_17]) : (max((-2147483647 - 1), (arr_43 [i_16] [i_17] [i_16])))))) * (arr_40 [i_14])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        {
                            var_29 = (max((((-(arr_28 [i_14] [i_15] [i_18] [i_19] [i_14])))), (((arr_45 [i_14] [i_15] [i_18]) ? (!var_18) : (max((arr_53 [i_14] [i_14] [i_18] [i_14] [i_14]), (arr_35 [i_14] [i_15] [i_19])))))));
                            arr_55 [i_18] [i_15] [i_15] [i_19] = ((!(((-(arr_13 [i_18] [i_15] [4] [i_18]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        {
                            var_30 &= (arr_62 [i_21]);
                            var_31 = (((((-(((arr_45 [i_14] [8] [i_21]) ? (arr_3 [1] [i_15]) : (arr_53 [i_15] [i_15] [i_15] [i_21] [i_20])))))) ? (((-(arr_6 [i_15] [i_15] [i_15])))) : (arr_34 [i_20] [i_15] [i_20] [i_14])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 17;i_24 += 1)
                        {
                            {
                                var_32 = (((((-(((arr_44 [i_14] [i_15] [0]) ? 2147483647 : 9954))))) ? var_0 : (arr_60 [i_23] [i_15] [i_22] [i_24])));
                                var_33 ^= (max(((~(9223372036854775807 ^ var_15))), (arr_3 [i_14] [i_23])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
