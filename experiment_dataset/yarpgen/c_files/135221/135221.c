/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 |= ((+((((max((arr_2 [i_0]), (arr_1 [i_0])))) ? 4160420388505958607 : (((-(arr_1 [i_0]))))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = var_2;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_19 = (((((0 ? var_11 : (var_13 | var_7)))) ? (var_8 <= var_13) : (arr_8 [i_2] [i_1] [i_0])));
                var_20 &= ((((max(237, (arr_5 [i_2] [i_1] [i_0]))) - (arr_0 [i_1]))) + (arr_3 [2] [1]));

                for (int i_3 = 3; i_3 < 6;i_3 += 1) /* same iter space */
                {
                    var_21 = 1;

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_22 = (min(var_22, (~90)));
                        var_23 = ((!((max((((var_5 ? var_3 : var_7))), (arr_14 [i_3 - 2] [i_3 - 2] [i_1] [i_1]))))));
                        var_24 = (((((((arr_7 [i_1] [i_3]) ? (arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_2] [i_1]) : 57)) > (7989118102529245642 || -1693163113))) ? var_5 : var_15));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_25 |= (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_26 |= (!var_15);
                        var_27 = (((arr_12 [i_3] [0] [i_3 + 3] [i_3] [i_3 + 4] [i_3 + 3] [i_3 + 1]) - (arr_12 [7] [i_2] [i_3] [7] [i_3 + 3] [i_3 + 4] [i_3 + 4])));
                        var_28 = (((arr_3 [i_0] [i_0]) ? (var_4 ^ var_1) : var_14));
                        var_29 = ((7989118102529245647 ? (arr_3 [i_3 + 2] [i_3 + 2]) : (arr_0 [i_3 + 1])));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        var_30 = 2422699035935201550;
                        var_31 &= (~1);
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        var_32 = ((-(arr_10 [i_0] [i_0] [5] [i_0])));
                        var_33 = (arr_20 [i_7] [i_3] [i_1] [i_1] [i_0] [i_0]);
                    }
                    var_34 = 1;
                    var_35 |= var_8;

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_36 = (((arr_0 [i_0]) <= (min(((((arr_11 [5] [i_1] [i_2] [i_2] [i_2]) % var_14))), (max(-4160420388505958607, -27371))))));
                        var_37 = var_8;
                        var_38 = ((((min(var_4, (arr_23 [i_0] [i_1] [i_1] [i_3 + 2] [i_8] [i_3 + 4] [i_3 + 2])))) ? (arr_6 [i_1] [i_1] [i_8]) : (((((var_7 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1))) ? (!var_4) : ((-(arr_1 [i_0])))))));
                        var_39 = (max((((arr_10 [i_3 + 3] [i_3] [i_3] [i_3 - 1]) / var_6)), (((((var_7 ? var_1 : (arr_11 [i_0] [i_1] [9] [i_3] [i_0])))) ? var_2 : ((var_14 ? (arr_4 [i_0]) : (arr_18 [i_1])))))));
                        var_40 = ((217 + (~var_2)));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_41 = var_14;
                        var_42 = (((((-var_1 / (((arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2] [i_1]) ? 5158 : var_4))))) ? ((((((var_13 ? (arr_25 [i_0] [i_1] [i_1] [7] [i_9] [i_9] [i_2]) : var_14))) || (var_0 && var_13)))) : (((!(arr_16 [i_9] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0]))))));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_43 = var_16;
                        var_44 -= ((!(39277 || var_8)));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_45 = ((+(((arr_0 [i_3 - 3]) ? (arr_9 [i_1] [i_1] [i_2] [i_3 + 3]) : (arr_6 [i_1] [i_1] [i_3 + 3])))));
                        var_46 = ((~(((!(~var_2))))));
                    }
                }
                /* vectorizable */
                for (int i_12 = 3; i_12 < 6;i_12 += 1) /* same iter space */
                {
                    var_47 = (!2047);
                    var_48 = (((arr_23 [i_1] [i_1] [i_1] [i_1] [i_12] [4] [i_12]) ? (arr_24 [i_12 - 1] [i_12 + 4]) : (~var_14)));

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_49 = (min(var_49, (-1693163093 & 1)));
                        var_50 = (((arr_28 [i_0] [i_1] [i_2] [i_2] [i_13]) ^ -1693163090));
                        var_51 = ((-10779 ? 1 : 4221744340));
                    }
                    for (int i_14 = 4; i_14 < 6;i_14 += 1)
                    {
                        var_52 = (!768);
                        var_53 = (min(var_53, (arr_8 [i_2] [i_14 - 2] [i_2])));
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_54 = (max(var_54, (((var_2 % (~var_0))))));
                        var_55 = (((var_10 | (arr_26 [i_0] [i_0] [i_0] [i_0] [i_1]))));
                    }
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_56 = (((var_8 * var_13) >= var_16));
                        var_57 = -var_7;
                        var_58 = (((arr_44 [i_16] [i_1] [i_16] [i_16] [i_12 + 1] [i_1] [i_1]) ? var_1 : (arr_9 [i_1] [i_12] [i_12 + 1] [i_1])));
                    }
                    var_59 = (((((var_3 ? (arr_35 [i_1]) : var_6))) ? ((((arr_4 [i_0]) ? var_16 : (arr_9 [i_1] [i_1] [i_2] [i_12 - 1])))) : (var_5 * var_13)));
                    var_60 = (i_1 % 2 == zero) ? (((((arr_30 [i_0] [i_1] [i_2] [i_12] [i_2]) ? (arr_28 [i_0] [i_1] [i_1] [i_2] [i_12]) : var_5)) >> (((arr_20 [i_12 + 2] [i_12] [i_1] [i_1] [i_12 - 2] [i_1]) - 2799749055)))) : (((((arr_30 [i_0] [i_1] [i_2] [i_12] [i_2]) ? (arr_28 [i_0] [i_1] [i_1] [i_2] [i_12]) : var_5)) >> (((((arr_20 [i_12 + 2] [i_12] [i_1] [i_1] [i_12 - 2] [i_1]) - 2799749055)) - 2526012566))));
                }
                /* vectorizable */
                for (int i_17 = 3; i_17 < 6;i_17 += 1) /* same iter space */
                {
                    var_61 = (((1 ^ -6770305212592193726) ? 52943 : (arr_48 [i_1] [i_1] [i_2] [i_2])));
                    var_62 = ((arr_39 [i_1] [i_2] [i_1]) && (arr_39 [i_1] [i_1] [i_17 - 1]));
                }
            }
            var_63 = (max((min(1, (((arr_24 [i_0] [i_1]) * (arr_42 [i_1]))))), (arr_18 [i_1])));
            var_64 = ((((var_14 ? ((var_8 ? (arr_17 [i_0] [i_1] [i_1] [3] [i_0] [i_1]) : var_14)) : var_2)) > ((((arr_6 [i_1] [i_1] [i_1]) / (arr_6 [i_1] [i_0] [i_1]))))));
        }
    }
    var_65 = ((((var_7 | 1) ? (1 | 1) : (var_12 | var_15))) < (!var_4));
    var_66 = ((var_6 != ((~((min(var_0, var_14)))))));
    #pragma endscop
}
