/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 -= (!212);
        var_20 += (max(var_18, (min((((arr_2 [i_0]) | 17423658599468536493)), var_1))));
    }
    var_21 ^= ((((var_14 == (722034991 & var_5)))));

    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_22 = (max(var_22, (arr_3 [i_1] [i_1])));
        var_23 = (max(var_23, ((((arr_4 [i_1]) == var_1)))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_24 = (max(var_24, (722034991 ^ -8625024243739869965)));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_25 |= ((18446744073709551615 ? 2741370994 : ((((arr_5 [i_2]) + 1)))));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_26 -= (-8 - 2741370993);
                    var_27 += (((arr_13 [12] [i_3] [12] [i_5 - 1] [i_2] [i_4]) ? 2741371002 : (((arr_14 [i_2] [i_3] [i_4] [i_5]) | 3))));
                }
                for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, 6));
                    var_29 |= var_0;
                    var_30 *= (16855 % var_5);

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_31 += (((arr_16 [i_4] [i_4] [i_6 + 3] [i_6] [i_7]) || (!15511)));
                        var_32 ^= (!var_9);
                        var_33 ^= ((((var_15 ? (arr_15 [i_2] [8]) : 3572932304)) - (arr_11 [i_6 - 1])));
                        var_34 = (min(var_34, 6));
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        var_35 += var_16;
                        var_36 -= 3952026859;
                        var_37 &= (!3572932290);
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_38 = (max(var_38, (((var_5 >= (((arr_26 [18] [i_3] [i_4] [10] [i_4]) & -9)))))));
                        var_39 = (min(var_39, (((var_18 ? var_0 : var_5)))));
                    }
                    var_40 = (max(var_40, (((var_16 | (arr_24 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 3] [i_6 + 2] [i_6]))))));
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_41 *= ((((((arr_12 [i_2] [i_3] [i_2] [i_10]) + 15120420096141854593))) && (3572932304 | var_18)));
                    var_42 &= (!14212);
                    var_43 = (max(var_43, (((var_14 ^ (var_5 >> var_16))))));
                    var_44 |= var_7;
                }
                var_45 -= (arr_9 [i_2] [i_2] [14]);
                var_46 ^= ((-14225 >= (arr_8 [i_2] [i_2])));
                var_47 = (((arr_25 [i_2] [2] [i_2] [1] [2] [i_4] [i_4]) ? (arr_25 [1] [6] [i_4] [10] [i_4] [i_4] [i_4]) : var_10));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_48 &= 722034980;
                    var_49 = (max(var_49, ((((~-14236) <= (var_1 < 11142283126447680110))))));
                    var_50 ^= (arr_12 [i_12] [i_12] [17] [i_12]);
                    var_51 *= (7304460947261871491 - 7957);
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_52 &= 13;

                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        var_53 ^= ((!var_4) * (arr_4 [i_13]));
                        var_54 |= (((-9223372036854775807 - 1) && (arr_32 [i_13] [i_13] [i_11] [i_13])));
                        var_55 = (min(var_55, 722035020));
                        var_56 -= ((var_18 ? ((2104497537 ? var_15 : var_6)) : (!var_18)));
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_57 = (min(var_57, 722035020));
                        var_58 = (min(var_58, var_4));
                        var_59 -= (arr_36 [i_2] [i_2]);
                        var_60 = (min(var_60, (!171)));
                        var_61 -= -14220;
                    }

                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        var_62 += var_1;
                        var_63 = (min(var_63, var_5));
                        var_64 *= (14236 % (arr_32 [i_2] [i_3] [i_3] [14]));
                        var_65 |= var_11;
                    }
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_66 = (min(var_66, 170));
                        var_67 |= (((arr_13 [i_2] [i_2] [0] [i_2] [i_2] [i_2]) - 1553596302));
                    }
                }

                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    var_68 = (min(var_68, (var_11 != var_15)));

                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        var_69 ^= (arr_32 [i_2] [i_2] [i_11] [12]);
                        var_70 = (max(var_70, var_7));
                    }
                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        var_71 = (max(var_71, (((!((var_2 < (arr_7 [i_18] [i_20]))))))));
                        var_72 &= (((arr_22 [i_2] [i_20] [i_11] [i_18] [i_20]) < (arr_6 [i_20])));
                        var_73 -= ((var_9 ? 313397427225775946 : (arr_31 [i_2] [i_18] [i_2])));
                        var_74 ^= ((95 / ((var_13 | (arr_53 [i_2] [i_2] [i_2] [i_20] [i_20] [i_20])))));
                    }
                    var_75 = (max(var_75, ((((arr_26 [20] [10] [i_2] [i_18] [i_18]) ? var_15 : var_15)))));
                }
            }
            var_76 &= arr_52 [i_2] [i_2] [i_3] [i_3];
            var_77 += var_10;
            var_78 += (-19552 < 7304460947261871505);
        }
    }
    #pragma endscop
}
