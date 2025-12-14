/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = ((min((((var_7 ? var_8 : var_1))), (var_0 + var_4))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
            {
                arr_7 [i_0] [i_0] [i_0] = (((var_8 >= var_3) | (arr_5 [i_2] [i_2] [i_2] [i_2])));

                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_12 -= (var_6 == var_9);
                    var_13 = (!var_8);
                    var_14 ^= var_0;
                }
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_15 = (var_7 || (((var_0 ? 1791757027 : (arr_4 [i_0])))));
                        arr_14 [i_0] [i_1] [i_4] [i_4 + 2] [i_5] = ((var_5 ? (var_5 >= var_2) : (var_7 || var_3)));
                        var_16 = (!var_2);
                    }
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        var_17 = ((-((var_0 ? var_8 : (arr_10 [11] [i_1 + 3] [i_2 + 3] [i_4] [i_4] [i_6 - 1])))));
                        var_18 ^= (~15390907159637712878);
                    }
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        arr_20 [i_1 + 1] [i_4] [i_4] [i_1 + 1] [i_0] = (var_2 > (arr_2 [i_1 + 2] [i_2 + 3] [i_4 + 2]));
                        var_19 = ((!(var_3 * 1932505436)));
                        var_20 = (!(arr_13 [i_0] [i_1] [i_2] [i_2 + 1] [i_7 + 3]));
                        var_21 = (!var_3);
                    }
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_22 += (((arr_23 [i_2] [i_1] [i_2]) - (arr_23 [i_2] [i_2] [i_2])));
                        var_23 = var_3;
                        var_24 = (var_7 != var_9);
                    }
                    arr_24 [i_4] [i_1 + 3] [i_1] [i_1 + 3] [i_4] = (!var_0);
                    arr_25 [i_1] [i_4] [i_4] = var_9;
                }
                arr_26 [i_0] [i_1] [i_1 - 1] [i_2] = (var_4 < var_6);
            }
            /* vectorizable */
            for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_25 = ((arr_0 [i_9 + 4]) != ((var_7 ? var_1 : var_5)));
                var_26 = ((~((var_8 ^ (arr_1 [i_9] [i_0])))));
                arr_29 [i_0] [i_1] [i_9] [i_1] = (~111);
                var_27 = (max(var_27, -var_0));
                var_28 -= (!var_4);
            }
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_37 [i_0] [i_0] [i_12] [i_0] [i_0] = ((~((((var_5 % (arr_8 [i_0]))) - ((((arr_19 [i_12 - 1] [i_0] [i_11] [i_12] [11] [i_0] [i_0]) && var_1)))))));
                            var_29 -= (min((0 - var_9), (min(var_1, (arr_10 [i_10 - 1] [i_10] [i_10] [i_10 - 2] [i_10] [i_12 - 1])))));
                            arr_38 [i_12] = ((40333 ? (!1) : var_4));
                        }
                    }
                }
            }
            var_30 = (((~(var_0 >= var_4))));
            var_31 = (arr_36 [4] [4] [i_0] [i_1 + 3] [i_1 + 3] [i_0] [i_1]);
        }
        for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_32 = var_8;
            var_33 = var_5;
        }
        var_34 = (((((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) + var_5))) + -var_8))) ? (((!(arr_33 [i_0] [i_0] [i_0] [i_0])))) : -var_7));
        arr_41 [i_0] = (!31427);
        var_35 ^= ((-(!var_4)));
    }
    for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
    {
        var_36 = (max(var_36, (((var_7 <= ((min((arr_15 [i_14 + 1] [i_14] [i_14] [i_14 - 1] [i_14]), var_4))))))));
        arr_44 [i_14 - 1] = ((((max((arr_19 [i_14] [i_14 - 1] [i_14 - 1] [2] [i_14 - 1] [i_14] [i_14]), (arr_27 [i_14 + 1])))) ? (((((var_5 ? var_7 : (arr_28 [i_14 - 1] [i_14] [i_14] [i_14])))) ? var_2 : (arr_40 [2] [i_14]))) : ((-(arr_35 [i_14] [i_14] [i_14] [i_14] [i_14 + 1])))));
    }
    for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {

            /* vectorizable */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_37 -= ((!(1 < 1)));
                    var_38 = (max(var_38, ((((arr_49 [i_15] [i_16] [i_18]) ? (((!(arr_15 [10] [i_16] [10] [i_17] [10])))) : var_1)))));
                    var_39 = var_2;
                    var_40 = var_4;
                    arr_56 [i_17] = (+-1);
                }
                for (int i_19 = 2; i_19 < 12;i_19 += 1) /* same iter space */
                {

                    for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
                    {
                        var_41 ^= var_4;
                        var_42 += ((57723 ? 1 : -8052429845739237698));
                        var_43 = (~var_1);
                    }
                    for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
                    {
                        arr_63 [i_17] [i_17] [i_17] [i_17] [i_17] = var_2;
                        arr_64 [i_15] [i_15] [i_15] [i_15 - 1] [i_16] [i_15] |= var_1;
                        var_44 -= var_2;
                    }
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        arr_67 [i_17] [i_19 - 2] [i_17] [i_17] [i_17] = ((~(arr_18 [i_22] [i_17])));
                        arr_68 [i_15] [i_19] [i_19] [i_17] = (((~var_5) ? (~var_8) : (((var_6 >> (11308532527653066445 - 11308532527653066433))))));
                        var_45 = (~1);
                        var_46 += -var_9;
                    }
                    var_47 = (arr_23 [i_17] [i_19 - 2] [i_19 - 2]);
                    var_48 = (max(var_48, (arr_49 [i_15 - 1] [i_19 - 1] [i_19 + 1])));
                }
                for (int i_23 = 2; i_23 < 12;i_23 += 1) /* same iter space */
                {

                    for (int i_24 = 0; i_24 < 13;i_24 += 1)
                    {
                        var_49 = (max(var_49, (!var_1)));
                        arr_75 [i_17] [i_23] [i_16] [i_16] [i_17] = var_8;
                        var_50 = (((var_3 | (arr_47 [i_16]))));
                    }

                    for (int i_25 = 0; i_25 < 13;i_25 += 1)
                    {
                        var_51 *= ((var_4 | ((-(arr_43 [i_25] [i_25])))));
                        var_52 = (min(var_52, var_7));
                    }
                    for (int i_26 = 4; i_26 < 12;i_26 += 1)
                    {
                        var_53 = var_7;
                        var_54 = (arr_15 [i_15] [i_15] [1] [i_15] [i_15 + 1]);
                    }
                    arr_80 [i_15] [i_15] [i_17] [i_17] [i_23 - 2] = var_0;
                }
                for (int i_27 = 0; i_27 < 13;i_27 += 1)
                {
                    arr_83 [i_15 - 1] [i_17] [i_27] = (((arr_77 [i_15 - 1] [i_16] [i_17]) | (var_4 * var_2)));

                    for (int i_28 = 1; i_28 < 1;i_28 += 1)
                    {
                        var_55 = var_5;
                        var_56 = ((-((~(arr_78 [i_15] [i_16] [i_17])))));
                        var_57 = ((var_9 == ((var_5 ? (arr_61 [i_17] [i_16]) : var_1))));
                        var_58 = ((-((8927309488104924070 ? 59408 : 4495391106049925149))));
                    }
                    var_59 += ((59401 ? var_5 : -1682458943));
                    arr_86 [i_17] [i_16] [i_17] [i_16] [i_16] [i_15 - 1] |= var_4;
                }
                var_60 = var_0;
                arr_87 [i_17] = (((arr_51 [i_15 + 1] [i_17]) ? (var_1 | var_0) : (((31111 ? 0 : -8565699391081705809)))));
                var_61 += (arr_0 [i_15 - 1]);

                for (int i_29 = 4; i_29 < 11;i_29 += 1)
                {
                    arr_91 [i_15] [i_17] = var_5;
                    arr_92 [i_17] [i_16] [i_17] = (((var_9 - var_1) ? (((arr_77 [i_16] [i_17] [i_17]) / var_9)) : -var_3));
                    var_62 += (((arr_36 [i_16] [i_16] [14] [i_17] [i_17] [i_29] [i_29]) | (arr_3 [i_29 + 1])));
                }
            }
            var_63 += ((((((var_3 + (arr_39 [i_15] [i_16])) < (!var_7))))));

            /* vectorizable */
            for (int i_30 = 1; i_30 < 10;i_30 += 1)
            {
                arr_96 [i_30] [i_15] [i_15] = (-81 && -1376445038);
                var_64 = (arr_33 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1]);
            }
            for (int i_31 = 0; i_31 < 13;i_31 += 1) /* same iter space */
            {
                var_65 = ((((~(~var_3)))) <= (arr_15 [i_31] [i_31] [i_16] [i_15] [i_15]));
                var_66 ^= (((arr_72 [i_15] [i_16] [i_15 - 1] [i_15 - 1] [i_15 - 1]) % (34088 * 107899999)));
            }
            for (int i_32 = 0; i_32 < 13;i_32 += 1) /* same iter space */
            {
                var_67 = ((((7138211546056485170 ? 18446744073709551607 : 65521)) >= (~var_9)));
                var_68 = ((512 <= (arr_2 [i_15] [i_15 - 1] [i_15])));
            }
        }
        var_69 = (--30);

        for (int i_33 = 1; i_33 < 1;i_33 += 1)
        {
            var_70 = (min(var_70, (((!((max(var_2, 9))))))));
            arr_104 [i_15] [i_33] [i_15] = (var_3 <= (!13517983444704479684));
        }
    }
    var_71 = -var_2;
    #pragma endscop
}
