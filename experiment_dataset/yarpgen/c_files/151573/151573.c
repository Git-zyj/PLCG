/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [16] [i_4] [12] = ((((min((max(9223372036854775808, 9223372036854775808)), (((arr_0 [i_0] [i_0]) ? var_2 : var_12))))) ? (((arr_11 [19] [i_3] [i_3 - 2] [15] [i_3 - 2]) ? (arr_10 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1]) : (arr_10 [i_3] [i_3 + 1] [i_3 + 2] [i_3] [i_3 - 1]))) : ((((arr_2 [i_4 - 3]) != (arr_1 [i_2 + 2] [i_3 - 1]))))));
                                var_14 = (((((arr_4 [i_4 + 1] [i_3 - 1] [i_2 + 1]) ? (arr_4 [i_4 - 2] [i_3 - 2] [i_2 - 1]) : var_0)) - (((arr_4 [i_4 - 1] [i_3 + 2] [i_2 + 2]) ? var_13 : (arr_4 [i_4 + 1] [i_3 - 1] [i_2 + 1])))));
                                var_15 ^= 40000;
                                var_16 = var_6;
                            }
                        }
                    }
                    var_17 -= ((-var_6 ? ((((((min(var_12, (arr_9 [i_0] [i_1] [11] [i_2 + 1])))) + 2147483647)) << (((arr_7 [i_2 + 1]) - 12)))) : (~var_1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            {
                var_18 = (max(var_18, (arr_13 [i_5 + 1])));

                for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
                {
                    arr_23 [9] [9] [i_7 + 2] [i_7] = ((((min((arr_9 [i_5 + 1] [13] [7] [i_7]), (min((arr_17 [i_6]), (arr_6 [16])))))) && ((((arr_7 [i_6 + 1]) ? (arr_7 [i_6 - 1]) : (arr_7 [i_6 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((min((arr_25 [i_5] [i_8] [i_7] [i_7 + 3] [6] [i_9]), (arr_11 [i_6] [i_6 + 1] [i_6] [i_8] [i_9]))) % 12111171003349836300)))));
                                arr_28 [i_9] [i_8] [i_8] [i_8] [i_5 - 1] &= (max(var_11, ((~(((!(arr_6 [i_7 + 1]))))))));
                            }
                        }
                    }
                    var_20 = ((((min(var_0, (arr_22 [i_5] [i_7 - 2] [i_6 + 1] [i_5 + 1])))) ? (((arr_22 [i_5] [i_7 + 2] [i_6 - 1] [i_5 - 1]) | (arr_22 [i_5] [i_7 - 3] [i_6 - 1] [i_5 + 1]))) : ((max((arr_22 [i_5] [i_7 + 3] [i_6 + 1] [i_5 + 1]), (arr_22 [1] [i_7 + 3] [i_6 + 1] [i_5 + 1]))))));
                }
                for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_21 = (!var_2);
                    arr_31 [i_5] [i_6] [i_10] = (((((((min(var_13, (arr_19 [i_5] [i_6] [i_10])))) ? ((var_8 ? (arr_18 [i_10 + 3] [i_6 + 1] [i_5 + 1]) : 15470995072063726160)) : var_12))) ? ((-(2975749001645825476 <= var_0))) : (((!(15470995072063726161 == 9223372036854775798))))));
                    arr_32 [i_10] [i_10] = var_13;
                }
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    arr_35 [i_11 - 2] [i_5] [i_5] = min((min((min((arr_3 [7] [i_6]), (arr_20 [i_5] [i_11]))), var_11)), (((!(arr_17 [i_5])))));
                    arr_36 [0] [0] [i_11] = (!10597);
                    var_22 += 8160;
                    arr_37 [i_11] [i_5] [i_5] = ((+(((max((arr_24 [i_5] [0] [i_11 - 2]), var_12))))));
                    var_23 = (min(var_23, (((((((arr_20 [i_5 + 1] [i_6 - 1]) - (arr_20 [i_5 - 1] [i_6 + 1])))) ? ((40000 ? ((20 ? (arr_29 [i_5] [i_5]) : var_13)) : (arr_13 [i_5]))) : (10603 - 54933))))));
                }
                var_24 = ((2975749001645825460 ? 10603 : 95));
            }
        }
    }
    var_25 ^= (var_1 - (((var_6 - 0) - var_2)));
    #pragma endscop
}
