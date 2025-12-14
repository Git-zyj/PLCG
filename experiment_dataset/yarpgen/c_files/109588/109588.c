/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((-439755402 && (arr_1 [i_0])))));
        var_21 = (max(var_21, (arr_1 [i_0])));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_22 = (max(var_22, (arr_1 [i_0 - 2])));
            arr_4 [i_0 - 1] = 32560;
        }
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_23 = (max((((arr_6 [i_2]) ? ((min(var_4, 1))) : (arr_1 [i_2]))), (((((var_1 ? 2956105059 : 28))) ? ((min(44354, (arr_3 [i_2])))) : (arr_1 [i_2 - 1])))));
        arr_7 [i_2 - 2] = (((((~119) ? ((max(var_1, var_8))) : -var_7))) ? var_12 : 3743985533);
        var_24 = arr_0 [i_2] [i_2];
        var_25 = (+((var_16 >> (((arr_2 [i_2 - 2]) - 30356)))));
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_26 = ((~((-(arr_1 [i_3 + 1])))));
        arr_11 [i_3] [i_3] = ((((((max(-9341, (arr_9 [1])))) ^ ((-55 / (arr_1 [i_3]))))) >= var_8));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_27 *= max(46445520, (((~1535246400) ? (1558753697 == 12078) : (((arr_14 [i_4] [i_4]) ? 2956105036 : 1027022428)))));
            var_28 = var_2;

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_29 = (arr_0 [i_4] [i_5]);
                arr_19 [7] [i_5] [i_5] = arr_9 [i_4 - 2];
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                var_30 = (max(var_30, (((16662 ? (arr_13 [i_7 + 3]) : (arr_13 [i_7 + 3]))))));
                var_31 = ((arr_1 [i_4 - 1]) ? ((~(arr_1 [i_4]))) : -var_1);

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_32 = ((arr_9 [i_4 - 2]) ^ (arr_9 [i_4 - 1]));
                        arr_29 [i_5] [i_7] [i_7] [i_5] [i_4] = (((arr_28 [i_4 - 1] [i_4 + 1]) ^ (arr_28 [i_4 - 1] [i_4 - 2])));
                        var_33 = ((-20588 ? var_7 : -var_2));
                        var_34 -= ((arr_5 [i_4 - 2]) | (arr_5 [i_4 - 2]));
                    }
                    for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_35 = ((-var_7 | ((-(arr_13 [i_5])))));
                        var_36 = (max(var_36, (((var_12 - (arr_13 [i_5]))))));
                        var_37 = ((32342 >= (arr_23 [i_7 + 3] [i_10 + 1] [i_4 - 1] [i_4 - 1])));
                        var_38 = (max(var_38, ((((arr_27 [i_4 - 1] [i_7 + 1]) ? (arr_27 [i_4 - 1] [i_7 + 2]) : (arr_13 [i_4 - 2]))))));
                    }
                    for (int i_11 = 3; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        var_39 = (((var_1 + 2147483647) << ((((var_10 ? 44765 : (arr_31 [i_4 + 1] [i_5] [i_4 + 1] [i_7] [i_8] [i_11] [i_11 - 1]))) - 44765))));
                        var_40 = var_4;
                        arr_36 [i_4] [i_5] [i_11] [8] = 18177;
                    }
                    var_41 &= (((~var_4) + var_19));
                }
            }
            arr_37 [6] = (((((min(94282116, 1))) ? ((min((arr_14 [1] [i_5]), (arr_18 [i_4] [i_4] [i_5] [i_5])))) : (((arr_15 [i_4] [i_5]) ? var_18 : var_18)))));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_42 = (max(var_42, (((var_15 ? (arr_17 [i_4] [i_12]) : ((var_10 ? var_6 : (((-9259 + 2147483647) >> (((arr_30 [i_4] [i_12] [i_4] [i_4] [i_4] [i_12]) - 1779083857)))))))))));
            arr_41 [2] [i_12] [i_12] = (((((!var_5) >= 64468)) ? (((~(arr_21 [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2])))) : (max((arr_8 [i_4 - 2]), (arr_8 [i_4 + 1])))));
            arr_42 [i_4] [i_12] = (max((arr_2 [i_4 - 1]), ((((min(var_3, (arr_26 [i_4] [i_4] [i_4] [i_12] [i_12] [7])))) ? (~6) : var_19))));
        }
        arr_43 [i_4] [3] = (((((((-(arr_34 [i_4] [i_4] [i_4] [i_4] [i_4 - 2])))) ? 64468 : var_13))) ? (((arr_20 [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 1]) ? (arr_20 [i_4] [i_4 - 2] [i_4 - 1] [i_4]) : (arr_20 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))) : (((((32560 ? var_8 : (arr_2 [i_4])))) ? (arr_26 [i_4] [4] [i_4] [4] [i_4] [i_4]) : (var_5 ^ var_10))));
        var_43 = (max(((min((max(-20604, 65535)), (arr_25 [i_4] [i_4] [i_4] [i_4])))), 49125228));
    }

    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            arr_48 [i_13] [i_14] [i_14] &= (arr_47 [i_13]);
            arr_49 [i_13] [i_13] [i_14] = (arr_44 [i_14]);

            for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
            {
                var_44 = (min(10930, ((var_16 ? (arr_52 [i_15] [i_14] [i_14] [i_13]) : var_1))));
                var_45 = (min(var_45, var_11));
                arr_53 [i_13] [i_14] [i_15] = (((arr_45 [i_13]) ? ((((arr_50 [i_14] [i_13]) || var_10))) : (max(((var_8 ? var_18 : var_17)), ((min((arr_44 [i_13]), (arr_47 [i_13]))))))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
            {
                var_46 = (((arr_44 [i_13]) ? (((arr_47 [i_14]) % var_4)) : (arr_46 [i_14] [i_16])));
                var_47 -= (((arr_44 [i_16]) << (((arr_44 [18]) - 28739))));
            }
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                var_48 = (arr_47 [19]);
                arr_60 [i_13] [i_14] [9] = ((((min((arr_58 [9] [1] [i_17]), 0))) + ((-(arr_58 [i_13] [i_14] [i_17])))));
                var_49 = ((+(((-16422 + 111) * (!var_7)))));
                arr_61 [i_14] = (((arr_55 [i_13] [i_14] [i_17]) >= ((((var_2 ? (arr_50 [i_13] [i_14]) : var_4)) >> ((((max(var_9, var_2))) - 40047))))));
            }
            /* vectorizable */
            for (int i_18 = 2; i_18 < 22;i_18 += 1)
            {
                var_50 ^= (arr_45 [i_18 - 1]);
                arr_64 [i_18 + 1] = ((~(arr_58 [i_18 - 2] [i_18 - 2] [i_18 - 2])));

                for (int i_19 = 0; i_19 < 0;i_19 += 1)
                {
                    var_51 = -5995;

                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        var_52 = -1027022428;
                        var_53 = (((var_2 == 49125237) ? (arr_67 [i_20]) : ((~(arr_45 [i_13])))));
                        var_54 = (((1 / -6646) >= (!-28984)));
                    }

                    for (int i_21 = 2; i_21 < 20;i_21 += 1)
                    {
                        arr_74 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((-(arr_45 [i_13])));
                        var_55 += ((1967779108 ? ((((arr_46 [i_19] [i_13]) * 6213))) : 441102244));
                        var_56 = (((var_7 + 2147483647) >> (!var_3)));
                    }
                }
                var_57 = (min(var_57, 28962));
                arr_75 [i_13] [i_18 - 2] [i_13] = (((arr_58 [i_18 + 1] [i_18 - 2] [i_18 - 2]) && var_7));
            }
            var_58 ^= (arr_57 [i_13] [i_14] [2]);
            var_59 -= (max(var_5, ((max((arr_51 [i_13] [i_13] [i_13]), (arr_68 [i_13] [17] [i_13]))))));
        }

        for (int i_22 = 1; i_22 < 22;i_22 += 1)
        {
            var_60 = (-((49496 ? -1558753698 : 5470)));
            var_61 = (max(var_61, 57344));
        }
    }
    #pragma endscop
}
