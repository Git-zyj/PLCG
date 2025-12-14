/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 >= ((((1 ? 2109778601 : 2109778602)) >> (1 > -2109778618)))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_12 = ((-var_1 + (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])));

                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    var_13 = ((var_6 ? (arr_1 [i_3 - 1]) : 2109778609));
                    arr_10 [i_0] [i_1] [i_2] = (arr_9 [i_1] [i_2] [i_1] [i_3] [17]);
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_14 &= (arr_3 [i_0] [i_0]);
                    arr_15 [i_0 - 4] [i_0 - 2] [i_0 - 4] [11] = (((!2003647625) ? (arr_1 [i_0]) : (var_7 == 58382)));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_15 -= 9223372036854775807;
                    arr_18 [i_5] [i_2] [i_1] [6] = ((-(arr_3 [i_0 - 3] [i_0 - 2])));
                }

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6] [i_7] = (((arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? (!1) : (((arr_16 [i_7] [i_2] [7] [i_0 - 1]) ? var_1 : 899166215))));
                        var_16 = (!1);
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_8] [i_8] [16] [i_2] [19] [i_0] = (((arr_2 [i_0] [i_0] [i_0 - 2]) ^ 1));
                        var_17 |= (((((22 ? var_1 : var_3))) ? (!1) : (arr_24 [i_0 - 1] [i_0 - 1] [19] [1] [13] [i_0 - 1] [1])));
                        var_18 = (arr_14 [i_1] [i_2] [i_1] [i_8]);
                        var_19 -= arr_3 [i_0] [i_0];
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] = (((arr_29 [i_0 - 2] [4] [i_2] [i_6]) ? (arr_20 [i_0 - 4] [i_0 + 1] [i_0] [i_0] [i_0]) : ((-(arr_0 [i_1])))));
                        var_20 = (((arr_21 [i_0] [i_1]) || (arr_19 [i_2] [i_6] [i_2] [i_1] [i_0])));
                        var_21 = -var_6;
                        var_22 = ((((~(arr_7 [i_9] [i_6] [i_0 - 1] [i_1] [i_0 - 1]))) | ((~(arr_17 [i_0 - 2] [i_0 - 2] [10] [i_0])))));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_23 = (-191522527 || var_6);
                        var_24 = (arr_6 [i_0] [i_0 + 1] [i_2]);
                        var_25 *= (((arr_8 [i_0] [i_1] [i_2] [i_6] [i_10]) - var_1));
                    }
                    arr_34 [i_0] [i_2] [i_2] [i_0] [i_0] = (arr_11 [i_0 - 2] [i_1] [i_0] [i_6]);
                }
            }
            arr_35 [i_0] [i_1] = ((-(arr_17 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 3])));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            var_26 = (!56261);

            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_27 = -8052162567726089816;
                            arr_46 [i_12] [i_13 + 1] [i_12] = (((((arr_45 [i_14] [i_11] [i_12] [i_11] [i_0 + 1]) | (arr_21 [i_11] [i_0 + 1])))) ? (((!(arr_12 [i_0 - 2])))) : (arr_38 [1]));
                            var_28 = ((-22 || (var_2 || 32768)));
                            var_29 ^= (((((arr_19 [i_0] [i_0] [i_13 - 1] [i_13 - 1] [i_0]) + 2147483647)) << (((arr_29 [i_0] [i_12 + 1] [i_13 + 1] [i_0 + 1]) - 38))));
                        }
                    }
                }
                var_30 = (((-328453412 / var_3) == (((arr_40 [i_12] [i_0] [i_11] [i_0]) ? (arr_1 [i_0 - 2]) : 4177920))));
                arr_47 [i_11] |= 1;
            }

            for (int i_15 = 1; i_15 < 22;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_31 = -var_3;
                            var_32 = (arr_0 [i_16]);
                            var_33 = var_8;
                        }
                    }
                }
                arr_57 [i_15] [i_11] [i_0 - 3] = (arr_19 [i_0] [i_11] [5] [i_15] [i_15 - 1]);
            }
        }
        var_34 = ((var_2 + (((max((arr_23 [i_0 - 3] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), var_5))))));
    }
    #pragma endscop
}
