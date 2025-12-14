/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((arr_1 [i_0 + 2]) ? (~7678922917871613416) : (((~(arr_2 [i_0] [i_0]))))));
        arr_4 [10] [10] = (((arr_2 [i_0 + 1] [i_0 - 3]) ? 1 : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((((!(arr_5 [i_1] [i_1 - 2]))))) ^ var_12));
        arr_9 [i_1] = -1;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_4] &= (((((~(arr_10 [i_3 - 1] [i_3] [i_2])))) ? (arr_10 [i_3 - 1] [i_2] [i_1]) : (((arr_10 [i_3 - 2] [i_2] [8]) ? (arr_10 [i_3 - 2] [i_3] [i_3]) : 1))));

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_19 [i_1 - 3] [i_2] [i_1 - 3] [2] [i_5 + 2] [i_1] = (max(-30662, (max((max(var_12, var_12)), ((((arr_6 [i_1]) <= var_1)))))));
                            arr_20 [4] [i_1] [i_3 - 2] [i_3 - 2] [i_5] = (((arr_18 [i_1 - 1] [i_4] [i_3 + 1]) + (arr_6 [i_1])));
                            arr_21 [i_5] [i_4] [i_4] [i_3] [i_4] [i_1] = (-30662 >= 6082);
                        }
                    }
                }
            }
            arr_22 [10] [i_2] [i_2] = max((((arr_7 [i_1 + 2] [i_1 - 2]) ? (arr_18 [i_1 + 2] [i_1 - 2] [i_1 + 1]) : var_10)), (arr_18 [i_1 - 1] [i_1 + 1] [i_1 - 3]));
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_34 [i_1] [i_1] [i_6] [i_7] [i_8] = (i_1 % 2 == zero) ? ((((min(1, (arr_33 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [15] [i_7]))) << (36820 - 36767)))) : ((((((min(1, (arr_33 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [15] [i_7]))) + 9223372036854775807)) << (((36820 - 36767) - 53)))));
                            arr_35 [i_2] [6] [i_7] [i_6] [i_8] [i_1] = 45049;
                            arr_36 [i_8] [i_7] [i_8] [i_2] [i_1] |= (((var_7 + ((var_8 ? 111 : var_11)))));
                            arr_37 [i_1] [i_2] [i_2] [i_1] [i_1] = (arr_13 [i_1] [i_2] [i_6] [i_7]);
                            arr_38 [i_1] [i_2] [i_2] [3] [1] [i_1] = (arr_2 [i_1 - 3] [i_2]);
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_43 [i_1] [i_1] = (min(((((arr_18 [i_1 - 2] [i_1 - 1] [i_1 - 2]) >> (((arr_32 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 2]) - 39714))))), (min((((31593 ? var_13 : (arr_40 [i_1] [i_9])))), (arr_23 [i_9] [i_9] [i_1] [i_1])))));
            arr_44 [i_9] [i_9] = (max((arr_15 [i_9] [i_9] [i_9] [i_1] [i_9] [i_1 + 1]), (((arr_41 [i_9] [i_1]) ? (-10340 / 1011768908120385684) : (((21330 ^ (arr_27 [i_1 - 3] [i_9] [i_9] [i_9]))))))));
            arr_45 [i_9] [16] = (((arr_33 [i_1 - 1] [i_9] [12] [i_9] [i_9] [i_9]) ? 30671 : (max((arr_15 [i_1 - 1] [i_9] [i_1 + 1] [i_1 + 1] [i_9] [i_1 - 1]), var_3))));
            arr_46 [i_1] [i_9] &= ((~(((arr_18 [i_1 + 2] [i_1 - 3] [i_1 - 2]) - (arr_15 [i_1] [i_9] [i_1] [i_9] [i_9] [i_9])))));
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_51 [i_1] [i_1] = (min(7722, -2064796325));
            arr_52 [12] = (((arr_31 [0] [0]) > ((-(arr_42 [i_1 - 1])))));
            arr_53 [i_1] [i_1] [i_10] = (arr_24 [i_1 + 1]);
        }
    }
    var_14 = ((-((min(var_4, -19531)))));
    #pragma endscop
}
