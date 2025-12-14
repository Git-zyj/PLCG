/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1412
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
    var_14 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_8))));
                    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_5 [i_1 + 1] [4] [i_1 + 1] [i_1 + 2]))))) ? (max((arr_2 [0] [i_1 + 2]), (((/* implicit */unsigned int) max(((unsigned short)22035), (((/* implicit */unsigned short) (short)112))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_2] [(unsigned short)0] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (short)32767))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_0])), (var_9)));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4061468177339956930ULL)) ? (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (signed char)58)))))) : (arr_0 [(signed char)1])))) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (short)-5))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (min((arr_8 [(unsigned short)1] [(unsigned short)1] [(unsigned short)6] [i_2] [(unsigned short)7]), (((/* implicit */unsigned long long int) var_10)))))));
                }
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_19 = ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_5] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) > (9223372036854775807LL))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_1 + 1] [(signed char)9] [i_1 + 2] [i_1 - 2] [i_1 - 1]), (arr_9 [i_1 + 1] [6] [i_1 - 1] [i_1 - 2] [i_1 - 1])))) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 2])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_1 - 1] [4U] [i_1 - 2] [i_1 - 2] [i_1 + 2]))))));
                    var_21 |= ((/* implicit */int) arr_1 [i_1] [i_5]);
                }
                var_22 = ((/* implicit */short) max(((+(arr_15 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (-1674139728985898464LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            {
                var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 503316480U)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (signed char)78))))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_0)))) : (var_10))), (arr_16 [i_6] [i_6])));
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6339381804136320131ULL)) ? ((+(((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_6]))) : (arr_21 [i_6] [i_7] [(signed char)17] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned long long int) max((var_12), (((/* implicit */short) var_1))))))));
                }
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                {
                    arr_26 [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_6] [i_7])) : (((/* implicit */int) (signed char)-77))))) ? (((arr_18 [i_6] [i_6]) ? (((/* implicit */unsigned long long int) 6567197362530857679LL)) : (arr_21 [i_6] [(short)5] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) -6567197362530857679LL)))), (((/* implicit */unsigned long long int) (short)32755))));
                    var_25 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((min((var_0), (var_12))), (((/* implicit */short) arr_17 [i_6] [i_6]))))), (min((16144598434752979315ULL), (((/* implicit */unsigned long long int) arr_24 [i_6] [(short)14]))))));
                    var_26 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 1052356991U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23))) : (65534LL))));
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [(_Bool)1] [i_6]))));
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 4; i_11 < 19; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            {
                                arr_34 [i_6] [i_6] [i_7] [4ULL] [i_12] [i_11] &= (!(((/* implicit */_Bool) arr_19 [i_10 - 2] [i_11])));
                                arr_35 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_6);
                                arr_36 [i_6] [i_6] [i_10] [i_10] [i_12] = var_2;
                                var_28 = ((/* implicit */int) ((long long int) arr_21 [i_11] [i_11] [i_11 - 4] [i_11]));
                            }
                        } 
                    } 
                    arr_37 [i_6] [i_6] [(unsigned short)18] = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_10] [i_10 + 1] [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1])) > (((/* implicit */int) arr_31 [i_10 - 2] [i_10 - 1] [12U] [i_10 - 2] [i_10 + 1] [i_10]))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_29 = ((/* implicit */int) max((var_29), (min((((int) var_11)), (((((/* implicit */_Bool) arr_19 [i_13] [(short)8])) ? (1512101542) : (((/* implicit */int) var_11))))))));
        arr_40 [i_13] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_16 [(unsigned short)6] [(short)18]), (arr_16 [(short)6] [14U])))), (((((/* implicit */_Bool) arr_21 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_16 [(short)20] [(short)16])) : (16U)))))));
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 1) 
            {
                for (signed char i_16 = 2; i_16 < 16; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            var_30 = ((/* implicit */int) arr_45 [i_15] [i_15] [(_Bool)1]);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_15] [i_16 + 1])) ? (arr_20 [i_15] [i_16 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)10)))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)756)) : (((/* implicit */int) var_0))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_45 [i_15] [i_15] [i_15 + 2]))));
                            var_34 = ((((/* implicit */_Bool) arr_31 [i_15] [(short)4] [i_15] [i_15] [i_15 - 2] [i_15 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_31 [i_15 + 4] [i_15 + 4] [(_Bool)1] [i_15] [i_15 + 4] [i_15 - 1])));
                        }
                        for (long long int i_18 = 2; i_18 < 16; i_18 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_15 + 3] [i_16 + 1] [i_15] [i_18 + 1] [i_18])) ? (4294966272U) : (((/* implicit */unsigned int) -1276467508)))))));
                            arr_56 [i_15] [i_13] [i_14] [(unsigned short)10] [i_14] [i_18] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(var_9)))), (max((((((/* implicit */_Bool) (signed char)-68)) ? (385021000U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_0)))))))));
                            var_36 = ((/* implicit */short) max((min((arr_47 [i_13] [i_14] [i_14] [i_15 + 1]), (arr_25 [i_13] [(short)1] [i_15]))), (((/* implicit */unsigned long long int) (-(arr_43 [i_15] [i_15 + 4] [i_15 + 4]))))));
                        }
                        arr_57 [i_15] [i_14] [i_14] [(_Bool)1] = max((arr_51 [i_15] [i_15] [i_15] [i_15] [i_15 + 2] [i_15 - 2] [i_15]), (max((arr_52 [i_13] [6U] [i_15] [i_13] [i_13]), (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            var_37 |= ((/* implicit */int) arr_46 [i_19]);
                            var_38 = ((/* implicit */unsigned char) var_5);
                        }
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_13] [i_16] [i_15 + 1] [13] [i_13] [(unsigned char)20])) ? (((/* implicit */int) arr_31 [i_13] [(_Bool)1] [i_14] [i_15] [i_15 + 4] [i_16])) : (2147483647)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_16] [i_16 + 1] [i_16] [(short)4] [i_16 - 2] [15]))))) : (((((/* implicit */_Bool) 856618512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2134))) : (5576330249372380252ULL)))));
                        var_40 -= ((/* implicit */_Bool) min((((arr_50 [i_13] [(short)10] [i_13] [i_16]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (max((arr_55 [i_16] [i_16] [i_16] [i_16] [i_15] [i_16 - 1]), (((/* implicit */unsigned long long int) 4852547281167851072LL))))));
                    }
                } 
            } 
            var_41 = arr_19 [i_13] [10U];
        }
        /* vectorizable */
        for (signed char i_20 = 0; i_20 < 17; i_20 += 3) /* same iter space */
        {
            arr_62 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_13] [20])) ? (((/* implicit */int) arr_24 [10] [10])) : (((/* implicit */int) arr_24 [(short)6] [10LL]))));
            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) -1570276821)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (70093866270720LL)));
        }
        /* LoopSeq 2 */
        for (unsigned int i_21 = 0; i_21 < 17; i_21 += 3) 
        {
            var_43 = ((/* implicit */short) var_10);
            arr_65 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 554371365942553641ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)757))) : (arr_50 [i_13] [(short)8] [i_13] [i_13])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_13] [4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [8] [(_Bool)1])))))));
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) arr_61 [(short)2] [i_21]))));
            /* LoopSeq 1 */
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_23 = 2; i_23 < 16; i_23 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 2; i_24 < 15; i_24 += 2) 
                    {
                        var_45 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) ((unsigned short) var_6))) ^ (min((var_8), (((/* implicit */int) (unsigned char)98)))))));
                        var_46 = (-(14179100466391979847ULL));
                        arr_72 [i_23 + 1] [16ULL] [i_21] = ((/* implicit */long long int) arr_52 [i_13] [i_13] [i_24] [i_13] [i_13]);
                    }
                    var_47 -= (-(max((((/* implicit */unsigned int) arr_31 [(signed char)20] [12ULL] [i_22] [i_23] [i_13] [i_13])), (arr_43 [i_22 - 1] [i_22 - 1] [i_23 - 2]))));
                }
                for (unsigned short i_25 = 0; i_25 < 17; i_25 += 1) 
                {
                    var_48 = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 3 */
                    for (int i_26 = 0; i_26 < 17; i_26 += 2) 
                    {
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_13] [i_13] [i_26] [12] [10])))))) ^ (((((/* implicit */int) arr_19 [i_22] [i_26])) ^ (((/* implicit */int) arr_32 [i_13] [(short)0] [i_26] [i_25] [i_26])))))))));
                        arr_78 [i_13] [i_21] [i_22] [12U] [i_26] [i_26] = ((/* implicit */_Bool) arr_50 [i_13] [i_26] [(signed char)2] [i_13]);
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-32767)), (4852547281167851072LL)));
                        arr_81 [i_27] [i_27] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_49 [i_27] [i_22] [i_22] [i_22] [(signed char)13] [i_22 - 1])) ? (((/* implicit */int) arr_49 [i_27] [i_22] [i_22] [i_22] [i_22] [i_22 - 1])) : (((/* implicit */int) arr_49 [i_27] [i_22 - 1] [i_22] [i_22] [5U] [i_22 - 1])))));
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) ((short) var_10))))))));
                        var_52 = ((/* implicit */short) (~(((/* implicit */int) arr_77 [i_13] [i_13] [(short)10] [9]))));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((signed char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_74 [11ULL] [(short)8] [i_21] [i_22] [i_25] [14LL])) : (((/* implicit */int) arr_79 [(unsigned char)10] [i_21] [4LL] [13] [i_22] [i_25] [i_28])))), (arr_53 [(_Bool)1] [i_13] [i_22] [i_28] [i_22 - 1] [13ULL] [i_25])))))));
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) (short)-22148)), (12870413824337171367ULL)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (var_8)))) : (((int) 1864007373U)))) : (min((var_9), (max((var_10), (var_8)))))));
                    }
                    var_55 ^= ((/* implicit */int) ((min((arr_30 [(unsigned char)12] [i_21]), (((/* implicit */unsigned int) arr_24 [i_13] [8U])))) >> (((((((/* implicit */_Bool) 755957333)) ? (((/* implicit */int) var_6)) : (arr_69 [i_22 - 1] [i_22] [10LL] [i_22]))) + (3361)))));
                    var_56 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_13])) ? (max((arr_50 [i_13] [14] [i_22 - 1] [i_22 - 1]), (arr_50 [i_13] [0LL] [i_22 - 1] [i_22 - 1]))) : (((arr_66 [i_13] [i_22] [i_22 - 1]) | (((/* implicit */unsigned long long int) (~(arr_41 [i_13] [i_13] [i_13]))))))));
                    arr_84 [i_13] [i_21] [i_21] [i_22] [13ULL] [i_22] |= var_12;
                }
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 17; i_29 += 3) 
                {
                    for (signed char i_30 = 0; i_30 < 17; i_30 += 1) 
                    {
                        {
                            var_57 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (arr_53 [i_13] [i_13] [i_13] [i_21] [i_22 - 1] [i_29] [(short)2])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))));
                            var_58 = ((/* implicit */unsigned long long int) arr_64 [i_13]);
                            arr_89 [i_13] [(signed char)16] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_80 [6] [i_22 - 1] [(_Bool)1] [i_29]) : (((/* implicit */int) arr_49 [(unsigned short)0] [i_21] [i_22 - 1] [(short)10] [i_30] [i_30]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (4160749568U)))) : (arr_80 [14LL] [i_22 - 1] [14LL] [i_29]));
                        }
                    } 
                } 
                var_59 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) arr_70 [i_13] [i_22 - 1] [i_21] [i_13] [i_13]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4844)) ? (arr_51 [i_13] [i_13] [2] [12ULL] [i_13] [14ULL] [14ULL]) : (((/* implicit */int) arr_46 [(unsigned short)10]))))) : (((((/* implicit */_Bool) arr_63 [(short)8] [(short)8])) ? (var_3) : (var_3)))))));
            }
            arr_90 [i_21] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned short)1792)) != (((/* implicit */int) (short)16384)))));
        }
        for (short i_31 = 0; i_31 < 17; i_31 += 2) 
        {
            var_60 = ((/* implicit */unsigned long long int) (+(((int) arr_16 [i_13] [i_31]))));
            arr_93 [3U] [3U] [3U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_31] [i_31] [i_31] [12])) ? (((/* implicit */int) var_4)) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_13] [i_31]))) : (((((/* implicit */_Bool) arr_82 [(unsigned short)2])) ? (arr_82 [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_13] [(signed char)4] [i_31] [i_31] [i_31]))) / (arr_58 [i_13] [i_13] [i_13] [i_13] [i_13]))));
        }
    }
}
