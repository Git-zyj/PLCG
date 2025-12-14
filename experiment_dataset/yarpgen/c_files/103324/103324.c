/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1;
    var_11 = ((var_3 ? (!var_1) : ((((var_6 % var_3) != (~var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_2 - 1] [i_0] = (min(var_3, ((((arr_6 [i_0]) << (var_8 - 12930623278365526390))))));
                    arr_10 [2] [i_1] [10] [i_1] = (((((var_8 >= (arr_1 [10])))) / (arr_7 [i_0] [8] [i_2] [i_2 - 1])));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (((max((arr_12 [i_3]), (((arr_13 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_13 [i_3] [i_3]))))) <= var_7));
        arr_15 [i_3] = (arr_11 [i_3] [i_3]);
        arr_16 [i_3] = (arr_11 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_21 [20] = var_6;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_24 [i_4] [i_5] [i_6] = (arr_13 [20] [i_6]);
                arr_25 [i_4] [i_4] = ((var_0 ^ (((var_5 < (arr_18 [i_4] [i_5]))))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_28 [i_7] [i_5] = ((!(arr_18 [i_4] [i_5])));
                arr_29 [i_4] [i_5] [i_4] = var_9;
            }
            arr_30 [i_4] [i_4] [i_5] = (min(((~(((arr_18 [i_5] [i_5]) & (arr_22 [i_4] [5] [i_5] [i_5]))))), (((!(((var_6 ? (arr_17 [i_4]) : (arr_23 [i_4] [i_5] [i_5])))))))));
            arr_31 [i_4] [i_5] = (((((!(arr_23 [i_4] [i_4] [i_5]))) ? (min((arr_17 [i_4]), var_2)) : (((((arr_23 [i_4] [i_4] [i_4]) >= var_2)))))));
        }

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_36 [i_4] = (arr_26 [i_4] [i_4] [i_4]);
            arr_37 [i_4] [i_4] [i_8] = (arr_20 [i_4]);
        }
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                arr_44 [i_4] [i_4] [i_4] [i_4] = ((15 ? (1 >= var_7) : ((-332994196 ? 254 : 1))));
                arr_45 [i_4] [i_4] [i_9] [0] = ((-(arr_11 [i_9] [i_10])));
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_49 [i_4] [i_9] [i_11] = (arr_48 [i_4] [i_4]);
                arr_50 [i_4] [i_9] [i_9] [i_9 - 1] = var_3;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_55 [i_4] [i_9 - 2] [i_4] = var_0;
                            arr_56 [i_4] [11] = (min(1, 592077966));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 19;i_14 += 1)
            {
                arr_60 [i_4] [i_9] [i_14] = ((var_6 == var_0) ^ (((var_5 >= (arr_52 [i_4])))));
                arr_61 [i_9] = (var_4 ^ var_1);
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    arr_68 [i_15] |= (((arr_42 [i_9 - 2]) != ((var_2 ? var_6 : (arr_42 [i_9 - 2])))));

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        arr_71 [i_4] [i_4] [i_16] = (arr_11 [i_4] [i_4]);
                        arr_72 [i_4] [i_4] [i_16] [i_16] [i_17] [i_4] = (((((arr_33 [i_4] [i_4]) || (arr_66 [i_17]))) ? (var_1 * var_1) : ((var_9 ? var_5 : var_5))));
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                    {
                        arr_76 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (((((var_2 ^ (arr_51 [i_18] [i_9 + 1] [i_9 - 3] [i_9] [i_9 - 1] [i_9])))) ? (((((var_6 ? (arr_67 [i_4] [i_9 - 3] [i_9] [i_15] [i_4] [i_18]) : var_7))) ? var_4 : (((min((arr_73 [i_9] [i_9] [i_4]), (arr_42 [16]))))))) : (((-(arr_41 [i_9] [i_9]))))));
                        arr_77 [i_4] [i_16] = (min((!var_8), (max((arr_13 [i_4] [i_15]), var_0))));
                        arr_78 [i_4] [i_4] [i_4] [i_16] = (-var_9 >= -var_8);
                    }
                    arr_79 [i_15] [i_15] = (arr_35 [i_9] [i_15] [i_9]);
                }

                /* vectorizable */
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    arr_84 [i_19] [i_19] [6] [i_19] [i_19] = (((arr_46 [i_15] [i_9 - 1] [i_9] [i_9 - 2]) ? (arr_46 [i_4] [i_9] [i_4] [i_9 - 1]) : (arr_46 [i_15] [i_19] [0] [i_9 - 1])));
                    arr_85 [i_4] [i_9] [i_9] = (arr_64 [i_9 - 2] [i_9 + 1]);
                }
                for (int i_20 = 2; i_20 < 19;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        arr_90 [i_4] [i_9] [i_9] [i_4] [i_21] = (-24660869781346674 != 59154);
                        arr_91 [i_4] [i_4] [i_15] [i_21] [i_20 + 2] [i_20 - 2] [i_21] = (arr_27 [i_21]);
                        arr_92 [i_4] [i_21] [i_15] [i_20] [8] [i_21] = (arr_66 [i_20]);
                    }
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        arr_96 [i_4] = (~var_0);
                        arr_97 [i_22] [i_20] [i_9] [i_15] [i_9 + 1] [i_9] [i_4] = (((((-((var_4 | (arr_67 [4] [4] [13] [4] [i_22] [i_20])))))) ? var_7 : ((((var_7 && (arr_58 [i_20 + 1] [i_22])))))));
                    }
                    for (int i_23 = 0; i_23 < 21;i_23 += 1)
                    {
                        arr_100 [15] [0] = (arr_41 [i_15] [i_20 + 2]);
                        arr_101 [19] [i_9 + 1] [i_15] [i_15] [i_20] [i_20] [i_15] = (arr_11 [i_15] [i_23]);
                    }
                    for (int i_24 = 3; i_24 < 19;i_24 += 1)
                    {
                        arr_104 [i_4] [13] [i_15] [i_15] [i_24] = ((((arr_39 [i_20] [i_20] [i_20]) < (max((arr_17 [i_9]), (arr_38 [i_15] [i_15] [i_4]))))));
                        arr_105 [i_4] [i_9] [i_4] [i_20] [i_4] = ((var_3 ^ ((((arr_39 [i_4] [i_4] [i_15]) % (arr_88 [i_4] [i_15] [i_9 + 1] [i_20 - 2] [i_24 - 3] [i_20]))))));
                        arr_106 [i_4] [i_4] [i_20] = ((min(var_9, (arr_53 [i_4] [i_9] [i_20] [i_24]))));
                    }
                    arr_107 [i_4] = (max((max((max(var_3, var_6)), ((((arr_103 [i_4] [i_9] [i_15] [i_4] [i_20]) ? var_3 : (arr_39 [i_4] [i_9] [i_15])))))), ((((arr_65 [i_9 - 3] [i_9 - 2] [i_9 - 1]) / var_0)))));
                    arr_108 [i_15] = ((((arr_67 [i_9 - 1] [i_15] [i_20] [i_20 + 1] [i_20 - 2] [i_20]) ? var_2 : (arr_11 [i_4] [i_4]))));
                }
                arr_109 [i_4] [i_9] [i_9] [i_9] = (((arr_64 [i_9 + 1] [i_15]) ? (((-(arr_32 [i_9 - 3])))) : (((arr_64 [i_9 - 1] [i_9]) ? var_7 : var_2))));
            }
            arr_110 [i_4] [i_4] |= (arr_27 [i_4]);
            arr_111 [i_4] [i_9 - 2] = ((((!(592077978 | 255))) && (arr_11 [i_4] [i_4])));
        }
        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            arr_114 [i_4] [i_4] [i_4] = var_9;
            arr_115 [i_4] [i_25] = (arr_64 [i_4] [i_4]);
            arr_116 [i_25] = ((-var_9 > (min((((var_6 && (arr_43 [i_25])))), var_9))));
            arr_117 [i_4] [i_25] = (arr_63 [i_4]);

            for (int i_26 = 0; i_26 < 21;i_26 += 1)
            {
                arr_122 [i_4] [i_4] [i_26] = (((arr_39 [i_4] [i_25] [i_26]) != (((((var_0 ^ (arr_42 [i_4])))) & (min(4294967279, 0))))));
                arr_123 [i_26] = ((-(((arr_102 [i_4] [i_26]) * (min(var_9, (arr_52 [i_26])))))));
            }
        }
    }
    for (int i_27 = 0; i_27 < 21;i_27 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 1;i_28 += 1)
        {
            for (int i_29 = 3; i_29 < 20;i_29 += 1)
            {
                {
                    arr_133 [i_27] [i_28] [i_29 - 2] = (((arr_127 [i_29 + 1] [i_29] [i_29 - 2]) ? (((~((~(arr_52 [i_28])))))) : (~var_7)));
                    arr_134 [i_27] [i_28] [i_29] [i_29 - 2] = (~var_9);
                    arr_135 [i_29] [i_29] [i_28] [i_27] = ((~(arr_126 [i_27])));
                }
            }
        }
        arr_136 [i_27] [i_27] = ((((~(arr_132 [i_27]))) & (arr_132 [i_27])));
        arr_137 [i_27] = (((arr_42 [i_27]) / var_3));
    }
    for (int i_30 = 0; i_30 < 21;i_30 += 1) /* same iter space */
    {
        arr_140 [1] = var_1;
        arr_141 [i_30] = ((-(min((((arr_58 [i_30] [i_30]) ? (arr_125 [i_30]) : var_6)), var_6))));
    }
    #pragma endscop
}
