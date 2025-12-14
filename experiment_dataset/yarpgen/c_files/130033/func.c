/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130033
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (signed char)-8);
                        arr_13 [i_2] [i_2] [i_0] = (-(((/* implicit */int) (unsigned char)63)));
                        var_20 = ((/* implicit */int) (_Bool)0);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_2] = ((/* implicit */int) ((_Bool) arr_2 [i_2]));
                        arr_17 [i_4] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 32767)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_1] [i_4])))) ? (arr_5 [i_1] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_22 [i_0] [i_2] = ((/* implicit */int) var_11);
                        }
                        var_22 = -134217728;
                        arr_23 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (_Bool)0);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((short) ((arr_20 [i_0] [i_1] [i_2] [i_1] [i_5]) / (arr_20 [i_0] [i_1] [i_2] [i_1] [i_7])))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_5] [i_1] [i_1] [i_1] [i_0])) ? (9221120237041090560LL) : (((/* implicit */long long int) 2147483637))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_2] [i_1] [i_7])), (18446744073709551602ULL))))))));
                            arr_27 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_25 ^= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_8] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) < (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (4016211500U)))))) : (((((/* implicit */int) arr_18 [i_1] [i_8])) - (((/* implicit */int) var_4)))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_29 [i_0] [i_2] [i_1] [i_2] [i_5] [i_5] [i_8]), (arr_29 [i_0] [i_2] [i_1] [i_2] [i_5] [i_8] [i_8])))) ? (((((/* implicit */_Bool) 1073741823U)) ? (((((/* implicit */_Bool) 2147483647)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_14 [i_0] [i_1] [i_5] [i_5] [i_5] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_2]))))));
                            var_27 = ((/* implicit */signed char) max((var_27), (var_15)));
                            var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_0 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))))))) ? ((-(arr_20 [i_8] [i_1] [i_2] [i_1] [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) -2479921416061604803LL)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((short) min((((/* implicit */long long int) arr_24 [i_0] [i_1] [i_2] [i_2] [i_2] [i_9])), (36028797016866816LL))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (unsigned char)255))));
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9] [i_9])) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_2] [i_9] [i_0])) : (((/* implicit */int) arr_31 [i_2] [i_1] [i_2] [i_9] [i_9]))))))));
                        /* LoopSeq 3 */
                        for (short i_10 = 3; i_10 < 9; i_10 += 4) 
                        {
                            arr_36 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_37 [i_0] [i_1] [i_2] [i_9] [i_10 + 1] [i_2] = ((/* implicit */int) arr_18 [i_2] [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            arr_42 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)-117))))) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_3 [i_0]))));
                            arr_43 [i_0] [i_2] [i_2] [i_9] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2] [i_2]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            arr_47 [i_12] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_12]);
                            var_32 ^= ((/* implicit */short) ((long long int) arr_44 [i_12] [i_9] [i_9] [i_2] [i_1] [i_0]));
                            arr_48 [i_2] [i_2] [i_9] = ((/* implicit */_Bool) (unsigned short)15);
                            var_33 += ((/* implicit */_Bool) ((int) (short)22516));
                        }
                        var_34 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-1)), (arr_18 [i_1] [i_1]))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 9; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) var_12);
                        arr_54 [i_0] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(var_11)));
                    }
                    for (long long int i_15 = 1; i_15 < 9; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 4; i_16 < 10; i_16 += 3) 
                        {
                            arr_62 [i_16 + 1] [i_15] [i_16 + 1] [i_16 - 3] [i_16 - 4] [i_16 - 2] [i_16 - 1] = ((((/* implicit */_Bool) 1LL)) ? (16646144) : (((/* implicit */int) (short)32767)));
                            var_36 = ((/* implicit */unsigned int) min((var_36), ((~(arr_10 [i_1])))));
                            var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                        }
                        var_38 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_13 - 1] [i_13 + 2] [i_13 - 1])) ? (((/* implicit */int) arr_32 [i_13 - 1] [i_13 - 1] [i_13 + 2] [i_15 + 2] [i_15 - 1])) : (((/* implicit */int) arr_32 [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_15 - 1] [i_15 + 1]))));
                        arr_63 [i_0] [i_0] [i_1] [i_15] [i_13 + 1] [i_15 + 2] = ((/* implicit */long long int) ((_Bool) arr_20 [i_13 - 1] [i_1] [i_15 - 1] [i_15] [i_15 + 1]));
                        var_39 ^= ((/* implicit */unsigned int) (_Bool)1);
                        arr_64 [i_15] [i_1] [i_1] [i_13 - 1] [i_15 + 1] = ((/* implicit */int) arr_51 [i_0] [i_1] [i_15 + 1] [i_15 - 1] [i_13 + 1]);
                    }
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3446084521U)) ? (((/* implicit */int) arr_51 [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 + 1])) : (((/* implicit */int) arr_51 [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_13 + 1] [i_13 + 1]))));
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */long long int) -28534954);
                        arr_68 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_60 [i_0] [i_1] [i_13 + 2] [i_17]);
                    }
                    for (int i_18 = 1; i_18 < 7; i_18 += 4) 
                    {
                        arr_71 [i_18] [i_1] = ((/* implicit */signed char) var_2);
                        arr_72 [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15360)) ? (arr_57 [i_1] [i_18 + 2] [i_18 + 4] [i_13 + 1] [i_0] [i_1]) : (((/* implicit */int) (_Bool)1))));
                        var_42 = ((/* implicit */signed char) (((!((_Bool)0))) ? (((/* implicit */int) arr_40 [i_13 + 2] [i_13 - 1] [i_18 + 1] [i_18 + 3] [i_18])) : ((-(((/* implicit */int) arr_11 [i_0] [i_13 - 1] [i_0] [i_18 - 1] [i_0]))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        arr_75 [i_0] [i_1] [i_1] [i_13 - 1] [i_19] = ((/* implicit */_Bool) (-(((unsigned long long int) arr_57 [i_1] [i_0] [i_1] [i_13 + 1] [i_19] [i_19]))));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)8)))))));
                        var_44 = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
                {
                    arr_78 [i_0] [i_1] [i_20] [i_20] = ((/* implicit */signed char) min((((int) 3411420818U)), (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_29 [i_20] [i_20] [i_1] [i_1] [i_0] [i_20] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_20] [i_20] [i_1] [i_20] [i_20] [i_20]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_21 = 3; i_21 < 8; i_21 += 2) 
                    {
                        var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 395073499U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_26 [i_0] [i_1] [i_20] [i_21 - 3] [i_21 + 1] [i_20])));
                        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) arr_18 [i_20] [i_21 - 3]))));
                    }
                    for (long long int i_22 = 2; i_22 < 10; i_22 += 3) 
                    {
                        arr_85 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                        var_47 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_22 - 2] [i_22 + 1] [i_22 + 1] [i_22 - 2])) ? (-1) : (((/* implicit */int) arr_69 [i_22 - 2] [i_22 + 1] [i_22 - 2] [i_22 + 1]))))) ? ((-(((/* implicit */int) arr_69 [i_22 - 2] [i_22 - 1] [i_22 - 2] [i_22 - 1])))) : (((/* implicit */int) (!((_Bool)1))))));
                        var_48 *= ((/* implicit */signed char) -165954789);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 4) 
                        {
                            arr_89 [i_0] [i_1] [i_20] [i_22 - 1] [i_23] = ((/* implicit */int) min((((/* implicit */long long int) arr_15 [i_22 - 1] [i_22 - 2] [i_22 - 2])), (((((arr_8 [i_22 - 1] [i_22 - 2] [i_22 - 1]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_15 [i_22 - 2] [i_22 - 2] [i_22 + 1]))))));
                            arr_90 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_34 [i_0] [i_1] [i_20] [i_22 + 1] [i_22 + 1] [i_23] [i_23]);
                        }
                        for (unsigned int i_24 = 3; i_24 < 7; i_24 += 4) 
                        {
                            arr_95 [i_22 + 1] [i_1] [i_22 + 1] [i_22 - 1] = ((/* implicit */unsigned char) ((-6701252430109150327LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_22 + 1] [i_22 - 1])) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_24 + 3] [i_24 - 3] [i_24 + 3] [i_24 - 1] [i_22 - 2] [i_1]))))))));
                            arr_96 [i_0] [i_1] [i_20] [i_22 - 1] [i_0] [i_22 + 1] = ((/* implicit */unsigned int) (_Bool)1);
                            var_49 = ((/* implicit */short) ((((/* implicit */int) (!(var_1)))) << (((((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_25 [i_24 + 3] [i_22 - 1] [i_20] [i_1] [i_0]) : (((/* implicit */unsigned int) var_7)))) - (2168847550U)))));
                            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_34 [i_24 + 2] [i_24 - 1] [i_24 + 4] [i_24 + 2] [i_24 - 2] [i_24 - 2] [i_24 - 3])) ? (((((/* implicit */_Bool) var_7)) ? (1200221049U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (var_12))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        arr_99 [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_93 [i_0])) ? (arr_93 [i_1]) : (arr_93 [i_1])));
                        arr_100 [i_20] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_20] [i_20])) ? (((/* implicit */int) arr_18 [i_1] [i_1])) : (((/* implicit */int) arr_18 [i_1] [i_1]))));
                    }
                    arr_101 [i_0] [i_1] [i_0] = ((/* implicit */int) ((long long int) var_18));
                    arr_102 [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) arr_52 [i_0] [i_20])) ? (((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_1] [i_20] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_46 [i_0] [i_1] [i_1] [i_1] [i_1] [i_20] [i_20])) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_20])))) : (((/* implicit */int) min((arr_46 [i_20] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]), ((signed char)-1))))));
                }
                arr_103 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8128)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_26 = 0; i_26 < 16; i_26 += 3) 
    {
        var_51 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_104 [i_26])) + (2147483647))) >> (((((/* implicit */int) arr_104 [i_26])) + (95)))));
        arr_106 [i_26] = ((/* implicit */_Bool) arr_105 [i_26]);
    }
    /* vectorizable */
    for (unsigned short i_27 = 2; i_27 < 13; i_27 += 4) 
    {
        var_52 = ((/* implicit */unsigned char) arr_107 [i_27 + 3]);
        arr_109 [i_27 + 3] = ((/* implicit */unsigned char) arr_105 [i_27 + 3]);
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            for (unsigned char i_29 = 0; i_29 < 16; i_29 += 3) 
            {
                {
                    var_53 = ((/* implicit */unsigned int) max((var_53), (((unsigned int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned int i_30 = 2; i_30 < 15; i_30 += 3) 
                    {
                        for (unsigned short i_31 = 0; i_31 < 16; i_31 += 2) 
                        {
                            {
                                var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_110 [i_27 + 3]))));
                                arr_119 [i_27 - 2] [i_28] [i_28] [i_30 - 2] [i_31] [i_31] [i_31] = ((/* implicit */signed char) ((long long int) (-9223372036854775807LL - 1LL)));
                                var_55 = (~((-9223372036854775807LL - 1LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
