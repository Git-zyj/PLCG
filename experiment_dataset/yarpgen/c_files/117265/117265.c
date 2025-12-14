/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (max(4267746700106048122, var_8));
                    var_19 *= ((4267746700106048100 ? 97 : -8));
                    var_20 = (((((var_3 ? (arr_7 [i_1 + 1] [i_1 - 1] [i_0]) : var_9))) != (min(var_16, (arr_3 [0] [11] [i_1 + 1])))));
                    var_21 = (min(var_21, ((((arr_6 [18] [i_1] [i_1] [0]) ? (arr_5 [i_0] [i_0] [i_2]) : (((3 ? 0 : -103))))))));
                    arr_8 [i_0] [i_1] [i_2] = var_15;
                }
            }
        }
        var_22 = (max(((4568 ? 0 : 4294967294)), (~var_17)));
        var_23 = (((~var_14) != (var_4 << var_17)));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_24 = var_1;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_4] = (max((arr_2 [i_4] [i_5]), (((arr_2 [i_4] [i_5]) / (arr_10 [i_3] [i_4])))));
                    var_25 = var_11;

                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_26 &= var_6;
                        var_27 = (((((-(arr_6 [i_6] [14] [i_4] [14])))) ? (((!(arr_6 [i_3] [i_5] [i_4] [i_3])))) : ((min((arr_6 [i_3] [i_4] [i_4] [i_6]), (arr_6 [i_3] [i_4] [i_3] [i_6]))))));
                        var_28 = var_4;
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_29 = -454996829439997781;
                        arr_23 [i_4] = ((~(max(var_11, var_4))));
                        arr_24 [i_3] = var_4;
                        var_30 = var_4;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_31 = (((((((arr_14 [i_3]) ? var_14 : var_17)))) ? (((11 ? 87 : 132))) : ((((min((arr_5 [i_8] [i_4] [i_8]), -4554))) ? var_14 : (arr_22 [i_4] [i_4] [i_4] [i_3])))));

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            arr_32 [i_9] [1] [i_5] [i_4] [10] = var_5;
                            var_32 &= (((-var_15 ? (((min(37, 21))) : var_13))));
                            var_33 |= arr_3 [i_3] [i_4] [i_4];
                            var_34 = (((((((min((arr_18 [i_3] [15] [i_3] [i_3] [i_9]), (arr_9 [i_5])))) ? 1 : var_9))) ? (min((arr_27 [i_3] [i_4] [i_5] [0] [0] [i_5]), (arr_27 [i_3] [i_4] [7] [i_5] [i_8] [i_3]))) : ((-4554 ? 581529445 : 0))));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_35 |= var_4;
                            var_36 -= (max(((((242547479 ? var_11 : (arr_10 [i_4] [i_4]))) << (var_14 - 194))), (arr_11 [13] [16] [9])));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_38 [i_11] [i_8] [i_5] [i_4] [7] = var_5;
                            arr_39 [i_3] [14] [i_5] [i_8] [i_11] [i_11] = var_8;
                            var_37 = (min(var_37, (arr_22 [1] [10] [i_4] [i_4])));
                            arr_40 [i_4] [i_4] [i_3] [i_5] [i_4] [i_4] [i_3] = 2275935966;
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 16;i_12 += 1)
                        {
                            var_38 ^= 32767;
                            var_39 -= 1;
                        }
                        arr_44 [i_3] [i_3] = (((((var_6 ? (arr_15 [i_3]) : var_8))) ? var_7 : (~-11801)));
                    }
                }
            }
        }
        var_40 ^= ((32767 ? 24 : 32767));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_47 [i_13] = -914840487;
            var_41 = (((((arr_28 [i_13] [i_13] [i_13] [i_3] [i_3] [i_3]) ? 1248479858 : var_10)) != -var_7));
            var_42 = (min(var_42, (((!((((arr_17 [6] [i_3] [i_3]) - (arr_13 [i_3] [i_13])))))))));

            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_43 = var_2;
                var_44 = ((arr_12 [i_3] [i_3]) ? 22 : var_4);
            }
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                var_45 = (min(var_45, 7238));
                var_46 = (max(var_46, (((~(arr_6 [i_3] [i_13] [i_15] [i_15]))))));
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        arr_65 [i_3] [i_3] [i_13] [i_16] [i_17] [i_18] = ((var_11 ? 2097151 : 87));
                        arr_66 [i_3] [i_16] [i_17] [i_18] = 1248479858;
                    }
                    for (int i_19 = 1; i_19 < 15;i_19 += 1)
                    {
                        var_47 = (max(var_47, (((arr_28 [i_19 + 2] [i_19] [i_19] [i_19 + 2] [i_19 - 1] [i_19 - 1]) & var_17))));
                        arr_69 [15] [i_13] [2] [2] [i_19 + 2] = var_7;
                    }
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        arr_72 [9] [0] = ((~(var_4 - var_12)));
                        arr_73 [i_3] [i_13] [15] [i_16] [i_17] [i_20] = 1;
                    }
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        var_48 |= var_8;
                        arr_78 [i_3] [i_3] [i_3] [i_16] [i_17] [i_21] [i_3] = 153;
                        arr_79 [7] [i_13] [i_13] [i_17] [16] = ((18014394214514688 ? 2225156779 : 1));
                    }
                    var_49 = (max(var_49, 240));
                }
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    arr_83 [i_3] [i_3] = (arr_25 [i_3]);
                    var_50 = var_2;
                }
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {

                    for (int i_24 = 0; i_24 < 17;i_24 += 1)
                    {
                        var_51 = (min(var_51, 4294967293));
                        var_52 ^= 6513;
                    }
                    for (int i_25 = 1; i_25 < 16;i_25 += 1)
                    {
                        var_53 = (min(var_53, ((((var_17 <= var_17) ? (var_12 != -32768) : ((42952 ? (arr_63 [i_3] [i_13] [i_16] [i_25]) : 22584)))))));
                        arr_92 [i_3] [i_13] = (((arr_85 [i_16] [i_23] [i_25 + 1] [i_25 - 1]) ? var_10 : var_8));
                    }
                    var_54 += 89;
                }
                var_55 ^= (~var_13);
                arr_93 [15] [i_13] = 3526113053;
            }
        }
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 17;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 17;i_27 += 1)
            {
                {
                    var_56 = (max(var_56, (((-12528 ? ((var_14 ? ((-(arr_10 [i_3] [i_3]))) : var_6)) : (!var_14))))));
                    arr_100 [i_3] [i_26] = 57130;
                }
            }
        }
    }
    var_57 = (min(var_57, var_17));
    var_58 = (max(var_58, var_7));
    var_59 = var_6;
    var_60 = (max((((914840472 ? 1 : 3380126834))), ((((max(var_1, 59048))) ? var_13 : ((var_11 ? 1 : 0))))));
    #pragma endscop
}
