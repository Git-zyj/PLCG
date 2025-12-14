/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_5;

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [10] = (((var_3 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 2]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 -= (min(0, (((arr_12 [i_0] [12] [i_2] [i_4]) >> ((((~(arr_12 [i_0 - 2] [i_1] [1] [i_4]))) + 25))))));
                                var_19 = 1984;
                                var_20 *= ((((min(-14355, ((var_8 ? (arr_10 [7] [i_2] [i_0 + 3] [i_0 + 3]) : var_10))))) ? ((var_6 & (((((arr_1 [i_0 - 1]) + 2147483647)) >> (796543643 - 796543620))))) : (arr_1 [i_0])));
                                var_21 ^= 11782;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 ^= (max(65535, 3028465996321846119));
                        arr_16 [i_0] [i_0] = -var_13;
                    }
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] [i_6] = var_14;
        var_23 = ((~((+(((arr_15 [i_6] [i_6] [i_6 + 2] [i_6]) ? 132 : var_10))))));
        arr_20 [i_6] = (arr_0 [i_6 - 1]);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                {
                    var_24 *= -105;
                    arr_25 [11] [i_6] [i_8] = (arr_13 [i_6 - 1] [i_7] [i_8]);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 18;i_11 += 1)
            {
                {
                    arr_35 [i_11 - 3] [i_10] [i_10] [i_9] = var_3;
                    var_25 *= (((var_8 == (((var_5 + 2147483647) << (2 - 2))))));
                }
            }
        }
        var_26 = ((-(((arr_30 [15] [1] [i_9]) ? ((max(-67, var_5))) : 39250))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_43 [i_13] [5] [9] [1] = (((((var_8 ? (arr_31 [i_13] [i_13] [i_13] [i_13 - 1]) : var_11))) || var_16));

                        for (int i_15 = 3; i_15 < 19;i_15 += 1)
                        {
                            var_27 = (min((arr_36 [i_12] [i_12]), (arr_26 [4] [4])));
                            arr_46 [i_15] [i_13] [i_13 + 2] [i_12] [i_13] [i_9] = ((!(((-2305843009213693952 ? ((-(arr_40 [16] [i_12] [i_14]))) : ((var_7 << (-111 + 112))))))));
                        }
                        for (int i_16 = 1; i_16 < 19;i_16 += 1)
                        {
                            var_28 -= ((-1 * ((min((arr_33 [i_9] [18] [5] [i_9]), (arr_33 [i_9] [i_12] [i_9] [16]))))));
                            arr_50 [i_9] [i_9] [i_13] [i_13] [i_16 + 1] [i_9] = (i_13 % 2 == zero) ? (((-((((((((arr_36 [i_9] [i_9]) + 2147483647)) << (((arr_29 [i_13] [17] [i_13]) - 166))))) ? (arr_38 [i_16 - 1] [i_14]) : var_3))))) : (((-((((((((arr_36 [i_9] [i_9]) + 2147483647)) << (((((((arr_29 [i_13] [17] [i_13]) - 166)) + 62)) - 7))))) ? (arr_38 [i_16 - 1] [i_14]) : var_3)))));
                            var_29 = max((arr_29 [i_13] [i_13] [i_12]), -var_10);
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_54 [i_17] [i_12] [i_13] [i_12] [i_9] = (((arr_52 [i_9] [i_9] [i_13] [i_12] [15] [i_13]) ? ((((arr_34 [i_13] [i_12] [i_12]) && (arr_49 [17] [i_12] [i_12] [i_12] [i_14] [i_12])))) : (var_14 != var_9)));
                            arr_55 [6] [6] [i_13] [i_14] [4] [i_14] = (arr_52 [i_17] [i_17] [i_13] [i_17] [i_17] [i_17]);
                            arr_56 [i_17] [i_9] [i_13] [i_13] [i_13] [i_12] [i_9] = var_1;
                            var_30 = ((var_8 - (!-19)));
                        }
                        arr_57 [i_9] [i_13] [i_13 + 2] = (max((min(1753, -56964980)), (arr_40 [i_9] [i_12] [i_13 - 1])));
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
    {
        var_31 -= var_8;
        var_32 = ((((((arr_59 [i_18]) && 46))) << (var_10 - 17207)));
    }
    #pragma endscop
}
