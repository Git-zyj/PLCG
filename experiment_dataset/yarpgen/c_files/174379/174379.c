/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] [1] [18] [i_3] [1] = -var_13;
                            arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = (106 ? 136 : 27132);
                        }
                    }
                }
            }
            arr_15 [i_0] = ((min(17242061094408424733, 529887083)));
            arr_16 [i_0] [0] [i_1] |= ((~((var_7 ? (~var_13) : ((var_4 ? var_16 : var_7))))));
        }
        var_17 = (min((min(150, 741106272)), 17242061094408424733));
        var_18 = 1204682979301126883;

        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            arr_19 [i_0] [i_0] = (max((max(var_8, var_11)), (((max(var_3, var_5))))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_5 - 4] [i_6] [i_7] [i_8] [1] = (((((-125 ? 3062119746604036766 : 6066918682036736642)))));
                            arr_31 [i_6] [i_5] [i_0] [i_7] [i_7] [i_5] [i_6] = min(((var_1 ? var_12 : ((max(var_1, var_10))))), (min(((max(var_2, var_15))), -var_7)));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_6 / var_3) ? var_7 : (var_14 && var_14));
                            arr_33 [i_0] [i_5 + 2] [10] [i_7] [i_5 + 2] &= ((max(4542799154296698485, -1189289636)));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_19 = (~1050866663704618628);
                var_20 = (min(var_20, ((((150 ? (~var_7) : (((min(var_12, var_8)))))) == var_6))));

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_21 = (!var_9);
                    var_22 = (!((((((var_6 ? var_10 : var_3))) ? var_3 : (var_8 == var_9)))));
                    arr_43 [i_0] [i_0] [i_10] [i_11] [i_11] [i_11] = ((((((var_3 ? var_15 : var_5)) ? var_1 : var_11))));
                }

                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    var_23 = 2143289344;
                    var_24 = var_14;
                }
            }
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    var_25 = (max(1880381747344305178, 15384624327105514864));
                    arr_54 [i_0] [i_0] [i_0] [i_14] = var_12;

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_26 = var_1;
                        var_27 *= ((~(max(58178, -36306348))));
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        arr_61 [i_0] [i_0] [15] [i_13] [i_14] [8] = (var_0 & var_9);
                        arr_62 [1] |= (18446744073709551615 / 970);
                    }
                }
                for (int i_17 = 1; i_17 < 18;i_17 += 1)
                {
                    arr_66 [18] [i_9] [i_13 - 1] [14] |= ((max(var_15, var_15)));
                    var_28 = -102;
                    arr_67 [6] [i_0] [i_0] [i_0] = (((1486575965 <= 45620) ? (var_1 != var_0) : ((((var_8 ^ var_1) == var_15)))));
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
                    {
                        var_29 = ((-((63 ? ((min(137, 9267))) : 65523))));
                        var_30 *= (!var_0);
                        var_31 = ((-2147483620 ? -112 : -4));
                    }
                    for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
                    {
                        var_32 = var_0;
                        var_33 = (((!var_4) ? var_2 : (((min(var_0, var_2)) | var_6))));
                        arr_76 [i_20] [i_9] [i_13 - 2] [i_18] [i_0] = var_0;
                        var_34 = (min(var_34, ((65507 - ((min(26615, 0)))))));
                        var_35 = (max(var_35, 150));
                    }
                    for (int i_21 = 1; i_21 < 18;i_21 += 1)
                    {
                        arr_80 [i_0] = ((!((max(var_1, var_15)))));
                        arr_81 [i_0] [i_0] [i_13] [i_18] [10] = var_9;
                    }
                    arr_82 [i_0] [i_0] [i_0] [i_18] = (((((var_12 ? ((var_3 ? var_6 : var_16)) : var_14))) || (((var_0 ? var_7 : ((var_11 ? var_7 : var_12)))))));
                }

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    arr_86 [i_0] [i_0] [i_0] [i_9] [i_13] [i_0] = (((120 > (-127 - 1))));

                    for (int i_23 = 2; i_23 < 17;i_23 += 1)
                    {
                        var_36 = min(1050866663704618628, ((min(var_4, 15384624327105514872))));
                        var_37 = (((var_4 | (!var_11))));
                    }
                    for (int i_24 = 0; i_24 < 19;i_24 += 1) /* same iter space */
                    {
                        arr_92 [i_0] [i_0] [0] [i_22] [i_24] |= (var_1 >= var_13);
                        var_38 = var_0;
                        arr_93 [i_0] [i_0] [17] [i_13] [17] [i_22] [17] = ((~(var_0 | -var_1)));
                    }
                    for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
                    {
                        arr_97 [i_0] [i_0] [i_9] [i_13] [i_22] [1] = max((var_14 ^ var_2), var_15);
                        var_39 ^= ((((((var_0 ? var_4 : var_16)))) * (min(((var_11 ? var_16 : var_12)), var_13))));
                    }
                    var_40 = (!var_16);
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 19;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        {
                            arr_104 [i_27] [6] [i_0] [i_0] [i_9] [i_0] = (((((-(max(var_1, var_7))))) ? (((var_15 * (var_2 - var_2)))) : (((var_14 - var_9) - var_1))));
                            var_41 = ((((var_12 ? var_4 : var_10))));
                            var_42 = (((min(58178, (-2147483647 - 1)))));
                            arr_105 [i_0] [i_9] [i_13] [i_26] [i_0] = ((((((max(var_6, var_8))) * 0)) == (min((var_7 >= var_2), -var_13))));
                        }
                    }
                }
                arr_106 [i_9] [i_0] [i_9] = var_4;

                for (int i_28 = 0; i_28 < 19;i_28 += 1)
                {
                    arr_109 [i_0] [i_9] [i_13] [i_0] = 7335;
                    arr_110 [i_28] [i_0] [i_0] [2] = var_0;
                }
            }
            arr_111 [i_9] [i_9] [12] |= (1050866663704618628 + 268435455);
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 19;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 19;i_30 += 1)
                {
                    {
                        arr_117 [i_30] [i_0] [i_0] [i_0] = ((-(max(((var_10 ? var_15 : var_13)), 6066918682036736647))));
                        var_43 = var_15;
                    }
                }
            }
        }
        for (int i_31 = 0; i_31 < 19;i_31 += 1)
        {
            var_44 ^= ((min(var_2, var_1)));
            /* LoopNest 2 */
            for (int i_32 = 0; i_32 < 19;i_32 += 1)
            {
                for (int i_33 = 2; i_33 < 17;i_33 += 1)
                {
                    {
                        arr_127 [i_32] [i_0] [i_32] [i_33 - 1] [i_0] = (!-36306356);
                        arr_128 [i_32] [i_32] [i_0] [3] = (11708 % 9182);
                        arr_129 [i_0] [i_0] [i_0] [i_33 - 2] = (~((max(var_11, (!var_12)))));
                    }
                }
            }
        }
        for (int i_34 = 1; i_34 < 17;i_34 += 1)
        {
            var_45 ^= ((!(~var_2)));
            arr_134 [i_34] [i_34] [i_0] = ((-(var_11 * var_7)));
            var_46 *= var_2;
            var_47 -= ((max(var_13, 242)));
        }
        arr_135 [i_0] = ((~(((min(var_0, var_4))))));
    }
    for (int i_35 = 0; i_35 < 19;i_35 += 1) /* same iter space */
    {
        var_48 += (max(var_6, (((var_8 ? var_3 : var_11)))));
        var_49 = (max(268435455, 1));
        var_50 ^= min(var_13, var_13);
        /* LoopNest 3 */
        for (int i_36 = 0; i_36 < 19;i_36 += 1)
        {
            for (int i_37 = 0; i_37 < 19;i_37 += 1)
            {
                for (int i_38 = 2; i_38 < 18;i_38 += 1)
                {
                    {
                        arr_146 [i_37] [i_38] [i_37] |= (min(9, var_13));
                        var_51 = (min(var_51, ((max(((((((var_10 ? var_11 : var_1))) || (((24576 ? -13559 : 17242061094408424742)))))), var_15)))));
                        arr_147 [i_38] [i_36] [i_36] [3] = (min(33, (max(var_7, var_4))));

                        for (int i_39 = 1; i_39 < 17;i_39 += 1)
                        {
                            var_52 *= (~-1508652708);
                            var_53 = -var_15;
                        }
                        for (int i_40 = 1; i_40 < 16;i_40 += 1)
                        {
                            var_54 = ((max(var_5, (var_3 || 1204682979301126874))));
                            arr_154 [10] [i_38] [10] [i_38] [4] [4] [4] |= ((((max(var_9, var_7))) ? var_6 : 1204682979301126873));
                        }
                        arr_155 [15] [i_36] [i_35] [i_36] [i_35] = max(var_14, ((((var_0 ? var_3 : var_8)))));
                    }
                }
            }
        }
        var_55 = (((((max(2770430337, 240))) ? 30 : var_9)));
    }
    var_56 = (min(var_56, (((var_6 ? ((min(var_16, var_5))) : var_15)))));
    #pragma endscop
}
