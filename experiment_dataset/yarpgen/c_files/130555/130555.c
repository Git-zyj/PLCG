/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 ? var_16 : var_13));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = var_3;
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0]) ? var_7 : ((var_9 ? var_14 : (arr_1 [i_0])))))) ? (max(8, 15731659032683558068)) : (541165879296 != 10477500806169078152)));
        var_19 = ((-((((((!(arr_2 [i_0] [12])))) == var_8)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = var_7;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 ^= (((arr_5 [i_1]) >> (arr_11 [i_4] [i_4] [i_4 - 2] [i_4] [i_4] [5])));
                        var_22 = ((((!(((var_10 ? 1920 : (arr_5 [i_2]))))))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_23 = ((((((arr_13 [1] [1] [i_1]) * (((-127 - 1) / var_6))))) ? (((var_5 ? var_6 : var_13))) : (arr_6 [3] [i_1] [i_6])));

                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    var_24 = ((((!(arr_15 [i_1] [i_1] [i_6]))) ? ((~(arr_15 [i_5] [i_1] [i_7]))) : ((max((arr_20 [i_6] [i_5] [i_1]), var_2)))));
                    arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((var_14 ? var_0 : (arr_20 [6] [13] [i_1]))), (((arr_20 [i_5] [i_5] [i_5]) ^ var_2))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_25 ^= arr_8 [i_6] [2] [i_9];
                        var_26 ^= var_4;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        arr_32 [4] [i_5] [i_10] [2] [0] |= ((arr_30 [i_10] [i_5] [i_6] [i_8] [8]) ? (arr_30 [i_10] [i_6] [i_6] [i_6] [i_6]) : (arr_30 [i_10] [i_5] [i_6] [i_8] [i_10]));
                        var_27 -= ((((arr_2 [i_8] [i_10]) ? (arr_0 [1]) : var_7)));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_1] [11] [i_8] [i_1] = ((((((arr_34 [i_1] [i_5] [i_6] [i_1] [i_1]) && (arr_10 [i_1] [i_6] [i_8])))) / var_10));
                        var_28 = var_5;
                    }
                    var_29 = var_12;
                    var_30 += (((var_2 ? var_10 : (arr_24 [0] [0] [1] [i_8]))));
                    var_31 = ((((((arr_21 [i_1]) ? (arr_2 [i_1] [i_1]) : var_13))) && (arr_27 [i_1] [i_1] [i_5] [i_6] [10])));
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    arr_38 [i_1] = ((~(~-168851732)));
                    var_32 |= (((var_3 ? (arr_10 [1] [1] [19]) : var_12)));
                    var_33 += (((arr_13 [i_1] [i_5] [i_12]) ? (((arr_13 [i_1] [i_6] [i_12]) ? (arr_13 [i_1] [i_5] [8]) : (arr_13 [i_12] [i_5] [i_1]))) : (arr_13 [i_6] [i_5] [i_6])));
                }
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {
                arr_41 [i_1] = (min((arr_9 [i_1] [11] [i_1]), (((arr_24 [i_1] [i_1] [i_5] [i_13]) ? (var_0 >= var_2) : ((var_0 ^ (arr_29 [i_1] [i_5] [i_5] [i_1] [i_13])))))));

                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    arr_45 [i_1] [i_1] = (var_14 | var_7);
                    var_34 = (max(var_34, ((((arr_0 [i_13]) ? var_8 : (((var_1 >= (arr_34 [i_14] [12] [i_14] [i_14] [12])))))))));
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    arr_49 [i_1] [i_5] [i_1] [3] = var_15;
                    var_35 = (min((((((-1924 ? 9007182074871808 : 1937))) ? (!var_7) : var_15)), ((var_5 ? (arr_20 [i_1] [i_5] [i_13]) : (arr_20 [i_5] [i_13] [i_15])))));

                    for (int i_16 = 3; i_16 < 18;i_16 += 1)
                    {
                        var_36 = ((var_10 ? (((arr_26 [18] [10] [i_13] [i_16 + 1] [i_16 + 1]) ? (arr_34 [i_1] [i_16 - 2] [i_13] [i_1] [i_15]) : (arr_11 [i_1] [15] [1] [1] [i_15] [i_15]))) : ((((arr_23 [4] [i_1] [i_13] [4] [i_16 - 3]) || (arr_25 [i_16 + 2] [1]))))));
                        var_37 = (min(var_37, ((max(-116, 1945)))));
                        var_38 += ((min(((((arr_51 [i_1] [i_15]) > (arr_2 [i_15] [i_15])))), (arr_44 [i_16 - 2] [11] [i_15] [i_13] [i_1] [i_1]))));
                        var_39 = (arr_30 [i_1] [i_16] [i_16] [i_16] [i_16 + 2]);
                    }
                    arr_53 [i_1] [i_1] [10] [14] = ((var_16 % ((~(var_2 + var_11)))));
                }
                var_40 = (min(var_40, (((((((arr_8 [i_1] [i_5] [1]) << (((!(arr_15 [i_1] [1] [1]))))))) == (arr_1 [9]))))));
                var_41 = ((((var_15 ? var_11 : var_8)) * (arr_19 [i_1] [i_5] [i_13] [i_5] [i_13] [i_1])));
            }
            for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
            {

                for (int i_18 = 3; i_18 < 18;i_18 += 1) /* same iter space */
                {
                    var_42 = (min(var_42, ((max((min(var_8, (((!(arr_17 [i_1] [i_1] [i_1] [10])))))), (arr_23 [12] [10] [i_5] [i_17] [i_18]))))));
                    arr_58 [i_1] [i_5] [i_5] [i_1] [18] [i_1] = (min((((arr_43 [i_18 - 3] [i_18 - 3] [i_18 - 1] [i_18 - 2]) * var_10)), ((~(arr_43 [i_18 - 3] [i_18] [i_18 - 1] [i_18 + 1])))));
                    arr_59 [i_1] [i_1] [10] [i_1] = min((min(var_12, (arr_17 [18] [i_5] [i_17] [i_1]))), (((~(arr_44 [1] [18] [1] [i_17] [i_17] [i_18 + 1])))));

                    for (int i_19 = 1; i_19 < 17;i_19 += 1) /* same iter space */
                    {
                        var_43 += (max(((var_5 ? ((~(arr_61 [i_5] [i_5]))) : var_7)), (((((max((arr_24 [2] [2] [8] [i_18]), var_0))) ^ var_8)))));
                        arr_62 [i_1] [i_1] [i_1] [i_1] [16] = (((~((((arr_5 [1]) || var_13))))));
                    }
                    for (int i_20 = 1; i_20 < 17;i_20 += 1) /* same iter space */
                    {
                        var_44 = (((arr_20 [1] [i_18] [i_20]) | (arr_14 [3] [15] [17])));
                        arr_65 [i_1] [i_18 - 3] [i_17] [i_5] [i_1] = (max((arr_63 [i_1] [i_1] [i_1] [1] [i_18] [i_1] [i_20]), (arr_51 [i_18] [i_1])));
                        arr_66 [3] [8] [3] [i_1] = var_14;
                    }
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        var_45 = (min(var_45, var_9));
                        var_46 = (max(var_46, (!var_0)));
                        var_47 *= var_14;
                    }
                }
                /* vectorizable */
                for (int i_22 = 3; i_22 < 18;i_22 += 1) /* same iter space */
                {
                    var_48 = (arr_48 [i_22 - 2]);
                    var_49 ^= ((~(arr_63 [16] [10] [14] [i_22 - 2] [i_22 - 2] [8] [14])));
                }
                for (int i_23 = 3; i_23 < 18;i_23 += 1) /* same iter space */
                {
                    var_50 = ((~(((arr_47 [i_1] [i_17] [i_23] [i_23 - 1] [i_1] [i_23]) ^ (arr_47 [i_1] [1] [i_23] [i_23 - 1] [1] [i_23])))));
                    var_51 = (max(var_51, var_16));

                    /* vectorizable */
                    for (int i_24 = 4; i_24 < 18;i_24 += 1)
                    {
                        var_52 -= ((-(arr_19 [i_1] [i_23 - 2] [i_24] [i_24 - 4] [i_23 - 2] [i_24])));
                        var_53 = (arr_6 [i_1] [i_17] [i_24]);
                        var_54 = (max(var_54, ((((var_14 % var_3) ? var_14 : (var_11 & var_10))))));
                        arr_76 [i_1] [i_23] [i_5] [i_5] [i_1] = ((-(arr_4 [i_1] [i_1])));
                    }
                    for (int i_25 = 0; i_25 < 20;i_25 += 1) /* same iter space */
                    {
                        arr_79 [i_1] [i_5] [i_5] [i_23] [i_1] [i_5] [4] = (arr_73 [i_1] [i_17] [i_23] [i_25]);
                        var_55 += (((arr_40 [i_1] [14] [i_1] [i_1]) ? ((max((arr_29 [i_25] [i_25] [i_23 + 1] [i_23 + 2] [i_23 - 3]), (arr_29 [i_25] [i_1] [i_23 + 1] [i_23 - 1] [i_23 - 2])))) : ((((min(var_3, var_4))) ? (!var_1) : var_9))));
                        var_56 = (min(var_56, var_16));
                        arr_80 [i_1] [i_1] = var_15;
                        var_57 = (max(((var_12 ? var_6 : var_12)), var_2));
                    }
                    for (int i_26 = 0; i_26 < 20;i_26 += 1) /* same iter space */
                    {
                        var_58 = ((+(((var_3 + var_9) ? ((min(var_2, var_6))) : ((var_11 ? (arr_20 [1] [4] [i_17]) : (arr_9 [i_1] [i_1] [i_1])))))));
                        var_59 = ((((max((arr_29 [i_1] [i_23 - 2] [i_23 + 2] [17] [i_23 - 1]), (((!(arr_51 [i_1] [i_1]))))))) ? var_7 : ((min((arr_36 [i_23 - 1] [i_23 - 3] [i_23 - 3] [i_23 - 1]), (arr_36 [i_23 - 3] [i_23 - 1] [i_23 + 2] [i_23 + 1]))))));
                    }
                }
                var_60 ^= (((arr_10 [i_1] [4] [13]) - (((((arr_64 [i_1] [i_5] [i_17]) != (arr_64 [13] [i_5] [7])))))));
            }
            for (int i_27 = 0; i_27 < 20;i_27 += 1)
            {
                arr_86 [19] [i_5] [i_27] [i_1] = (max((arr_84 [i_1] [i_1] [19] [i_1]), -var_6));

                for (int i_28 = 1; i_28 < 19;i_28 += 1) /* same iter space */
                {
                    var_61 = (arr_88 [i_1] [1]);
                    var_62 ^= (((((arr_31 [i_28 - 1] [14] [i_5]) ? (arr_31 [i_5] [i_27] [i_28 + 1]) : (arr_16 [i_1] [i_1]))) < (max((arr_31 [i_5] [i_5] [7]), (arr_31 [i_1] [i_1] [i_27])))));
                }
                for (int i_29 = 1; i_29 < 19;i_29 += 1) /* same iter space */
                {
                    var_63 &= var_2;
                    var_64 = (!var_5);
                }
                for (int i_30 = 1; i_30 < 19;i_30 += 1) /* same iter space */
                {
                    var_65 = ((+((((((arr_37 [14] [i_5]) ? (arr_37 [i_1] [19]) : (arr_15 [i_1] [i_1] [8])))) ? ((((var_0 < (arr_82 [i_1]))))) : ((var_12 ? var_3 : var_0))))));

                    for (int i_31 = 0; i_31 < 20;i_31 += 1) /* same iter space */
                    {
                        var_66 &= (((((arr_96 [i_31]) ? ((((arr_88 [i_5] [i_31]) < (arr_39 [18] [i_5] [12] [i_31])))) : (arr_37 [i_1] [i_1]))) < var_0));
                        var_67 = (((arr_33 [10] [i_5] [i_1] [i_30] [i_31]) ^ var_3));
                    }
                    for (int i_32 = 0; i_32 < 20;i_32 += 1) /* same iter space */
                    {
                        var_68 *= (!27488);
                        arr_104 [i_1] [i_1] [6] [i_30] [1] = (min((arr_20 [14] [i_27] [13]), (max((arr_84 [4] [1] [i_27] [i_1]), (((!(arr_52 [12] [i_1] [i_1]))))))));
                    }
                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 20;i_33 += 1) /* same iter space */
                    {
                        arr_107 [0] [i_1] [11] [15] [3] = (((arr_37 [i_30 - 1] [i_30 + 1]) < ((var_8 ? var_8 : (arr_44 [i_33] [3] [4] [i_5] [6] [6])))));
                        var_69 = (max(var_69, ((((arr_105 [i_30 + 1] [i_30 + 1] [17] [i_30 + 1] [i_30] [i_30] [i_30 - 1]) > (arr_25 [i_27] [i_33]))))));
                        var_70 = (!var_11);
                    }
                }
                for (int i_34 = 0; i_34 < 1;i_34 += 1)
                {
                    arr_110 [13] [13] [i_1] [17] [i_27] [i_5] = (((((arr_7 [i_1] [6]) << (((arr_7 [i_5] [i_5]) - 1100999192475203096))))) ? (((arr_88 [6] [i_34]) ? (arr_7 [18] [i_1]) : (arr_7 [i_1] [i_5]))) : (arr_85 [i_1] [14] [i_1]));

                    /* vectorizable */
                    for (int i_35 = 0; i_35 < 1;i_35 += 1)
                    {
                        var_71 = (((var_9 ? var_0 : (arr_82 [i_1]))));
                        arr_115 [18] [18] [i_1] [i_34] [i_1] = (arr_60 [i_1] [1] [i_1] [18]);
                        arr_116 [i_35] [18] [5] [i_1] [5] = (arr_109 [i_1] [9] [i_5] [i_5] [9] [i_1]);
                    }

                    /* vectorizable */
                    for (int i_36 = 0; i_36 < 20;i_36 += 1) /* same iter space */
                    {
                        var_72 = (~var_14);
                        var_73 = (arr_78 [i_34] [i_34] [i_34] [0] [8]);
                    }
                    for (int i_37 = 0; i_37 < 20;i_37 += 1) /* same iter space */
                    {
                        var_74 = (max(var_74, ((((((var_15 ? var_3 : (arr_111 [i_1] [16] [i_1] [i_34] [i_37]))))) >= (-1940 <= -1940)))));
                        var_75 = (((((~(((arr_112 [i_1] [1] [5] [i_1] [i_1]) ? var_16 : (arr_10 [i_5] [i_34] [i_5])))))) ? var_3 : var_0));
                    }
                }
            }
            arr_122 [i_1] [i_1] = var_7;
        }
    }
    var_76 |= ((var_11 ? var_0 : (((var_14 | var_14) ? var_7 : var_10))));
    #pragma endscop
}
