/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_10 ^= ((-(arr_1 [i_0 + 1])));
        var_11 = (min(var_11, ((((16384 <= var_1) ? (1 <= 1) : 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_12 ^= ((0 / (arr_1 [i_1 + 1])));

        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_13 |= 6942;
            var_14 = (min(var_14, (((var_8 ? (65535 + 120) : var_3)))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_15 -= (arr_4 [i_1 + 1]);
                var_16 ^= (((arr_2 [i_2 - 1] [i_2 - 3]) ^ var_8));
            }
            for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_17 = (max(var_17, (17162 <= 126)));
                var_18 = (max(var_18, ((((arr_11 [i_2 - 1] [i_1 + 1] [8] [2]) << (!127))))));
                var_19 = (min(var_19, var_8));
            }
            for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_20 = (max(var_20, 5590));
                    var_21 = (max(var_21, (((31 * (((arr_6 [i_2]) ^ (arr_5 [i_5]))))))));
                }
                arr_19 [1] [i_2] [i_2] &= (((arr_6 [i_5 + 1]) ? 31062 : var_3));
                var_22 *= (((arr_14 [i_1 + 1] [i_2 - 3]) ? (arr_9 [i_1] [i_2] [1]) : 32767));
                var_23 *= (arr_2 [i_1 + 1] [i_1 + 1]);
                var_24 = (min(var_24, 1));
            }
            var_25 += (((var_6 & var_0) || (((var_8 ? var_2 : 21034)))));
            var_26 ^= (arr_0 [i_2] [i_1]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_27 -= (((1 ^ 32741) <= 17162));
            var_28 ^= -12;
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_29 = (max(var_29, (arr_2 [i_1 + 1] [i_1 + 1])));
                var_30 -= ((((var_6 ? 1 : var_4)) ^ 126));
                var_31 += (((1 || 1) ? -22415 : var_1));
                var_32 = (min(var_32, ((var_9 == (arr_3 [i_1 + 1])))));
                var_33 ^= 1;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_34 = (min(var_34, -77));
                var_35 = (max(var_35, (arr_11 [i_1] [i_8] [i_8] [i_10])));
                var_36 += -29;

                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    arr_33 [i_8] [i_8] [i_1] |= (arr_12 [i_1] [i_1] [i_8]);
                    var_37 = (max(var_37, var_5));
                    var_38 = (min(var_38, (((arr_28 [4] [i_1 + 1] [i_8] [i_11]) < (arr_28 [i_1] [i_1 + 1] [i_8] [i_8])))));

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_39 |= var_3;
                        var_40 -= ((var_1 ? var_4 : 1));
                        var_41 -= (((arr_34 [i_1] [i_1 + 1] [i_11 + 1]) % var_8));
                        var_42 += (var_7 <= 17);
                    }
                    for (int i_13 = 4; i_13 < 9;i_13 += 1)
                    {
                        arr_40 [i_13 - 1] [i_11] [i_10] [i_8] [i_8] [i_1] [i_1] &= (1 > var_1);
                        var_43 ^= (((1 ? var_4 : var_2)));
                    }
                    var_44 = (max(var_44, 1));
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_45 = (max(var_45, (((((6844 ? (arr_30 [i_14] [i_8] [i_14] [i_14]) : var_6)) < (arr_2 [i_1 + 1] [i_1 + 1]))))));
                    var_46 += (arr_37 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [2] [i_1 + 1]);
                    var_47 ^= (!(arr_42 [i_1] [2] [i_10]));
                    var_48 += (arr_10 [i_1] [i_1 + 1]);
                    var_49 = (max(var_49, var_1));
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_50 ^= 0;
                    var_51 = (min(var_51, ((((arr_36 [i_10] [i_1 + 1] [i_1 + 1] [i_1 + 1]) >> 1)))));
                    var_52 = (max(var_52, -30205));

                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        var_53 = (min(var_53, (1 * 0)));
                        var_54 ^= (~65197);
                    }
                    for (int i_17 = 1; i_17 < 9;i_17 += 1)
                    {
                        var_55 = (max(var_55, (((var_2 | (arr_31 [i_1] [i_17 - 1] [i_8] [i_17] [i_17]))))));
                        var_56 = (max(var_56, ((((arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_17 + 1]) <= (var_8 ^ 52320))))));
                    }
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_57 = (min(var_57, 93));
                    var_58 ^= (arr_45 [i_18] [i_8] [i_8] [i_1]);
                }
                var_59 = (max(var_59, (!var_0)));
            }
            for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
            {
                var_60 = (max(var_60, ((((((125 ? (arr_8 [i_1] [i_8] [i_19]) : var_4))) ? 1 : var_9)))));

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    var_61 = (max(var_61, (((1 ? 0 : (15819 * var_5))))));
                    var_62 += (((var_4 ? (arr_21 [i_1] [i_1] [i_1]) : 1)));
                }
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {
                    var_63 ^= ((var_4 ? 1 : ((((-32767 - 1) || (arr_18 [i_1] [i_19] [i_1] [i_1] [i_19] [i_1]))))));
                    var_64 -= var_5;
                }
                var_65 = (max(var_65, var_2));
                var_66 = (min(var_66, -var_9));
            }
            for (int i_22 = 0; i_22 < 11;i_22 += 1) /* same iter space */
            {
                var_67 += (arr_52 [i_1 + 1] [i_22]);
                var_68 ^= 1;
            }
            var_69 |= (57077 == ((var_6 ? var_6 : (-32767 - 1))));
        }
        for (int i_23 = 0; i_23 < 11;i_23 += 1) /* same iter space */
        {
            var_70 *= (arr_13 [i_1] [i_23] [i_1] [i_1]);
            var_71 = (min(var_71, var_4));
        }
        var_72 ^= (~var_6);
        var_73 |= (0 | var_9);
    }
    var_74 = (min(var_74, var_6));
    #pragma endscop
}
