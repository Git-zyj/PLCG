/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_10 = (((((!(arr_0 [i_0 + 1])))) == (arr_0 [i_0 + 1])));
        var_11 = (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_12 ^= 6144;
        var_13 = ((!((!(arr_3 [i_1])))));

        for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_14 += (arr_6 [i_2]);
            var_15 = (max(var_15, (arr_5 [i_1] [i_1] [i_2])));
            var_16 *= ((-(arr_4 [i_1 + 1] [i_2 - 3] [i_2 - 2])));
            var_17 = (arr_1 [i_2 + 1]);
            var_18 = (arr_4 [i_1] [i_2 - 1] [i_2 - 3]);
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_19 *= ((-((~(arr_8 [i_3 - 3] [i_3 - 3])))));
            var_20 = (arr_2 [i_1]);
            var_21 ^= arr_9 [i_3] [i_1];
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1 + 1] [i_3] [i_4] [i_5 + 1] [i_5] [i_6 - 1] = (arr_10 [i_1]);
                            var_22 ^= (~6783079079403293105);
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_23 += (arr_17 [22] [i_7] [i_7 + 1] [i_9] [i_7 + 1] [i_9] [i_1]);
                        arr_30 [i_7] [i_7] [i_7] = (arr_29 [i_1] [i_7 + 1] [i_7 + 1] [18] [i_9]);
                        var_24 = (min(var_24, (arr_29 [i_1 + 1] [i_7 - 1] [i_9] [i_9] [i_9])));
                        arr_31 [i_7] = 676303823;
                    }
                }
            }
            var_25 *= (arr_2 [i_1]);
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_26 = arr_26 [i_10] [i_10] [i_10] [i_10] [i_10];
        var_27 |= (arr_6 [1]);

        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            var_28 = (max(var_28, (~-64)));
            arr_36 [i_11] [i_11] = (!6783079079403293110);
        }
        var_29 = (arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    var_30 = var_6;

    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        var_31 = (((arr_19 [i_12 - 1] [i_12 + 1] [i_12] [i_12 + 1] [18] [i_12 + 1]) == -6783079079403293105));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                {
                    arr_44 [i_12] = (((((arr_43 [i_12] [i_12] [i_12]) + 2147483647)) << (((!(((arr_9 [i_13] [i_14 + 1]) != -47)))))));

                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        arr_47 [i_12 - 1] [11] [i_12] [i_12 + 1] [i_12] = (((arr_27 [5] [i_14 - 2] [i_12 - 1] [i_12 - 1]) / (arr_29 [7] [i_13] [i_13] [i_13] [i_13])));
                        var_32 = (arr_33 [i_12 - 1] [i_15]);
                        var_33 = (arr_42 [i_12 + 1] [i_13] [i_14]);
                        arr_48 [5] [i_12] = ((~(arr_24 [i_14 - 1] [i_15 + 1] [i_15] [22])));
                    }
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            var_34 *= (arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 1] [i_12]);
                            var_35 = (arr_26 [i_12] [i_13] [i_14 + 1] [i_14 - 2] [17]);
                            var_36 ^= 1;
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            arr_58 [i_12] [i_13] [i_12] [i_16] [i_12] = 64;
                            var_37 = (max(var_37, (arr_43 [i_13] [i_16] [i_16])));
                            var_38 += (arr_23 [i_16]);
                            arr_59 [i_18] [i_18] [i_12] [i_14 - 1] [i_12] [i_12] [i_12] = (arr_32 [i_14]);
                        }
                        var_39 += arr_3 [i_16];
                    }
                }
            }
        }
    }
    #pragma endscop
}
