/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_7 ? var_9 : ((-1 * ((var_1 ? -12981 : var_3))))));
    var_12 ^= (1 && var_10);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (((arr_1 [1] [i_0 - 1]) * ((1 ? (arr_1 [i_0] [i_0]) : -12970))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 |= ((((!(arr_1 [i_0 - 1] [i_0 - 1]))) ? ((((arr_6 [i_0]) ? -91 : 2855013506))) : (arr_2 [i_1] [i_1])));
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((!(arr_5 [i_1] [i_2 + 2])));
                    var_14 *= -var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 *= (arr_17 [i_4] [i_0 - 1] [i_2 + 3] [i_3 + 1] [i_4] [6] [i_4]);
                                arr_18 [i_1] [i_1] [i_0 + 2] [i_1] [i_4] = ((((((arr_0 [i_2]) * (arr_17 [i_0] [i_0] [i_2 + 1] [i_3] [i_3] [i_4] [i_4 - 1])))) ? (arr_16 [i_0] [i_4] [i_3] [13] [i_2 + 3] [i_1] [i_0]) : ((var_5 ? (arr_14 [9] [i_2 - 1] [i_1] [i_1]) : var_5))));
                                var_16 = (max(var_16, (arr_16 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] [i_3])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                var_17 *= (~255);

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_25 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7] = var_2;
                    arr_26 [20] [20] [i_6] [i_7] = ((~(((arr_12 [i_0 - 1] [i_7] [i_0 - 1] [i_0 - 1] [i_0]) ? var_7 : (arr_19 [i_0])))));
                    var_18 ^= 1;
                    var_19 ^= ((1 ? (((arr_19 [i_0 - 1]) ? 34 : var_7)) : (1125899906842624 / 1)));
                }
            }
            var_20 ^= (arr_20 [i_0]);
            var_21 ^= ((var_2 | (arr_13 [i_0] [22] [i_0] [i_0])));
            arr_27 [i_0] = (-1125899906842624 && var_9);
            arr_28 [i_5] [i_5] [i_0 + 2] = (arr_11 [i_5 + 1] [i_5 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
        }
        arr_29 [i_0 - 1] [i_0 - 1] = (((((~(arr_7 [i_0] [i_0] [8])))) ? 1 : var_7));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_22 = (max((((4049664293 ? 65535 : 2266996139))), ((((36 ? (arr_14 [i_8] [i_8] [2] [i_8]) : (arr_24 [i_8] [i_8]))) & ((((arr_2 [i_8] [i_8]) ? var_10 : var_5)))))));

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_23 = (max(var_23, (((!var_1) < ((((((arr_30 [i_8]) ? var_3 : var_2)) > (var_1 >= var_5))))))));
            var_24 *= -27684;
            arr_34 [i_9] [i_9] [i_8] = var_7;
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_25 ^= (-12981 > -12981);
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        var_26 = (min(var_26, var_9));
                        var_27 = (arr_43 [i_10] [4] [i_10] [i_13]);
                        var_28 = (max(var_28, (((((((arr_8 [16] [i_11] [i_12] [i_13]) ? 2266996145 : (arr_41 [i_10] [4] [i_10])))) + (((arr_44 [i_10] [i_13] [i_13] [i_13]) ^ var_7)))))));

                        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_29 = ((~(arr_9 [i_10] [i_11 + 1] [i_11] [i_11 + 1])));
                            arr_47 [i_14] [i_10] [i_10] [i_12] [i_10] [i_10] [i_10] = arr_15 [i_10] [24] [i_12] [i_13] [24] [24] [i_11];
                        }
                        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            var_30 *= (((arr_39 [i_11 + 1] [i_12] [9]) / var_2));
                            arr_51 [19] [i_10] [i_12] = (((((arr_14 [i_10] [i_10] [i_10] [i_10]) ? (arr_6 [i_10]) : (-127 - 1))) * (arr_48 [i_10] [i_15] [i_12] [i_11 + 1])));
                            var_31 += (((1 & 95) ? -4 : (((arr_46 [i_10] [i_10]) ? (arr_42 [i_12]) : 1125899906842630))));
                        }
                        var_32 = arr_6 [i_11 + 1];
                    }
                }
            }
        }
        var_33 = (((arr_50 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) + var_1));
    }
    var_34 = (!var_3);
    var_35 = (max(var_35, var_4));
    #pragma endscop
}
