/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 10275;
    var_19 = (~var_3);
    var_20 |= 34359734272;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((arr_0 [1] [i_0]) >> (((arr_0 [i_0 + 3] [i_0]) - 1207230407))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [18] [i_0] [i_0] = (1 == 62153);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_14 [i_2] [i_2] = ((var_1 ? -5328 : var_17));
                        var_21 = (min(var_21, (!var_5)));
                        var_22 *= (((!var_6) || var_1));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            arr_20 [i_4] [i_4] [i_5] = ((((((var_7 + 2147483647) >> (var_1 - 8685)))) ? 65535 : (arr_5 [i_4] [1])));

            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                arr_25 [i_6] = 1;
                var_23 = (min(var_23, (((((arr_24 [i_5 + 1] [i_6]) == ((var_6 & (arr_3 [i_6 - 2] [i_5] [i_4])))))))));

                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    arr_29 [i_7] [i_6] [i_6] [i_4] = var_15;
                    var_24 = (max(var_24, (((((((var_5 ? 63770 : var_5)))) ? (-127 - 1) : ((((((arr_9 [i_7] [i_7] [i_7] [i_4]) ? 1 : var_6))) % ((-(arr_26 [i_5] [i_7 + 2]))))))))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_25 = ((-(var_2 / 32767)));
                    arr_33 [2] [4] [i_8] [i_8] &= (((arr_13 [1] [i_6 - 1] [i_5] [1]) ? (((1559899265 || ((((arr_15 [i_4] [i_5]) << (((var_5 + 151) - 18)))))))) : (((arr_24 [i_5] [i_4]) / (~var_1)))));
                    var_26 = (min(var_26, var_7));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    arr_36 [i_6] [12] [i_6] = ((var_5 ? ((max(var_0, ((~(arr_10 [i_4])))))) : ((~(arr_8 [17] [i_9])))));
                    var_27 ^= (~37);
                }
                arr_37 [i_6 + 3] [7] [i_6] [i_6 + 3] = ((~(arr_26 [i_5 - 1] [i_6 + 2])));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_28 = arr_1 [i_6];
                            var_29 = (min(var_29, (arr_5 [i_11] [i_11])));
                            arr_45 [i_4] [i_6] [i_6] [i_10] [i_6] = ((~(((arr_9 [i_6 + 1] [i_6] [i_6] [i_5 - 1]) >> (var_7 + 91140207)))));
                            var_30 = (max(var_30, (arr_44 [i_5 + 1] [i_5 + 1] [i_6] [i_4] [i_6 + 3] [i_6 + 3])));
                        }
                    }
                }
            }
        }
        var_31 = ((var_1 ? var_13 : var_9));

        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            arr_50 [2] = (var_2 | (arr_15 [i_4] [i_12]));
            var_32 ^= (max((arr_4 [i_12] [i_4]), ((var_4 ? var_0 : var_17))));
            arr_51 [i_4] [i_12] [i_12] = ((~(((max((arr_46 [i_4] [i_4] [i_4]), 13505550823429967168)) << (((arr_26 [i_4] [i_12]) + 19042))))));
            var_33 = (min(var_33, (((var_1 >> (((!((var_0 >= (arr_27 [i_4] [i_4])))))))))));
        }
        for (int i_13 = 3; i_13 < 12;i_13 += 1)
        {

            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                var_34 = var_17;

                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    var_35 -= ((~(arr_34 [i_13 - 2] [i_14 - 1] [i_14] [2] [i_4] [i_14])));
                    var_36 = (max(var_36, (arr_32 [i_14] [i_15] [i_15] [6] [i_15])));
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    var_37 = var_5;
                    arr_64 [i_4] [8] = (((~(((arr_58 [10] [10] [1] [i_16]) << (var_0 - 810335172))))));
                    var_38 -= (arr_17 [i_4] [1]);
                }
            }
            arr_65 [i_4] = (arr_42 [i_13 - 3] [i_4] [i_4] [i_4]);

            /* vectorizable */
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                arr_69 [i_4] [i_4] [i_4] = var_0;
                arr_70 [i_4] = (arr_18 [12] [i_13]);
            }
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                var_39 = ((9966 | var_12) || (arr_60 [i_13] [9] [i_13] [i_13 - 1] [i_13 + 1]));
                var_40 = ((~(((!(var_4 || var_4))))));
                arr_73 [i_4] [i_4] [i_4] = ((~((((((var_11 ? var_14 : (arr_5 [i_4] [i_4])))) > (((arr_60 [i_18] [i_18] [i_13] [i_4] [i_4]) ^ 7656097444574762654)))))));
            }
            for (int i_19 = 1; i_19 < 10;i_19 += 1)
            {
                var_41 -= (((arr_40 [i_13] [i_13]) << (((((arr_35 [i_19 - 1] [i_13 - 1]) ? (arr_27 [7] [7]) : var_15)) - 1232439708))));
                var_42 = ((var_3 - ((((var_12 ? var_10 : var_5)) + (((var_5 ? var_11 : var_1)))))));
            }
        }
        for (int i_20 = 2; i_20 < 12;i_20 += 1) /* same iter space */
        {

            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                arr_80 [i_4] [i_4] [i_4] [i_4] = (arr_44 [i_4] [i_4] [i_4] [i_20] [10] [10]);
                var_43 = ((!(((arr_57 [i_20 - 1] [i_20] [i_20 - 2] [i_20 + 1]) || (~var_0)))));
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 0;i_22 += 1)
            {
                var_44 -= (~var_1);
                arr_83 [7] [i_20] [i_22] = ((((((arr_57 [i_4] [i_20] [i_20] [i_22 + 1]) != 219))) >= (((var_14 + 2147483647) << (((arr_46 [i_4] [i_20] [i_22 + 1]) - 16396333386437950436))))));
            }
            var_45 -= (~var_10);

            /* vectorizable */
            for (int i_23 = 0; i_23 < 13;i_23 += 1)
            {
                arr_88 [i_20] [i_23] [1] = var_16;
                arr_89 [i_4] |= (((arr_84 [i_20 - 2] [i_20 - 2] [i_20] [i_20]) + (arr_56 [i_20 + 1] [i_20 + 1] [5] [6])));
                var_46 = (max(var_46, (~var_5)));
                var_47 = ((~(arr_58 [i_20 - 2] [i_20 + 1] [i_20 - 2] [i_20 - 1])));
            }
        }
        for (int i_24 = 2; i_24 < 12;i_24 += 1) /* same iter space */
        {
            var_48 -= ((((!((((arr_71 [1] [i_24] [i_24] [i_24]) / (arr_72 [i_24] [i_4] [i_4] [i_4])))))) ? (max((arr_17 [i_24 + 1] [i_24 - 1]), 144115188075855864)) : (arr_78 [i_24] [i_4])));
            arr_92 [i_4] [i_4] [i_4] = (~var_6);
        }
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 13;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 13;i_26 += 1)
            {
                {
                    var_49 = (min(var_49, (((((!237) == var_8))))));
                    var_50 = (max(var_50, ((((max(((((arr_27 [i_4] [i_4]) ? var_7 : (arr_98 [i_4] [i_4] [i_4] [i_4])))), (((arr_8 [i_4] [i_25]) & -3))))) ? 134217727 : (((~(arr_9 [i_4] [i_25] [i_26] [i_25]))))))));
                }
            }
        }
        var_51 = (max(var_51, (!63770)));
    }
    var_52 = ((17 ? var_6 : (!var_16)));
    #pragma endscop
}
