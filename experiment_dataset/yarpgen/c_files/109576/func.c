/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109576
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (216554627U)))) ? (var_4) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)116))))))), (((/* implicit */unsigned int) var_7)))))));
                    arr_8 [(unsigned char)6] [(unsigned char)6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (969601132U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (min((7705757423364890103LL), (((/* implicit */long long int) (signed char)39)))) : (-640614051757988503LL)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (1723807328))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_1 + 1] [12] [i_1 + 1] = 2912894170U;
                        var_11 = ((/* implicit */long long int) var_0);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_4);
                            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) 464109178616397299LL);
                        }
                        arr_18 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) -1798760556);
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_3 [i_5]))));
                        var_13 = ((/* implicit */unsigned char) ((arr_11 [i_0] [i_1 + 1] [i_2] [i_0]) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) var_2))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_5 + 1] [i_1 + 1] [i_0])) ? (arr_20 [(unsigned char)9] [i_5 + 1] [i_1 + 1] [i_0]) : (arr_20 [i_0] [i_5 + 1] [i_1 + 1] [i_0])));
                        arr_22 [i_2] [i_2] [i_2] [i_2] [i_5] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_15 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2] [(_Bool)1])) ? (25733021U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [3LL])))))));
                            arr_29 [i_0] [i_1] [i_2] [1LL] [i_7] = ((((/* implicit */_Bool) var_1)) ? (1463543243U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [5U]))));
                            var_16 = ((/* implicit */int) 1107338494U);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_2] [i_6 + 1] [i_6 - 4])) ? (arr_10 [i_0] [i_1 + 1] [i_8] [i_6 - 2]) : (((/* implicit */long long int) (+(1798760555)))))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) -1798760555))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0]);
                                arr_41 [i_1 + 1] [i_0] [i_9] [i_0] = arr_36 [i_0] [i_0] [i_0] [i_9] [i_10] [i_1 + 1];
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) 969601132U)) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_33 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1])), (1798760555)))) : (((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1])) ? (arr_19 [(signed char)8] [2LL] [i_1 + 1] [i_1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                }
            } 
        } 
        arr_42 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 3; i_12 < 14; i_12 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_12] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */_Bool) var_2);
                        var_21 = ((/* implicit */_Bool) max((var_21), (arr_31 [0U])));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (arr_44 [i_13 + 2] [i_11] [i_0]) : (arr_39 [i_0] [i_0] [6] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_12 + 1] [i_12] [i_12] [i_12 + 1]))) : ((+(12053968246787592813ULL)))))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_45 [i_0] [14] [i_0])))))));
                    }
                    for (int i_14 = 2; i_14 < 13; i_14 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) var_5);
                            var_25 *= ((/* implicit */unsigned int) (_Bool)1);
                            arr_59 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_14 + 2] [i_0] [i_12 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_14 + 2] [i_0])) : (((/* implicit */int) arr_28 [i_0] [i_14 + 2] [i_12] [i_12 - 1] [i_15]))));
                        }
                        for (signed char i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                        {
                            arr_62 [i_0] [i_11] = ((((/* implicit */_Bool) (+(-7705757423364890110LL)))) ? ((-(arr_23 [i_0] [i_0] [i_14 + 2] [i_14 + 2] [i_12 + 2] [i_16]))) : (((/* implicit */long long int) (~(((arr_52 [i_0]) ? (var_4) : (((/* implicit */unsigned int) 1798760555))))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(arr_37 [i_11] [i_12 - 3] [i_12 - 1] [i_14 + 2] [i_16]))))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) arr_46 [i_0]);
                            var_28 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                        {
                            arr_69 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_14 + 2] [i_11] [i_0] [i_11])) ? (arr_10 [i_14 + 2] [i_11] [i_0] [i_14]) : (arr_10 [i_14 + 2] [i_11] [i_0] [i_11])))) ? (((((/* implicit */_Bool) 2918982713U)) ? (arr_10 [i_14 + 2] [i_14 + 2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_10 [i_14 + 2] [i_11] [i_0] [i_14 + 1])) ? (arr_10 [i_14 + 2] [i_11] [i_0] [i_11]) : (arr_10 [i_14 + 2] [i_11] [i_0] [2U])))));
                            var_29 = ((/* implicit */unsigned char) max((arr_7 [i_0] [i_11] [i_12] [i_14]), (((/* implicit */unsigned int) arr_12 [i_0] [i_12 + 1] [i_14] [i_18]))));
                            var_30 = ((/* implicit */unsigned int) var_8);
                            var_31 -= ((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (arr_19 [i_0] [i_11] [i_12 + 1] [i_14 - 2] [i_12 + 1] [i_11]) : (arr_19 [i_0] [i_18] [i_0] [i_14 + 2] [i_12 - 3] [i_18]))))));
                            var_32 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_56 [i_0]))))));
                        }
                        var_33 = ((((/* implicit */_Bool) ((var_0) ? (arr_20 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) arr_7 [i_0] [i_11] [i_12] [i_14 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) : (((arr_50 [i_14 + 3] [i_12 + 1] [i_12] [i_11] [i_0]) ? (((((/* implicit */_Bool) -1367107510)) ? (((/* implicit */long long int) -1259170251)) : (4477303439127282770LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 239927728)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                        var_34 = ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (max((arr_54 [i_0] [i_14 + 1] [i_11] [i_12 + 2] [i_0] [i_11]), (((/* implicit */unsigned char) (_Bool)1))))));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(3187628813U))), (((var_0) ? (916103007U) : (((/* implicit */unsigned int) 1031626984))))))) ? (((((/* implicit */_Bool) var_3)) ? (((var_8) ? (var_1) : (((/* implicit */unsigned long long int) 1607957098)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [i_14 + 3] [i_12 - 3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-67)) ? ((~(arr_37 [i_14] [i_14] [i_14] [i_14] [i_14]))) : (((((/* implicit */_Bool) arr_46 [i_14])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_14] [i_14] [i_14] [i_14 + 2])))))))))))));
                    }
                    var_36 = ((/* implicit */unsigned int) arr_15 [i_12 - 3] [i_12 - 3] [i_12 - 1] [i_12 + 1] [i_12 + 1]);
                }
            } 
        } 
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))) ? ((+(min((((/* implicit */unsigned int) arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_44 [i_0] [i_0] [i_0]))))) : (var_4)));
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (2041186331) : (((/* implicit */int) var_7))))) ? (min((((/* implicit */unsigned int) var_2)), (arr_32 [10U] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 3) 
    {
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 4) 
        {
            for (unsigned int i_21 = 0; i_21 < 25; i_21 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_22 = 1; i_22 < 22; i_22 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) 1712708317))));
                        var_40 = ((/* implicit */signed char) arr_75 [i_19] [i_19] [i_19]);
                        var_41 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_78 [i_21] [i_20] [4U] [i_19]), (4014010792038372917LL)))) ? (arr_72 [i_20] [i_20] [i_21]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_74 [i_19] [i_22 - 1] [i_22 - 1] [i_21]))) : (((((/* implicit */_Bool) arr_78 [i_21] [i_22] [i_22 + 2] [i_22 + 2])) ? (arr_78 [i_20] [i_22] [i_22 + 2] [i_22 + 2]) : (-1492124163927024545LL)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 3) 
                        {
                            var_42 *= ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2805874186U)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 1881890782U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4036516306U))) : (((((/* implicit */_Bool) (signed char)127)) ? (1310955901U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))))));
                            arr_84 [i_19] [i_19] [i_21] [i_22 + 2] = ((/* implicit */unsigned char) (+(arr_74 [i_22 + 3] [i_22 + 2] [i_22 + 3] [i_22 + 1])));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)127), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1500685573)))))))) ? (((/* implicit */int) var_8)) : (-1712708317))))));
                            var_44 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) var_8)), (arr_79 [i_22 - 1] [i_19] [i_19] [i_22 + 2])))));
                            var_45 += ((/* implicit */_Bool) var_9);
                        }
                        for (int i_24 = 0; i_24 < 25; i_24 += 4) /* same iter space */
                        {
                            arr_87 [i_19] [i_20] [23LL] [i_24] [i_19] = ((/* implicit */unsigned char) 6247646537489106062LL);
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (4014010792038372917LL) : (8837553058737752793LL)))) ? ((((_Bool)1) ? (2512412380U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_83 [i_22 - 1])))))));
                        }
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 25; i_25 += 4) /* same iter space */
                        {
                            var_47 ^= ((/* implicit */unsigned long long int) (-(arr_78 [i_25] [i_22 + 1] [i_22 + 1] [i_22 - 1])));
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (signed char)50)))) : (((/* implicit */int) arr_88 [i_22 - 1] [i_22 + 3] [i_22 + 3] [i_22 + 2] [i_22 - 1]))));
                        }
                    }
                    arr_90 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)194))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) min((1500027318), (((/* implicit */int) (signed char)118)))))));
                    var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (max((1360522915U), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)250), (((/* implicit */unsigned char) (signed char)18)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7767395808631996169ULL)) ? (((/* implicit */unsigned int) 693228088)) : (306861858U)))) ? (((((/* implicit */_Bool) arr_89 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))))) : (((/* implicit */unsigned long long int) min((arr_78 [i_19] [i_20] [i_21] [i_21]), (((/* implicit */long long int) arr_72 [i_19] [i_19] [i_19])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 0; i_26 < 25; i_26 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7809123466980579315LL)) ? (((/* implicit */unsigned long long int) 2504931265396514329LL)) : (5232108121777561962ULL))))));
                        var_51 = ((/* implicit */long long int) max((var_51), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_80 [i_20])) ? (622583286U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_19] [i_20] [i_19]))))), (((/* implicit */unsigned int) (~(1712708317))))))) ? (((((/* implicit */_Bool) arr_74 [i_26] [i_20] [i_20] [i_19])) ? (((/* implicit */long long int) ((var_5) ? (145114579) : (arr_82 [i_19] [i_20] [i_19] [i_19] [i_26] [i_19] [i_20])))) : ((~(arr_89 [i_19] [i_20] [i_21] [(_Bool)1] [i_26]))))) : (((((/* implicit */_Bool) arr_92 [i_19] [i_26] [i_19] [i_26])) ? (arr_92 [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) var_4))))))));
                        var_52 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4222704488U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16125173415482736988ULL)))));
                        arr_94 [i_19] [i_19] [i_20] [i_19] [i_19] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)94))));
                    }
                }
            } 
        } 
    } 
}
