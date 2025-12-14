/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 - 1] |= var_16;
        arr_3 [i_0] = (min((min(2147483628, var_1)), ((var_10 ? var_6 : (max(var_5, var_10))))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min((((~(arr_4 [i_1] [i_1])))), (min(((-125 ? var_0 : 172)), (((-(arr_1 [i_1]))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] [i_1 - 1] = ((-(((((var_9 ? var_6 : var_9)) > (((var_5 ? 125 : var_16))))))));
                            var_17 -= ((0 / (max(((min(var_16, var_4))), ((1 ? 225 : 22))))));
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_18 = 3330065597464781392;
                            arr_23 [i_1] [i_2] [i_2] [i_4] = -47;
                            var_19 = (max(var_19, ((max(22, 1048574)))));
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] |= (((min(((-(arr_4 [i_4] [i_7]))), ((26 ? (arr_13 [i_1]) : 52))))) ? ((((min(var_15, var_0))) ? ((var_13 ? (arr_22 [i_1] [i_2]) : 2061814132)) : var_11)) : 15728640);
                            arr_28 [i_1] [i_4] [i_1] = max(((max(((max((arr_14 [i_4] [i_2] [i_4]), -120))), (arr_15 [i_7] [i_4] [i_4] [i_4] [i_1] [i_1])))), ((var_16 ? (40 + 10319109820580095514) : 120)));
                            arr_29 [i_3] [i_2] [i_2] [i_2] [i_7] |= (min(-20165, ((+((1 ? (arr_10 [i_7] [i_3] [i_2] [i_1]) : var_9))))));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] &= (47 || 1);
                            var_20 = ((min(((min((arr_5 [i_1 - 2]), var_12))), var_8)));
                        }
                        arr_33 [i_1] [i_1] [i_4] = (max(-113, (((((arr_25 [i_1] [i_2] [i_2] [i_2] [i_4]) * var_13)) | (((min((arr_12 [i_1] [i_1] [i_3]), (arr_1 [i_1])))))))));
                        arr_34 [i_2] [i_4] = ((157 == (min((arr_8 [i_1] [i_1 + 1] [i_1 - 1]), (9223372036854775807 / var_4)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_21 = var_6;
        arr_38 [i_9] [i_9] = (32767 <= 2021789446);
        arr_39 [i_9] = (((((arr_37 [i_9]) ? (arr_1 [i_9]) : var_5)) + (arr_1 [i_9])));
    }
    var_22 = (max(var_22, (max((((((min(-9, 131)))) & (var_2 * var_16))), (max((((var_5 ? var_3 : var_5))), (347018299 % var_15)))))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_23 ^= (((((min((arr_37 [i_10]), var_8))) ? (arr_0 [i_10 - 1]) : var_8)) <= (((+(((arr_41 [i_12]) ? var_11 : 61440))))));
                            arr_54 [i_11] [i_12] [i_11] [i_11] = (max((arr_49 [i_10 - 1] [i_10 - 1] [i_11 + 1]), ((738512467534658227 / (arr_53 [i_10] [i_11] [i_11] [i_10 + 2])))));
                            arr_55 [i_11] [i_13] = (((((min(var_13, var_1))) ? 62 : (max(var_9, 0)))));
                            arr_56 [i_10] [i_11] = 42;
                        }
                    }
                }
                arr_57 [i_11] [i_11] [i_10] = (min((((arr_41 [i_10 + 1]) ? var_16 : (arr_41 [i_10 - 1]))), 0));
            }
        }
    }
    var_24 *= var_7;
    var_25 = ((~(max(((min(var_3, var_15))), (max(var_16, var_5))))));
    #pragma endscop
}
