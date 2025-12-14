/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_4));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 *= ((var_12 | (((var_13 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        arr_2 [i_0] = var_14;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] = -var_2;
                        var_18 = ((!(arr_6 [i_0 + 3] [i_2 - 2])));
                        arr_12 [i_0] [i_0 - 2] [i_1] [i_0] [i_3] = (!-23649);
                        arr_13 [i_3 - 1] [i_1] [i_2] [i_3 - 2] [i_2] [10] |= var_8;
                        arr_14 [i_3] [i_3] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] = var_15;
                        arr_18 [i_0] [i_1] [i_2 - 2] [i_1] [i_0] = (arr_10 [i_0] [i_0 - 3] [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_0]);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_19 &= ((!(arr_15 [i_0] [i_0] [7] [i_0 + 4] [i_0 - 2])));
                            arr_22 [i_1] [i_2] [i_4] [i_5] |= (arr_4 [i_2 - 1] [i_4] [i_2]);
                            arr_23 [i_5] [i_0] [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_6 [i_0] [i_1]);
                        }
                        var_20 ^= (arr_10 [i_2 - 2] [i_1] [i_1] [i_4] [i_1] [i_4]);
                    }
                    var_21 = (arr_0 [i_2]);
                }
            }
        }
        arr_24 [i_0] = (arr_9 [i_0 + 3] [i_0] [i_0] [i_0 + 1] [i_0 + 4] [i_0 - 3]);
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            arr_29 [i_6] [i_7 + 1] [i_7] = arr_27 [i_6] [i_7];

            /* vectorizable */
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                arr_32 [i_6] [i_6] [i_7] [i_8 - 1] = (arr_28 [i_6 - 2] [i_7 + 1] [i_8 + 1]);
                arr_33 [i_8 - 1] = var_4;
                var_22 = (arr_9 [i_6] [i_6] [i_6 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1]);
            }
            var_23 |= ((~(min((arr_7 [i_7 + 2] [i_7] [i_7] [i_6 - 3] [i_7] [i_6]), (((arr_26 [i_6 - 1]) >> (((arr_8 [i_6] [i_7]) - 3088145062909122438))))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_37 [i_9] = ((((((arr_0 [i_6 + 3]) + (min((arr_16 [i_6]), var_10))))) ? var_14 : -18446744073709551615));
            var_24 = (min(var_24, ((min((min((arr_15 [i_6] [i_6 - 2] [i_9] [i_9] [i_9]), var_6)), (min((arr_34 [i_6] [i_6] [i_9]), (arr_36 [i_6] [i_9]))))))));
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        arr_45 [i_6] [i_11] = ((~(arr_28 [6] [i_10] [i_6])));
                        var_25 = (min(((((arr_41 [i_6 + 1] [i_6 + 2] [i_6 + 1]) <= (arr_35 [i_6 + 1] [i_6 + 2])))), (min((arr_0 [i_6 + 1]), (arr_41 [i_6 + 1] [i_6 + 2] [i_6])))));

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            arr_49 [i_6] [9] [i_6 + 3] [i_6 + 3] [i_6] [i_6] [i_6] = ((((min((((arr_43 [i_6]) ? var_10 : var_14)), (arr_16 [i_13])))) * (arr_8 [i_6] [i_6])));
                            arr_50 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_12] [i_6 + 1] [i_13] [4] = ((((3838000300 + ((4954314112901091671 + (arr_28 [i_10] [i_10] [i_11]))))) << ((((+((var_0 ? (arr_27 [i_12] [i_11]) : var_8)))) - 18446744071659974820))));
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            arr_53 [i_12] [i_10] [i_12] [i_12] [i_14] = (((((((((arr_3 [i_14] [i_10]) + (arr_27 [i_6] [i_6])))) & ((var_7 | (arr_39 [i_6 + 4])))))) ? var_1 : (arr_34 [4] [4] [i_11])));
                            arr_54 [5] |= ((~-3226788414987225825) ? (arr_39 [i_6]) : 56923);
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_26 *= (3899694927 < 74);
                            arr_58 [i_11] [i_11] = ((~(((arr_56 [i_6] [i_10] [i_10] [5] [i_15]) / (arr_55 [i_11] [i_10] [2] [i_11] [14] [i_15])))));
                            arr_59 [i_15] [i_12] [i_11] [10] [10] = (((arr_47 [i_6] [i_10] [i_6] [i_6] [12] [i_15]) == 8892));
                            var_27 = var_14;
                        }
                    }
                }
            }
        }
        arr_60 [i_6 - 2] = (arr_7 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        var_28 ^= (arr_61 [i_16]);
        var_29 = (max(var_29, (arr_62 [i_16])));
    }
    var_30 = ((-(~var_6)));
    var_31 = var_2;
    #pragma endscop
}
