/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (((((min(var_8, var_4))) ? var_11 : ((var_3 ? (arr_2 [i_0] [i_0]) : var_2)))));
        var_15 = (((((var_7 ? (((arr_2 [i_0] [i_0]) | (arr_0 [i_0]))) : (arr_1 [i_0])))) ? (((-(arr_2 [i_0] [i_0])))) : (((((var_2 ? var_10 : var_2))) ? ((min(var_4, (arr_2 [1] [i_0])))) : ((var_4 ? var_5 : var_0))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_5 [i_1] [0] = (~(arr_2 [i_1 - 1] [i_1 + 1]));
        var_16 = ((((var_7 || (arr_2 [i_1] [i_1]))) || (arr_4 [i_1 - 1] [i_1])));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_10 [i_3] = ((var_4 ? var_10 : (arr_8 [i_1] [i_2] [i_3])));

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    arr_13 [i_4 - 1] [i_3] [i_3] [i_3] [i_2] [i_1] = var_6;

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_17 = (min(var_17, (!var_10)));
                        arr_16 [i_5] [i_3] = (arr_3 [i_3]);
                        arr_17 [i_1] [i_3] [i_3] [4] [i_5] = var_7;
                    }
                    for (int i_6 = 2; i_6 < 6;i_6 += 1)
                    {
                        var_18 = ((!(((var_5 | (arr_18 [i_1] [i_1]))))));
                        arr_21 [i_3] [i_2] [i_3] [i_4 - 1] [i_6] = var_10;
                    }
                    var_19 = (max(var_19, (((((215 ? 11836291371286558763 : 0))) ? ((var_2 ? var_10 : var_6)) : (((var_4 ? var_0 : var_9)))))));
                }
                arr_22 [i_3] [i_2] [i_3] = (~var_0);

                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    var_20 = var_5;

                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        var_21 = (arr_23 [i_7] [i_7 + 2] [0]);
                        arr_27 [i_1] [i_7 - 1] [8] [i_2] [i_1] &= var_5;
                    }
                }
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_34 [i_1] [i_3] [i_1] [i_1] [i_1] = (var_7 ^ var_1);
                        arr_35 [5] [i_2] [i_2] [i_3] [i_3] [i_10] = (((var_4 & var_7) & (arr_18 [i_3] [i_3])));
                        var_22 += var_11;
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_23 ^= (((((-(arr_19 [2] [2] [8] [i_9 + 2] [i_11])))) ? (var_0 - var_8) : (arr_20 [i_2] [i_3] [i_9 + 2] [i_11])));
                        var_24 = (((arr_14 [i_11] [i_3] [1] [i_3] [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_12 [i_1 + 2] [i_3] [i_9 + 1] [i_11])));
                        arr_39 [i_3] [i_2] [i_3] [i_9 + 1] [i_2] [i_9] = (((((arr_12 [i_1] [i_3] [i_3] [i_11]) || var_3)) ? (arr_26 [i_11] [i_11] [i_9 - 1] [i_3] [i_2] [i_2] [i_1 + 1]) : (~var_3)));
                        arr_40 [i_11] [i_3] [i_3] [1] = ((-(var_2 & var_9)));
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = (((!var_1) != var_11));
                        var_25 = (var_0 == var_5);
                        arr_44 [1] [i_2] [i_3] [i_9] [i_12] = (((arr_24 [i_1 - 1]) ? var_9 : (arr_32 [i_9 + 1] [i_9] [4] [i_1 - 1] [i_1 + 2])));
                        var_26 = (min(var_26, (((((((arr_41 [i_9]) ? (arr_6 [i_3] [i_9 + 2]) : var_4))) ? var_8 : var_8)))));
                        arr_45 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] [i_2] = var_3;
                    }

                    for (int i_13 = 3; i_13 < 7;i_13 += 1)
                    {
                        arr_50 [i_1] [i_1] [i_2] [2] [i_3] [i_9 - 1] [i_13] = ((var_5 * var_4) <= (((var_8 ^ (arr_4 [i_3] [i_13 + 1])))));
                        arr_51 [i_3] [i_2] [i_3] [i_1] [i_3] [i_3] = (arr_49 [i_1] [i_2] [1] [i_9] [4]);
                        arr_52 [i_1] [i_3] [i_3] [i_13] = (~var_0);
                        var_27 = ((~(arr_48 [i_13] [i_13] [i_13 - 2] [i_13 - 1] [i_13 + 1])));
                        arr_53 [i_13 + 2] [i_3] [i_9] [i_3] [i_2] [i_3] [i_1] = (((arr_48 [i_9] [i_2] [i_3] [i_1] [i_13 - 1]) < var_11));
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                    {
                        arr_58 [i_1] [i_3] [i_3] [i_9] [i_14] = -var_2;
                        var_28 = (min(var_28, (arr_46 [i_3] [i_14])));
                        arr_59 [i_2] [i_3] [i_2] [i_9 + 2] [i_14] = ((var_1 ? (var_11 || var_0) : (((arr_31 [i_1] [i_2] [i_3] [i_2] [i_14]) ? var_10 : var_7))));
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
                    {
                        arr_62 [i_3] [i_2] [i_3] = (var_9 | var_4);
                        var_29 = (((var_4 / var_7) ? var_3 : ((var_8 & (arr_33 [5] [i_3] [i_3] [i_3] [i_1 + 2])))));
                        var_30 = (min(var_30, ((~((var_8 ? var_4 : (arr_30 [i_3] [i_9 - 1] [i_15] [i_2] [1] [i_3] [i_9 + 2])))))));
                        var_31 = ((~(arr_30 [i_15] [i_9 + 2] [i_3] [i_2] [i_2] [i_2] [i_1 - 2])));
                    }
                }
            }
            for (int i_16 = 2; i_16 < 9;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    var_32 = var_9;
                    arr_67 [i_1 + 1] [i_2] [i_2] [i_16] [i_17] = (var_9 ? var_7 : ((var_7 ? (arr_61 [i_1] [i_2] [i_17] [i_17] [i_17]) : var_0)));
                    var_33 = var_7;
                    var_34 = (min(var_34, ((((var_7 ? var_6 : var_6))))));
                }
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    var_35 = (!var_2);
                    arr_70 [i_2] [i_2] [0] [i_2] [i_2] [i_2] &= (((((var_9 ? var_11 : var_1))) ? (arr_8 [i_1] [i_1 + 2] [i_1 + 1]) : ((var_1 ? var_8 : var_1))));
                }
                arr_71 [i_1 - 1] [i_2] [i_1 - 1] = (((arr_49 [i_1] [i_2] [i_16] [i_1 - 2] [i_16 - 2]) ? var_5 : var_6));
                arr_72 [i_16] [i_16] [i_16] &= (var_7 << ((((var_1 ? var_5 : var_8)) - 6501229613146940246)));
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    {
                        var_36 = (((var_11 - var_11) ? var_5 : ((-671766709 ? 12388434674234759173 : 896))));
                        arr_81 [i_19] [i_2] [i_19] [i_20] = ((var_0 ? var_0 : (arr_14 [i_1] [i_2] [i_2] [i_19] [i_20])));
                        arr_82 [i_19] [1] [i_1 + 1] [i_20] = (var_7 / var_3);
                        arr_83 [i_1] [i_2] [i_19] [i_20] = ((var_9 ? (arr_18 [i_2] [i_2]) : (arr_18 [i_2] [i_2])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        {
                            var_37 = (6058309399474792458 ? 200 : 14508428848730895232);
                            arr_91 [i_1 - 2] [i_2] [i_21] [i_22] [5] = ((+(((arr_79 [i_1] [i_1]) ? var_4 : var_5))));
                            var_38 = var_1;
                        }
                    }
                }
            }
        }
        for (int i_24 = 0; i_24 < 10;i_24 += 1)
        {
            arr_96 [i_1] = (((var_10 + var_1) ? (((arr_77 [i_1] [i_24] [1] [i_24]) | var_2)) : (!var_11)));
            arr_97 [i_1 + 2] [i_1 + 2] = ((-(arr_95 [i_1 - 2])));
            arr_98 [i_1] = (arr_61 [i_24] [i_24] [i_24] [6] [i_1]);
        }
        arr_99 [i_1 - 2] |= ((-((var_9 / (arr_87 [i_1] [i_1] [i_1] [i_1] [i_1 - 2])))));
    }
    for (int i_25 = 0; i_25 < 18;i_25 += 1)
    {
        arr_102 [i_25] [i_25] = (((min((arr_2 [i_25] [i_25]), ((var_3 ^ (arr_101 [i_25] [i_25]))))) | ((~(arr_0 [8])))));
        arr_103 [i_25] = (arr_0 [i_25]);
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 18;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 18;i_27 += 1)
            {
                {
                    var_39 *= (min(var_1, (max((var_0 & var_4), ((var_5 ? var_9 : var_5))))));
                    var_40 = max((max((arr_107 [i_25] [i_26] [i_26] [i_27]), (arr_107 [i_25] [i_26] [i_27] [i_25]))), (!var_7));
                    arr_109 [i_25] [i_25] [i_25] = ((~((var_0 ? (arr_106 [i_27] [i_27]) : var_2))));
                }
            }
        }
        arr_110 [i_25] = ((-((var_7 % ((var_1 * (arr_104 [i_25] [i_25] [i_25])))))));
        arr_111 [i_25] = (((((((var_11 ? var_8 : var_0)) - var_9))) ? ((((((arr_101 [i_25] [i_25]) ? var_11 : var_10))) ? (((var_3 ? var_11 : (arr_104 [i_25] [i_25] [i_25])))) : var_6)) : (((((arr_105 [i_25]) <= (arr_105 [i_25])))))));
    }
    #pragma endscop
}
