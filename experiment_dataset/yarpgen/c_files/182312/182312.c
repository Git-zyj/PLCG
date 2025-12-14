/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = max(var_16, ((var_13 <= (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] [i_0] = (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        var_17 = max(((((((arr_0 [i_0] [i_0]) ^ var_10))) & (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))))), ((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = var_14;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_18 = (max(var_18, (arr_0 [i_1] [i_0])));
            arr_9 [9] [9] [i_0] = var_16;
            var_19 = (max(var_19, (((arr_6 [i_0]) != var_2))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_3] [i_1] &= (((((arr_2 [i_0] [i_1]) % (arr_8 [4] [i_4] [i_4]))) >> (arr_20 [i_0])));
                            var_20 = (((((var_4 << (var_9 - 60983)))) ? ((var_0 ? (arr_10 [i_1] [i_1] [i_3] [i_4]) : (arr_11 [i_4]))) : (var_16 & var_6)));
                            var_21 = (((-32767 - 1) ? 11 : (18446744073709551615 < 2147483647)));
                        }
                    }
                }
                var_22 += (((arr_10 [0] [i_1] [i_1 - 1] [i_1 - 2]) & (arr_10 [i_0] [i_0] [i_1] [i_2])));

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_23 = var_11;

                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        var_24 += ((var_13 ^ ((var_9 ? (arr_10 [i_0] [i_1] [5] [i_6]) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_26 [i_0] [i_0] [i_5] [i_5] [i_6 + 1] = (arr_20 [i_0]);
                    }
                }
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    arr_29 [i_0] [i_1] [i_2] [i_7 - 2] = ((((((var_6 < (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) / var_11));
                    var_25 = (max(var_25, (arr_16 [7] [2] [i_2])));

                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_26 -= (((arr_32 [1] [i_1 - 1] [i_1] [i_1 - 2] [i_1]) & var_10));
                        arr_33 [i_0] [i_0] [i_0] [i_7 - 2] [i_8] = ((var_7 >= (((arr_8 [i_0] [i_1] [i_1]) ? var_16 : (arr_12 [i_0] [i_1] [i_2] [i_1])))));
                    }
                }
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_27 = (((((arr_13 [i_0] [i_0] [i_0]) <= (arr_35 [i_0] [i_1 - 2] [i_9]))) ? (arr_30 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : var_2));
                var_28 = (arr_36 [i_1 + 1] [i_9] [2] [i_9]);
                arr_38 [i_0] [i_1] [i_9] = var_12;
            }
            var_29 = (((((arr_0 [i_0] [i_1]) + 2147483647)) >> ((((var_7 ^ (arr_0 [i_1 + 2] [i_0]))) + 1886471780))));
        }
    }
    var_30 = ((((min(var_13, var_16))) & (min((var_11 ^ var_8), var_8))));
    var_31 = (((var_14 * var_16) ? ((((min(var_4, var_1))) ? (((max(var_12, var_12)))) : (var_8 * var_4))) : var_15));

    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_32 |= (((6 >= 1763574419643684778) > var_0));
        arr_41 [5] = ((((arr_40 [i_10]) & (arr_39 [i_10]))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                {
                    var_33 = (arr_45 [1] [4] [9]);
                    var_34 += (((((((var_13 + 2147483647) << (var_2 - 473))))) * (min(3, -29979))));
                    arr_47 [i_12] [i_10] [i_10] = ((((((arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) ? (arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1])))) ? (((arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) << (((arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) - 1976234366)))) : (((((arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1]) && (arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1])))))));
                    var_35 = (((max((arr_45 [i_11] [i_11] [i_11]), ((var_6 >> (((arr_44 [i_10] [i_10]) - 4935729916617346608)))))) < (min((arr_39 [i_12 - 1]), (((((arr_42 [i_10] [i_10]) + 2147483647)) << (var_6 - 225)))))));
                }
            }
        }
    }
    var_36 = ((var_13 >= (0 - 0)));
    #pragma endscop
}
