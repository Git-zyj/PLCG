/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 3] = (((((2 ? (arr_4 [i_0 - 1] [i_0 - 3]) : (arr_4 [i_0 - 3] [i_0 + 2])))) ? (((arr_4 [i_0 - 1] [i_0 - 1]) * (arr_4 [i_0 + 1] [i_0 - 2]))) : (((arr_4 [i_0 - 1] [i_0 - 2]) / (arr_4 [i_0 - 2] [i_0 - 2])))));
                var_11 = (max((((arr_0 [i_1] [i_0]) ^ (arr_0 [i_0 - 3] [i_1]))), ((((arr_3 [i_0] [i_1] [i_1]) || ((min((arr_0 [i_0] [i_0]), (arr_0 [i_1] [i_0 - 2])))))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 = (arr_0 [i_0] [11]);
                    arr_8 [i_2] [i_0] [i_2] = (((((arr_2 [i_0] [5] [i_0]) << (((((arr_7 [i_2] [i_1] [i_0]) << var_1)) - 52336)))) ^ 0));
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    var_13 = (((((!(-22295 < 1)))) + ((-318397793 + (((arr_9 [1]) ? (arr_9 [i_3]) : 318397779))))));
                    var_14 *= (arr_9 [i_1]);
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [i_1] [i_0] = ((14064868202303020799 ? ((((((((arr_12 [i_0] [i_0] [i_0] [i_0]) <= (arr_11 [i_4] [1] [i_1]))))) >= (arr_0 [i_1] [i_0 - 2])))) : (arr_1 [i_4])));
                    arr_15 [i_0] |= (((((arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 3]) - (arr_9 [i_0 - 3]))) + ((-(arr_11 [i_0 - 2] [i_0] [i_0 - 3])))));
                    var_15 = ((~(min((((arr_11 [i_0] [i_1] [i_4]) & var_1)), 6))));
                    var_16 ^= var_10;
                }
            }
        }
    }
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        arr_28 [0] [0] [i_7] [12] [0] [i_5] &= (((arr_11 [i_5] [i_6 - 1] [i_7]) * (((arr_25 [i_8] [10] [10] [10]) / var_8))));
                        var_18 = var_1;
                        arr_29 [2] [2] [10] [i_8] &= (((arr_7 [i_8] [i_6] [i_6]) ? ((~(arr_9 [i_6 - 2]))) : (((!(arr_3 [i_5] [6] [6]))))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_19 *= ((var_1 | ((((-1 + 1) == (arr_24 [1] [i_6] [i_6 - 1] [i_9]))))));
                        var_20 = (((((arr_1 [i_5]) & (((arr_10 [i_9] [i_7] [i_5]) - 25562)))) + 1));
                        var_21 ^= var_3;
                    }
                    arr_32 [i_7] [i_5] [i_5] [i_5] = -318397780;
                    arr_33 [i_5] [i_6] [i_5] [i_7] = (3028893610 == -6);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_22 -= ((((-((min(-78, 1))))) <= ((-(~var_6)))));
                                arr_39 [i_11] [i_5] [i_7] [i_5] [i_5] = ((((((var_10 ? (arr_16 [i_10]) : (arr_26 [i_10] [i_6] [i_5] [i_10])))) + -2904245332584589387)) + 2140196425);
                            }
                        }
                    }
                    var_23 = (((var_8 + 2147483647) >> (((max((arr_35 [i_6 + 1]), (arr_21 [i_5] [i_5] [i_5] [i_5]))) - 18446744073709551566))));
                }
            }
        }
    }
    #pragma endscop
}
