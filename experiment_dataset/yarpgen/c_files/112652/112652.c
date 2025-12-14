/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (max(var_12, 3361866));
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) >= (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [1] [2] [i_1] = 0;
            arr_7 [i_0] [i_0] |= (((((arr_1 [i_1] [i_0]) ? -98 : var_8)) ^ var_7));
            arr_8 [i_1] [i_1] = -105;
            var_13 *= ((((((var_0 || (arr_5 [i_0] [i_0] [i_0]))))) < ((var_1 ? (arr_5 [i_0] [i_0] [10]) : 1))));
            arr_9 [i_1] = (arr_5 [i_1] [i_0] [i_0]);
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_13 [16] [i_0] [i_0] = var_5;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] |= ((-32767 || (arr_10 [i_0])));
                            arr_23 [i_4] [i_4] [i_3] [i_3] [i_3] [i_3] = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_24 [i_4] = -11714;
                        }
                    }
                }
            }
            arr_25 [i_2] [i_0] = -11714;
        }

        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_14 += (((-36 % (arr_12 [i_0]))));

            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                arr_31 [i_7] [i_0] [i_0] = ((!(((var_1 ? (arr_21 [i_7] [i_7] [0] [i_7] [i_7] [i_7] [i_7 + 1]) : var_8)))));
                arr_32 [10] = (((arr_1 [i_7 - 1] [i_7 - 1]) ? ((var_8 >> (((arr_28 [i_7]) - 3803871381)))) : (99 && var_0)));
                arr_33 [i_0] [i_0] = var_10;
            }
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
        {
            arr_37 [i_8] [i_8] = ((arr_21 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 - 1]) && var_1);
            var_15 = (var_2 - var_3);
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_40 [i_9] [i_9] = (((arr_27 [i_9]) > var_8));
        arr_41 [i_9] = (((36 | 158111424) ? (14899 > var_5) : (arr_15 [i_9])));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            {

                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            {
                                var_16 ^= (((-((var_9 ? (arr_48 [i_10] [12]) : var_2)))));
                                arr_56 [i_10] = ((((((max((arr_18 [10] [i_12] [i_11] [i_10]), 14939))) ? (((((arr_26 [i_10]) + 9223372036854775807)) >> (arr_49 [i_10] [i_10] [i_10] [i_10]))) : 32748)) >= ((((18446744073709551615 == -36) >> (1 || 26))))));
                            }
                        }
                    }
                    var_17 = (((~var_5) | (arr_54 [i_10] [i_10] [i_10] [i_10] [i_10])));

                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            var_18 *= ((+((((((((arr_59 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) + 2147483647)) >> (var_8 - 8561814077341800856)))) / var_4))));
                            arr_62 [i_10] [7] [i_12] = -2512772678347057147;
                        }
                        arr_63 [i_10] = (7524885221758386695 || 43730);
                    }
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        var_19 = ((!((!(~68)))));
                        arr_66 [i_10] [i_12 - 1] [i_11] [i_10] = ((!(max((arr_21 [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1]), (arr_21 [i_12 + 1] [10] [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1])))));
                        arr_67 [i_10] [i_10] [i_10] [i_10] [i_10] = (max(((((((((-127 - 1) + 2147483647)) >> (41093393 - 41093384))) ^ 11722))), (((arr_17 [i_10]) >> (3675585567 - 3675585556)))));
                    }
                }
                var_20 *= 11888;
            }
        }
    }
    #pragma endscop
}
