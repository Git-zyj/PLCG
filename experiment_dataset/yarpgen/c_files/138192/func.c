/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138192
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30591)) ? (((/* implicit */int) (short)-30608)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                arr_9 [i_0] = ((/* implicit */signed char) var_13);
                arr_10 [i_0] [i_0] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1 - 1])));
                var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                /* LoopSeq 4 */
                for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    arr_14 [i_0 - 1] [0LL] [i_0 - 1] [i_0] [i_3 - 1] [i_0 - 1] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */_Bool) 9064735307943300020LL)) ? (9064735307943300022LL) : (((/* implicit */long long int) 4228125174U)))) << (((arr_1 [i_0] [i_1 + 1]) - (1556129778368391201LL)))))) : (((/* implicit */_Bool) ((((((/* implicit */_Bool) 9064735307943300020LL)) ? (9064735307943300022LL) : (((/* implicit */long long int) 4228125174U)))) << (((((((arr_1 [i_0] [i_1 + 1]) - (1556129778368391201LL))) + (5800897437519245717LL))) - (23LL))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1])) ? (arr_12 [i_0 + 1] [i_1 + 1] [i_3 + 2] [i_3 + 3]) : (arr_12 [i_0 - 1] [i_1 + 1] [i_3 + 2] [i_3 + 1])));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(((((/* implicit */long long int) 0)) - (arr_8 [i_1] [i_1] [i_3]))))))));
                }
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_22 = arr_5 [i_0] [i_0];
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((9064735307943300020LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-32076))))))) / (arr_8 [i_0 - 1] [i_0] [i_0 - 1])));
                    var_24 = var_11;
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((short) var_10)))));
                    arr_22 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1])));
                    arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) && (((/* implicit */_Bool) (+(var_13))))));
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_26 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_2] [i_1]))));
                        var_27 = ((/* implicit */_Bool) var_17);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_7]))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-32076))))));
                        arr_28 [i_0 - 1] [i_1 + 2] [i_0] [22U] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [21LL] [21LL])) : (arr_0 [i_0]))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        var_29 *= ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_12))))));
                        arr_33 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_1 + 1] [i_2] [i_5] [(_Bool)1])) ? (((/* implicit */int) (short)-32076)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0]))) : (((((/* implicit */_Bool) (short)-32076)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_30 = (short)-30592;
                        arr_34 [i_0] [20ULL] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(arr_1 [i_0] [7LL])));
                        arr_35 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) ((short) arr_19 [i_8])));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < ((-(arr_16 [(unsigned char)18]))))))));
                    arr_38 [i_0] [(signed char)8] [i_0] [i_9] = ((/* implicit */short) (_Bool)1);
                }
            }
            for (long long int i_10 = 3; i_10 < 22; i_10 += 2) 
            {
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)30604)) ? (((/* implicit */int) (short)32075)) : (((/* implicit */int) var_7))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_48 [i_0] [i_0] [i_10] [i_11] [i_0] [(short)15] = ((/* implicit */unsigned char) (_Bool)1);
                        var_33 &= ((/* implicit */long long int) ((arr_8 [i_0] [(unsigned short)4] [(unsigned short)5]) == (((/* implicit */long long int) ((/* implicit */int) (short)-1698)))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) arr_40 [i_1] [i_1] [(short)2] [i_1 - 1]));
                    }
                    for (int i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        arr_52 [(_Bool)1] [(_Bool)1] [i_10 - 3] [i_11] [i_0] [i_13 + 3] [i_13 + 1] = ((/* implicit */short) (-(arr_26 [i_0] [i_0] [i_0] [i_0] [(short)12] [i_0 - 1] [0LL])));
                        var_34 = ((/* implicit */short) ((signed char) ((long long int) (short)30591)));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) -9064735307943300022LL))));
                    }
                    arr_53 [i_0] [i_0] = ((/* implicit */short) var_6);
                    var_36 = ((/* implicit */short) ((arr_30 [i_0] [i_1 - 1] [i_10 + 2] [i_10 - 2] [i_0 - 1]) ? (arr_26 [i_1] [i_1 - 1] [i_0 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1]) : (((/* implicit */int) arr_17 [i_10] [i_10 + 2] [i_10 - 1] [i_0]))));
                }
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)23103)))))) / ((~(arr_55 [i_14]))))))));
                    var_38 = ((/* implicit */short) (+(((/* implicit */int) arr_50 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))));
                    arr_58 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) 1897546849U);
                    var_39 = ((/* implicit */int) max((var_39), ((+(((/* implicit */int) (short)30591))))));
                }
                for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    arr_63 [i_0] [i_1] [i_0] [i_0] [i_0] = ((int) ((int) (_Bool)1));
                    arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -7757691412939451607LL);
                }
            }
            var_40 = ((/* implicit */_Bool) ((unsigned int) arr_36 [i_0 + 1] [i_0] [i_1 + 2] [i_0] [i_1 + 2]));
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    {
                        var_41 += ((/* implicit */unsigned short) ((((arr_43 [i_16] [i_16] [i_1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        arr_71 [i_0] [i_1] [i_1] [i_16] [i_17] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_37 [i_17] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])))))));
                        var_42 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32065))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))) : (((((/* implicit */long long int) var_13)) - (arr_12 [i_18] [i_18] [i_18] [i_18])))));
        var_44 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [(_Bool)1] [i_18] [i_18] [i_18] [i_18]))))) ? (((((/* implicit */_Bool) arr_11 [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9064735307943300011LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_18] [i_18] [i_18] [i_18]))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 1954985198U)) ? (((((/* implicit */int) (unsigned char)78)) / (var_13))) : (((/* implicit */int) var_3)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 11; i_20 += 1) /* same iter space */
            {
                arr_80 [i_18] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)1689)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-1682))))) + (-1LL)));
                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_18])) ? (var_12) : (-18LL)))) || (((/* implicit */_Bool) (~(9064735307943300018LL))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        arr_87 [i_18] [i_18] [i_20] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) ((-9064735307943300011LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-1682)))))) ? ((+(var_17))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_18] [i_21] [i_20] [i_22]))))));
                        arr_88 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) (((+(((/* implicit */int) (short)-1695)))) == (((/* implicit */int) var_16))));
                    }
                    var_46 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
                }
                for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
                {
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */int) (short)9857)) : (((/* implicit */int) arr_81 [i_18] [i_18] [i_18] [i_19 - 1]))));
                    var_48 = ((/* implicit */int) (short)32075);
                }
                /* LoopNest 2 */
                for (short i_24 = 2; i_24 < 9; i_24 += 1) 
                {
                    for (short i_25 = 0; i_25 < 11; i_25 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned int) arr_32 [(_Bool)1] [i_20] [i_19 - 1] [i_19 - 1] [i_24 - 1]);
                            var_50 = ((/* implicit */int) min((var_50), (((((/* implicit */int) var_4)) | (arr_66 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])))));
                        }
                    } 
                } 
            }
            for (int i_26 = 0; i_26 < 11; i_26 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_27 = 0; i_27 < 11; i_27 += 4) 
                {
                    arr_101 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_83 [i_18])) ? (((/* implicit */int) arr_54 [i_18] [i_27] [i_26] [i_18] [i_18])) : (var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3212242534U)))))));
                    /* LoopSeq 1 */
                    for (short i_28 = 1; i_28 < 9; i_28 += 1) 
                    {
                        var_51 |= ((/* implicit */short) -3039611343651423073LL);
                        var_52 += ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4013102985U))))) : (((/* implicit */int) (_Bool)1))));
                    }
                    arr_104 [i_27] [i_18] [i_19] [i_18] [i_18] = ((/* implicit */short) ((arr_8 [i_19 - 1] [i_27] [i_27]) == (10LL)));
                }
                for (unsigned short i_29 = 0; i_29 < 11; i_29 += 1) 
                {
                    var_53 -= arr_42 [i_26] [i_19] [i_26] [i_26] [i_19 - 1];
                    var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [12ULL] [(_Bool)1])))))));
                }
                var_55 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_19] [i_19 - 1] [i_19 - 1] [i_19])) : (((/* implicit */int) var_7))));
                var_56 ^= ((/* implicit */short) ((long long int) arr_54 [i_19 - 1] [i_19 - 1] [(short)12] [i_19] [i_19 - 1]));
                arr_107 [(unsigned short)4] |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
                var_57 &= (+(((/* implicit */int) (!(((/* implicit */_Bool) 15LL))))));
            }
            for (unsigned int i_30 = 0; i_30 < 11; i_30 += 4) 
            {
                arr_112 [i_18] = 8LL;
                /* LoopNest 2 */
                for (signed char i_31 = 4; i_31 < 9; i_31 += 4) 
                {
                    for (unsigned int i_32 = 0; i_32 < 11; i_32 += 3) 
                    {
                        {
                            var_58 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_95 [i_31])) >= (((/* implicit */int) var_3)))) ? (((/* implicit */int) var_3)) : ((+(-409046978)))));
                            var_59 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_90 [i_32] [i_31 - 3] [i_30] [i_18]))));
                            var_60 += ((/* implicit */long long int) ((((/* implicit */int) arr_98 [i_19 - 1] [i_19 - 1] [i_31 + 1] [i_31 + 1])) - (((/* implicit */int) (short)-1695))));
                        }
                    } 
                } 
            }
            arr_119 [i_18] [(short)7] [i_18] = ((/* implicit */_Bool) arr_29 [i_18] [i_19 - 1] [i_18] [i_19 - 1] [i_19 - 1]);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
        {
            var_61 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_92 [i_18] [i_18] [(_Bool)1] [i_18] [i_18])) ? (arr_41 [i_33] [i_18] [i_18] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_18] [(unsigned short)8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-1) : (((/* implicit */int) arr_79 [8LL] [i_33 - 1])))))));
            var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31166)) ? (((/* implicit */unsigned int) arr_26 [i_18] [i_18] [(short)13] [(signed char)13] [i_18] [(short)13] [i_18])) : (arr_111 [i_18])))) ? (((((/* implicit */_Bool) arr_17 [i_18] [i_33] [i_33] [4U])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) arr_93 [i_33 - 1] [i_33 - 1] [i_33 - 1] [i_33] [(signed char)7]))))))));
        }
    }
    var_63 -= ((/* implicit */long long int) max(((+(((/* implicit */int) min(((short)-9858), (var_4)))))), (((/* implicit */int) min((var_5), (((/* implicit */signed char) (_Bool)1)))))));
}
