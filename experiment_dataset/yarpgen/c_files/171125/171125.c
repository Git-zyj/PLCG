/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_12 |= (((arr_0 [6] [i_0 + 2]) - (((arr_0 [8] [i_0 - 1]) ? var_7 : (arr_0 [2] [i_0 - 2])))));
        var_13 = (max(0, 123624174));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_14 = var_8;

        /* vectorizable */
        for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                {
                    var_15 = var_11;
                    var_16 = ((0 ? -99 : 123624174));
                    var_17 = var_9;
                }
                for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (((var_10 & (arr_1 [i_1] [i_2]))))));
                    var_19 = 123624180;
                }
                var_20 = (min(var_20, (((-(((20 == (arr_2 [i_2])))))))));
                var_21 = (((arr_2 [i_1]) ? var_5 : var_7));

                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    var_22 = (max(var_22, (((var_11 ? 1 : var_5)))));
                    var_23 = (!1);
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_24 = (min(var_24, ((((((-2147483647 - 1) & var_6)) | (arr_18 [i_1 - 1] [i_2] [i_1 - 1] [i_7 - 1]))))));
                    var_25 = (max(var_25, (~var_2)));
                }
                var_26 = (min(var_26, (-8367767551713834950 * 9570630261971369206)));
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                var_27 += (~-123624174);
                var_28 = (((arr_12 [i_2] [i_2 - 2] [i_1 - 2] [i_8 - 1]) & ((var_9 ? var_8 : (arr_12 [i_1 - 2] [i_2 + 3] [i_2 - 1] [i_8])))));
                var_29 = (arr_16 [i_2] [i_2 + 3] [i_8] [i_8 + 1]);
            }
            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                var_30 = var_10;
                var_31 = ((~(arr_3 [i_2 - 1] [i_2 - 1])));
            }
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                var_32 = (((arr_15 [i_1 - 2] [i_1]) | (902288362683368204 >= -22)));
                var_33 = (arr_21 [i_1] [i_2]);
            }
            var_34 = (((arr_23 [i_1 + 2]) < 40809));
            var_35 = (!var_5);
        }
        for (int i_11 = 2; i_11 < 7;i_11 += 1) /* same iter space */
        {
            var_36 = ((1 ? 1 : 123624174));

            for (int i_12 = 3; i_12 < 10;i_12 += 1)
            {

                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    var_37 -= (((var_2 * var_1) ^ -var_7));
                    var_38 = min((-1 != 1585912422), -2147483622);
                    var_39 &= (arr_15 [10] [i_11]);
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {

                    for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
                    {
                        var_40 = (arr_16 [i_1] [i_11] [i_12 - 3] [i_14 + 1]);
                        var_41 = var_3;
                        var_42 = -var_1;
                        var_43 = (~1);
                    }
                    for (int i_16 = 2; i_16 < 10;i_16 += 1) /* same iter space */
                    {
                        var_44 = var_2;
                        var_45 = (((var_10 || -123624177) || (arr_17 [i_1] [i_16 + 1] [i_12 - 1] [i_12 - 1] [i_1])));
                    }
                    var_46 = arr_34 [i_1 - 2] [10] [i_12] [i_14 + 1];
                    var_47 = 1;
                    var_48 *= var_5;
                }
                var_49 = (max(var_49, (((((min((arr_13 [i_1 - 1] [i_12 - 2] [0]), 30))) ? (arr_18 [i_12] [i_12 - 3] [i_12] [i_12 - 3]) : (((arr_6 [i_1 + 1]) ? 3131992228 : var_8)))))));
            }
            for (int i_17 = 1; i_17 < 10;i_17 += 1)
            {
                var_50 = (((-((max(1, var_9))))) / (77325624 > 117));
                var_51 = min((-1514221462354703898 && 1), 0);
                var_52 = (arr_35 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1 - 2]);
            }
            var_53 = (var_10 >= 9570630261971369206);
        }
        for (int i_18 = 2; i_18 < 7;i_18 += 1) /* same iter space */
        {
            var_54 = (((((arr_36 [2] [i_18] [i_1]) < (!3449284009814747837))) ? (((~((var_9 ? 65525 : var_8))))) : (-109 - 1085145338)));
            var_55 = ((-((var_5 ? -73 : (-32767 - 1)))));
        }
        for (int i_19 = 2; i_19 < 7;i_19 += 1) /* same iter space */
        {
            var_56 = (min((((var_11 || (arr_33 [i_1 - 1] [6] [i_19 - 1] [i_1])))), 123624187));
            var_57 = ((~(arr_16 [i_1] [i_1] [i_1] [5])));

            /* vectorizable */
            for (int i_20 = 4; i_20 < 9;i_20 += 1)
            {
                var_58 = var_0;
                var_59 |= (-123624175 / -18552);
            }
            for (int i_21 = 2; i_21 < 10;i_21 += 1)
            {
                var_60 = (-2147483647 - 1);
                var_61 -= ((-(!var_1)));
                var_62 += max(var_3, (2147483647 != -123624175));
                var_63 = (((((0 ? 1 : -123624174))) ? (((var_11 | (arr_10 [i_19 + 3] [i_1] [i_21 - 2] [i_19 + 3])))) : -3827020683));
                var_64 = 6974631051900609309;
            }
        }
    }
    for (int i_22 = 3; i_22 < 10;i_22 += 1)
    {
        var_65 = (min(var_65, (((!((min(0, 8876113811738182409))))))));
        var_66 = ((((((var_6 ? (arr_53 [i_22] [i_22]) : 1))) <= 11472113021808942301)));
    }
    for (int i_23 = 1; i_23 < 23;i_23 += 1)
    {
        var_67 = (max(var_67, (arr_56 [i_23] [i_23])));
        var_68 = (arr_56 [i_23] [i_23 + 2]);
        var_69 = (((max(var_3, (arr_55 [i_23] [i_23]))) ^ (((17023528777301152903 ? 123624174 : 15289)))));
        var_70 = var_5;
    }

    /* vectorizable */
    for (int i_24 = 2; i_24 < 15;i_24 += 1) /* same iter space */
    {
        var_71 += ((!(arr_57 [i_24 - 1])));
        var_72 = ((var_6 ? ((5895844093143632662 ? (arr_1 [i_24 - 2] [i_24 - 2]) : var_3)) : var_0));
        var_73 = (arr_57 [i_24]);
    }
    for (int i_25 = 2; i_25 < 15;i_25 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_26 = 2; i_26 < 14;i_26 += 1)
        {
            var_74 = (min(var_74, (((((((((arr_0 [i_25] [i_26 + 1]) + 2147483647)) >> (((arr_61 [i_25] [i_25]) - 14257))))) || (3404012661 >> 1))))));
            var_75 += ((var_0 > (arr_57 [i_26 + 2])));

            for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
            {

                for (int i_28 = 3; i_28 < 15;i_28 += 1)
                {
                    var_76 = ((((((arr_57 [i_25]) % var_4))) ? var_0 : (arr_59 [i_25 + 1])));
                    var_77 = -56626;
                }
                var_78 = 3404012672;
            }
            for (int i_29 = 0; i_29 < 1;i_29 += 1) /* same iter space */
            {
                var_79 &= ((var_1 / (arr_59 [i_25 - 2])));
                var_80 = (arr_62 [i_25] [i_25]);
                var_81 = (((arr_0 [i_25] [i_26 + 2]) ? (arr_70 [i_25 + 1]) : 11472113021808942289));
            }
            var_82 &= ((2147483647 || var_5) == (arr_55 [i_25 - 1] [i_26]));
        }
        var_83 = 80;
        var_84 = (arr_67 [i_25] [i_25] [i_25] [i_25]);
        var_85 -= (49 * var_10);
        var_86 = var_5;
    }
    for (int i_30 = 3; i_30 < 11;i_30 += 1) /* same iter space */
    {
        var_87 = var_9;
        var_88 = ((!(!var_11)));
    }
    for (int i_31 = 3; i_31 < 11;i_31 += 1) /* same iter space */
    {
        var_89 = var_5;
        var_90 = (max(1982123301, ((63793 ? 3560596681885122593 : 1367955231))));
    }
    #pragma endscop
}
