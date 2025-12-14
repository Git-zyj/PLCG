/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = (var_2 ^ var_1);
            arr_5 [i_0] = (((var_9 & (arr_1 [i_0] [i_0]))));
            var_11 = ((var_8 ? var_4 : (arr_1 [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = ((max(var_5, -var_5)));
            var_12 = (min((min((((arr_1 [i_0] [i_2]) ? 1 : var_8)), var_2)), ((min((arr_7 [i_2] [i_0]), (min(var_0, var_1)))))));
            var_13 = ((((max(((~(arr_3 [i_0] [i_2] [i_2]))), (arr_6 [i_0])))) == (((max(var_7, var_6)) / ((max(var_2, var_0)))))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_3] = ((((max(((((arr_11 [i_3]) != var_5))), ((8630 ? var_9 : (arr_11 [i_2])))))) ? (arr_1 [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0])));
                arr_13 [i_0] [i_0] [i_0] [i_3] |= ((var_8 - ((((arr_7 [i_3] [i_2]) && ((min(1, var_4))))))));
                var_14 = var_0;
                var_15 = var_6;
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                var_16 |= var_6;

                for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_17 = (arr_11 [i_4 + 2]);
                    arr_20 [i_0] [i_2] [i_5] [i_5] = (((arr_18 [i_0] [i_2] [i_0] [i_5]) - (arr_17 [i_0] [i_2] [i_4 + 1] [i_4 + 1] [i_5])));
                    var_18 = ((-332302342 ? 8337552184978647773 : 0));
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        var_19 = (((2097151 == (arr_10 [i_0] [i_4 + 1] [0]))));
                        arr_27 [i_7] [i_7] [i_7] [i_4] [i_4] [i_4] [i_7] = (((arr_7 [i_0] [i_2]) ? (((var_6 <= (arr_15 [i_0] [i_2] [i_4 - 2] [i_6 - 2])))) : ((-4358608508655175485 ? var_4 : (arr_19 [i_7] [i_7] [i_7])))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_30 [1] [i_0] [i_2] [i_4] [i_6 + 2] [i_6] [i_8] &= (arr_18 [i_0] [i_2] [i_4 + 3] [i_4 + 3]);
                        var_20 = (arr_10 [i_6 + 1] [i_2] [i_4 - 2]);
                    }
                    var_21 = -332302355;
                    var_22 = (((arr_18 [i_4 - 1] [i_2] [i_4] [i_2]) * 18446744073707454464));
                    arr_31 [i_6 + 1] [i_4 - 1] = ((!(arr_11 [i_6])));
                    var_23 = (max(var_23, var_5));
                }
                for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 4; i_10 < 15;i_10 += 1)
                    {
                        arr_38 [i_0] [i_2] [i_4] [i_9] [i_10 - 4] = var_3;
                        var_24 = 17881;
                        arr_39 [i_0] [i_2] [i_0] [i_9] [i_10] [i_2] [i_9] = var_8;
                        var_25 = var_9;
                        arr_40 [i_0] [0] &= var_2;
                    }
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        arr_43 [6] &= (-((var_6 >> (((arr_2 [i_0] [i_4] [i_4]) - 3296)))));
                        arr_44 [i_0] [i_9] [i_4] [i_9 - 2] [i_11] [i_11] = -4358608508655175485;
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_47 [i_9] [i_2] [i_2] [i_2] [i_2] [i_2] [i_9] = ((var_9 % (arr_23 [i_0] [i_0] [i_4 - 1] [i_9 - 1])));
                        var_26 = (arr_28 [i_2] [i_2] [i_4 + 2] [i_9 + 1] [i_4 + 3]);
                    }
                    arr_48 [i_0] [i_9] [i_0] [i_9 + 2] = var_7;
                    var_27 = (((arr_9 [i_2]) + ((-(arr_42 [i_2])))));
                }
                arr_49 [i_0] [i_2] [i_0] = (~4080650563036552019);
                var_28 = (var_5 + var_2);
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                var_29 -= ((var_7 * var_3) >= var_0);

                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    var_30 |= ((max(-var_6, var_0)));
                    arr_55 [i_0] = (arr_21 [i_14] [i_14] [i_14] [i_14]);
                }
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    arr_60 [i_0] [i_0] [i_0] [i_13] [i_15] = (-332302345 * 3963028548);
                    var_31 = (min((((var_7 << (var_6 - 5039745765557693543)))), 1));
                }
                for (int i_16 = 4; i_16 < 16;i_16 += 1) /* same iter space */
                {
                    var_32 = (min(var_32, (((((min(188, (max(-93, (arr_46 [i_0] [i_2] [i_16] [i_0] [i_0])))))) || ((min((arr_16 [i_0] [i_0] [i_13] [i_16] [i_13] [i_13]), (min(var_2, var_7))))))))));
                    arr_65 [i_2] |= (max(1, 17656147247016984139));
                    var_33 = ((+((((40 & var_7) != ((max(var_0, -1785968302))))))));
                    arr_66 [i_0] [i_2] [i_13] [i_16] [i_16] = var_4;
                    arr_67 [i_0] [i_2] [i_13] [i_13] [i_2] = (arr_21 [i_0] [i_2] [i_2] [i_2]);
                }
                /* vectorizable */
                for (int i_17 = 4; i_17 < 16;i_17 += 1) /* same iter space */
                {
                    var_34 = (max(var_34, 0));
                    var_35 = (!var_2);
                    var_36 &= var_2;
                }
                arr_71 [i_13] [i_2] [i_0] [i_0] = (max(((min((arr_50 [i_0] [i_0]), var_2))), ((((((var_7 || (arr_11 [i_13])))) >= ((((arr_64 [i_2]) == var_8))))))));
                var_37 = (((((var_9 || ((((arr_28 [14] [i_2] [14] [i_2] [i_13]) ? var_0 : var_2)))))) * (((((3880574025 && (arr_46 [i_0] [i_2] [i_0] [i_2] [i_13])))) + (min((arr_24 [i_0] [i_0] [i_13]), (arr_62 [i_0] [i_2] [i_2] [i_13] [i_13])))))));
            }
            arr_72 [i_2] = (((!((((arr_61 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : var_1))))) ? (((((max((arr_9 [i_0]), 60)))) % var_7)) : var_1);
        }

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_38 += ((-(((arr_1 [i_0] [13]) + (arr_35 [i_0])))));
            var_39 = (arr_46 [i_0] [i_0] [i_0] [i_0] [i_18]);
        }
        /* vectorizable */
        for (int i_19 = 2; i_19 < 14;i_19 += 1) /* same iter space */
        {

            for (int i_20 = 1; i_20 < 14;i_20 += 1)
            {
                arr_79 [12] [16] [12] [14] &= (arr_74 [i_19 + 1] [i_20 + 3]);
                var_40 *= var_3;
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 17;i_22 += 1)
                    {
                        {
                            var_41 = (min(var_41, (((-3769097200 ? var_4 : var_9)))));
                            var_42 = var_0;
                        }
                    }
                }
            }
            var_43 += (1 < var_7);
            var_44 = (arr_2 [i_0] [i_19 - 1] [i_19]);
        }
        for (int i_23 = 2; i_23 < 14;i_23 += 1) /* same iter space */
        {
            var_45 = ((((~(arr_68 [i_23 - 2] [14] [i_23 - 2]))) << (((max((arr_80 [i_23 + 2] [i_23 - 1]), (arr_80 [i_23 + 1] [i_23 - 1]))) - 6530015348178511027))));
            var_46 = (min(2205148507, 113));
            var_47 = var_0;
            var_48 = (((arr_78 [i_23 - 2] [i_23 - 2] [i_23 + 1] [i_0]) < (var_7 != 11740963697986337289)));
        }
        var_49 = (((((var_5 == (arr_19 [10] [i_0] [10])))) - (min(var_8, (arr_19 [4] [i_0] [i_0])))));
        var_50 = ((var_0 / (max((arr_80 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) << (((arr_24 [i_0] [i_0] [i_0]) + 52381984))))))));
    }
    /* vectorizable */
    for (int i_24 = 1; i_24 < 19;i_24 += 1)
    {
        var_51 = (var_2 >= var_4);
        var_52 &= ((!(arr_89 [i_24 + 1])));
    }
    for (int i_25 = 3; i_25 < 20;i_25 += 1)
    {
        arr_92 [i_25 + 1] [i_25 - 2] = (((arr_91 [i_25]) ^ var_3));
        var_53 &= (((arr_90 [i_25]) && (arr_90 [i_25])));
        arr_93 [i_25] = ((!(((-((((arr_90 [i_25]) || 17587498382455912987))))))));
        var_54 ^= var_6;
    }
    var_55 = var_2;
    var_56 = -7086271065511955104;
    var_57 = (max(var_57, 1744017834));
    #pragma endscop
}
