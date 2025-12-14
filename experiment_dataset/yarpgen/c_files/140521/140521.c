/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((((252 - (max(1, var_18)))) << (((min((arr_3 [i_0 - 2]), (arr_3 [i_0 - 1]))) - 3674254286))));
                    var_19 *= ((((((arr_1 [i_0 - 2]) * var_9))) + ((var_11 << (((arr_2 [i_0 + 3] [i_0 + 2]) - 2055665531))))));
                    arr_10 [i_2] [i_1] [i_2] = (((~(arr_2 [i_0] [i_0]))));
                    var_20 = ((~((~(arr_3 [i_1])))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_23 [i_3] [i_3] = (((!var_4) > (arr_0 [i_4 - 1])));
                            var_21 = ((58790 ? (arr_17 [i_0 + 1]) : (min(-18446744073709551615, ((((arr_18 [i_0] [i_3] [i_4] [i_5] [i_6]) / (arr_17 [i_0 + 2]))))))));
                            var_22 = ((var_16 ? (((19376 / var_13) + var_10)) : var_17));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_23 &= ((((((arr_8 [i_0 + 3] [i_0] [i_0 + 1] [i_7 - 2]) ? var_13 : (arr_19 [i_0] [i_0 - 2])))) ? var_3 : ((~(max(1690881573, (arr_5 [i_0])))))));
                        arr_30 [i_8] [i_8] [i_7] [i_3] [i_0] [i_0 + 1] = (max(((-(arr_11 [i_0]))), var_6));
                    }
                }
            }
        }
        arr_31 [i_0] [i_0] = var_3;
    }
    var_24 = ((var_3 << (var_15 - 9755535011048166410)));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 16;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    var_25 &= 1209211198;
                    arr_40 [i_9] [i_9] [i_9] = ((((max(19376, (var_18 | 14)))) ? (max(var_13, var_1)) : (((((((arr_38 [i_9] [i_10 - 1] [i_11]) ? (arr_32 [i_11]) : var_14)) > var_3))))));
                    var_26 = (max(((~(arr_32 [i_9]))), 117));
                    var_27 = (arr_39 [i_11] [i_10] [i_9] [i_9]);
                    var_28 = (!((((((var_16 ? (arr_32 [i_10]) : (arr_36 [i_11] [i_10] [i_9])))) ? (arr_37 [i_9] [i_10 + 1]) : ((max(0, var_0)))))));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_29 = (min((((!(arr_38 [i_14 - 2] [i_14 + 1] [i_10 - 1])))), (arr_38 [i_9] [i_10] [i_13])));
                                arr_49 [i_9] [i_9] [i_10] [i_12] [i_13] [i_14] = (((((-126 > (min((arr_46 [i_9] [i_10] [i_12] [i_13] [i_14]), var_1)))))) ^ (min(1050173653, var_7)));
                                arr_50 [i_9] [i_10] [i_12] [i_13] [i_14] [i_14] = ((((min(-32233, 1))) ? (min((var_2 / var_0), (arr_39 [i_9] [i_10 - 1] [i_12] [i_14]))) : ((min((max(var_1, var_2)), var_12)))));
                            }
                        }
                    }
                    arr_51 [i_9] [i_9] = ((((9223372036854775807 ? 6104800501424234127 : 13)) + 58790));
                }
                /* vectorizable */
                for (int i_15 = 2; i_15 < 15;i_15 += 1)
                {
                    arr_55 [i_10] = (!var_14);

                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_30 = ((var_3 >> (((((arr_43 [i_9] [i_9] [i_10] [i_10] [i_15] [i_16]) ? 3362843726 : (arr_42 [i_9] [i_10] [i_15] [i_16]))) - 3362843726))));

                        for (int i_17 = 2; i_17 < 16;i_17 += 1)
                        {
                            var_31 *= var_11;
                            var_32 -= var_16;
                        }
                        for (int i_18 = 1; i_18 < 16;i_18 += 1)
                        {
                            var_33 = (min(var_33, (((~(arr_47 [i_18 + 1] [i_15 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10 + 1]))))));
                            var_34 ^= ((~(arr_35 [i_15] [i_15 - 2] [i_15 + 2])));
                        }
                        for (int i_19 = 1; i_19 < 15;i_19 += 1) /* same iter space */
                        {
                            var_35 ^= (arr_44 [i_9] [i_9] [i_9]);
                            var_36 = ((+((var_11 ? (arr_62 [i_9] [i_9] [i_10 + 1] [i_15] [i_16] [i_16] [i_19]) : (arr_41 [i_9] [i_10] [i_19 + 1])))));
                        }
                        for (int i_20 = 1; i_20 < 15;i_20 += 1) /* same iter space */
                        {
                            arr_67 [i_9] [i_20] [i_15] [i_15] |= (-(arr_47 [i_10 - 2] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_20 - 1]));
                            var_37 = (((58778 << (arr_63 [i_9] [i_9] [i_9] [i_9]))) >> (((arr_59 [i_10] [i_10] [i_16] [i_16] [i_20] [i_10 - 2]) + 99)));
                        }
                        var_38 = (((arr_46 [i_16] [i_15 - 2] [i_10] [i_9] [i_9]) ? (arr_37 [i_9] [i_15 - 1]) : 110));

                        for (int i_21 = 1; i_21 < 15;i_21 += 1)
                        {
                            var_39 = (min(var_39, -4336417014554296425));
                            var_40 = var_2;
                            var_41 -= -var_13;
                        }
                        for (int i_22 = 0; i_22 < 17;i_22 += 1)
                        {
                            var_42 = ((var_2 ? -var_3 : (arr_43 [i_22] [i_16] [i_15 + 1] [i_10 - 1] [i_9] [i_9])));
                            arr_72 [i_9] [i_10 - 2] [i_15 - 2] [i_22] [i_22] = (arr_66 [i_22] [i_16] [i_16] [i_15] [i_15] [i_10] [i_9]);
                        }
                    }
                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        var_43 += var_18;
                        arr_75 [i_9] [i_10 - 1] [i_23] [i_23] &= var_9;
                    }
                    for (int i_24 = 3; i_24 < 16;i_24 += 1)
                    {
                        var_44 ^= ((var_18 ? (~var_9) : (~var_5)));
                        arr_78 [i_9] [i_24] [i_9] [i_9] [i_9] [i_9] = (arr_35 [i_9] [i_10] [i_15 + 1]);
                    }
                }
                arr_79 [i_9] [i_10 - 1] = (!560366675);
            }
        }
    }
    #pragma endscop
}
