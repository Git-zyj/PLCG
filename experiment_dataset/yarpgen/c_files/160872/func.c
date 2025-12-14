/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160872
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
    var_17 &= ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)0)) : ((~(((/* implicit */int) (signed char)(-127 - 1)))))))));
    var_18 = ((/* implicit */int) (-((-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_9) : (var_2)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-113);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */long long int) arr_9 [i_1] [i_2 - 2]);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_0 [i_4 + 2] [i_2 + 2]))));
                            var_20 = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [(signed char)5] [i_2])))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) var_10)) < (arr_13 [i_0] [i_1] [i_1] [6ULL] [i_1] [i_4])));
                            arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_1] [i_0])) ? (arr_8 [i_3] [i_1] [i_1] [(signed char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115)))));
                            var_21 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_0 - 2] [i_2 - 1]);
                        }
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_3] [i_0] = (-(((/* implicit */int) (signed char)-120)));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_11))))) ? (((long long int) arr_0 [i_0] [(unsigned short)16])) : (((/* implicit */long long int) var_15))));
                            arr_19 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) > (var_12)));
                            arr_20 [i_1] [(short)10] [i_3] [9ULL] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [11] [i_2] [(signed char)12] [i_5])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_0] [i_3] [7U])) : (((/* implicit */int) (signed char)-115))))) : (arr_8 [i_2 + 3] [i_1] [i_1] [i_0 + 1])));
                        }
                        for (int i_6 = 4; i_6 < 16; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_0] [i_6] [(unsigned short)3])) && (((/* implicit */_Bool) (signed char)101)))))));
                            arr_23 [i_0 - 3] [i_1] [i_2] [i_1] [i_6] [i_1] = (+(arr_9 [i_1] [i_2 - 1]));
                            var_24 -= ((unsigned int) arr_17 [0ULL] [12LL]);
                            var_25 = ((/* implicit */int) (+(arr_3 [i_1])));
                        }
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) : (arr_12 [i_0 - 3] [i_3] [i_2 - 1])));
                        arr_24 [i_0] [(unsigned short)17] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)5] [i_1])) ? (((/* implicit */int) arr_17 [i_0] [(short)9])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [17U] [i_3] [i_2])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122)))))));
                        arr_30 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) (signed char)-102)) + (((/* implicit */int) (signed char)101)));
                    }
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_33 [i_0] [(signed char)13] [(signed char)13] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_0] [2U] [i_0] [3ULL] [i_0 - 2]))));
            arr_34 [i_0] = ((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 - 2]))) : (var_9));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_40 [i_0] [i_9] [3U] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)118))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_10] [i_0 - 2] [i_11] [5])) ? (((/* implicit */int) arr_21 [i_10] [(unsigned short)15] [i_0 - 2] [i_11] [i_0 - 2])) : (((/* implicit */int) arr_21 [i_0] [i_9] [i_0 + 1] [i_11] [14U]))));
                        var_29 = ((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 + 1] [6U] [(unsigned char)5] [i_9] [i_9] [i_0 - 1])))));
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_30 -= ((/* implicit */unsigned short) var_4);
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (signed char)-101))));
                            var_32 = ((/* implicit */int) (-(arr_32 [i_0 - 2])));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_11])) ? (arr_3 [i_10]) : (arr_3 [i_11])));
                        }
                        for (short i_13 = 3; i_13 < 17; i_13 += 1) 
                        {
                            arr_47 [i_13 - 1] [i_11] [5] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_13 - 2])) ? (arr_32 [i_13 - 1]) : (arr_32 [i_13 - 1])));
                            arr_48 [1LL] [i_9] [1LL] [(unsigned short)3] [i_13 + 1] = ((/* implicit */long long int) (-(var_7)));
                            var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-100))));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_13 - 2] [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_13 - 3])))))));
                        }
                        arr_49 [i_0] [i_9] [5] [i_11] = ((/* implicit */unsigned int) (+(arr_8 [i_0] [i_11] [i_0 - 2] [i_0])));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)103))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                arr_52 [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_10 [i_14] [i_0 - 1] [i_14 - 1] [i_14 - 1] [i_14]))));
                /* LoopNest 2 */
                for (signed char i_15 = 3; i_15 < 14; i_15 += 4) 
                {
                    for (short i_16 = 2; i_16 < 17; i_16 += 2) 
                    {
                        {
                            var_37 -= ((((/* implicit */int) arr_28 [i_9] [i_16 - 2])) >> (((((/* implicit */int) (signed char)101)) - (73))));
                            arr_57 [i_0] [i_9] [i_14] [i_15] [i_15] = ((((/* implicit */_Bool) (signed char)121)) ? (((((/* implicit */int) (signed char)-122)) / (((/* implicit */int) (signed char)83)))) : (((/* implicit */int) arr_16 [i_15])));
                            var_38 -= ((/* implicit */unsigned short) (+(var_0)));
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_60 [i_0] [i_9] [i_9] = ((/* implicit */unsigned short) (+(arr_38 [i_0 - 1] [i_0 - 3] [i_0])));
                var_39 = ((/* implicit */unsigned int) arr_21 [i_0 + 1] [i_9] [i_17] [(_Bool)1] [16]);
                arr_61 [(signed char)9] [i_0] &= ((/* implicit */long long int) (signed char)-101);
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    for (int i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        {
                            arr_67 [i_0] [i_9] [i_19] [i_18] [13] [i_17] = arr_2 [i_17] [i_18] [i_19];
                            var_40 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0] [i_17] [i_19 + 1]))))));
                            arr_68 [i_17] [i_17] [(unsigned char)1] [i_17] [i_19] = ((/* implicit */unsigned short) (~(arr_25 [(signed char)1] [i_19] [i_19])));
                            arr_69 [3U] [(signed char)12] [i_19] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)108)) / (((/* implicit */int) (signed char)107))));
                            var_41 = (-(((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (signed char)-115)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                var_42 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)97)) ? ((~(((/* implicit */int) (signed char)-107)))) : ((~(((/* implicit */int) arr_10 [i_20] [i_9] [i_9] [i_9] [(_Bool)1]))))));
                /* LoopSeq 3 */
                for (int i_21 = 2; i_21 < 17; i_21 += 4) 
                {
                    var_43 = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 4 */
                    for (unsigned short i_22 = 0; i_22 < 18; i_22 += 1) 
                    {
                        arr_79 [i_0] [i_9] [4] [i_20] [i_21] &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)107)) << (((((/* implicit */int) (signed char)108)) - (95)))));
                        arr_80 [i_22] [i_21] [i_20] [i_22] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-108))));
                        arr_81 [i_22] = ((/* implicit */unsigned long long int) (-(arr_64 [i_22] [i_0 - 3])));
                    }
                    for (int i_23 = 0; i_23 < 18; i_23 += 3) /* same iter space */
                    {
                        arr_84 [i_0] [i_9] [i_0] [12U] [i_0] [i_0] = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_43 [i_0 - 2] [i_21 - 2] [i_21] [i_21 - 2])));
                        arr_85 [i_23] [i_20] [i_20] [i_9] [i_0 - 2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_25 [i_0] [i_9] [i_21])))));
                        arr_86 [i_0] [(signed char)5] [i_20] [(signed char)5] [i_23] = ((((/* implicit */_Bool) arr_66 [(short)0] [i_0 - 2] [i_21 + 1] [i_0 - 2] [i_21])) ? (((/* implicit */int) arr_66 [i_0 - 3] [i_0 - 3] [i_21 - 1] [i_23] [i_21])) : (((/* implicit */int) arr_66 [i_0] [i_0 + 1] [i_21 - 2] [i_0 + 1] [i_20])));
                        arr_87 [i_0] [i_21] [i_20] [6U] [i_23] [2] = ((int) arr_7 [i_0] [i_0 - 2] [i_21 - 1] [i_21]);
                    }
                    for (int i_24 = 0; i_24 < 18; i_24 += 3) /* same iter space */
                    {
                        arr_91 [i_0] [i_9] [i_0] [(_Bool)1] [i_24] [i_21] [12ULL] = ((/* implicit */_Bool) (signed char)107);
                        var_44 -= ((/* implicit */_Bool) (+(arr_89 [(signed char)8] [i_0 - 2] [(signed char)8] [i_21 + 1] [i_24] [i_24])));
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_4))));
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((long long int) var_16)) : (((/* implicit */long long int) ((arr_65 [i_0] [i_9] [i_20] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [6U] [14] [i_9] [i_0])))))))))));
                    }
                    for (int i_25 = 0; i_25 < 18; i_25 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-89)))) + (((((/* implicit */int) arr_10 [i_25] [i_21] [i_20] [i_9] [i_25])) >> (((arr_74 [i_20] [0U]) - (1133078690)))))));
                        arr_94 [i_25] [i_25] [i_21] = ((/* implicit */unsigned short) arr_25 [i_25] [5] [i_25]);
                        var_48 = ((((((/* implicit */int) (signed char)-126)) >= (((/* implicit */int) (signed char)-91)))) || (((/* implicit */_Bool) (signed char)98)));
                    }
                    var_49 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)92))));
                }
                for (unsigned int i_26 = 3; i_26 < 16; i_26 += 3) 
                {
                    arr_99 [i_0] [(short)9] [8] [i_20] [i_0] [i_26] = ((/* implicit */unsigned long long int) arr_90 [i_9] [i_9] [i_26]);
                    var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) arr_45 [i_9])) : (((/* implicit */int) (signed char)108)))) - ((+(((/* implicit */int) (signed char)-110)))))))));
                }
                for (unsigned int i_27 = 2; i_27 < 17; i_27 += 4) 
                {
                    var_51 |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_45 [i_0 - 2]))));
                    var_52 -= arr_5 [i_0 + 1] [i_27 + 1] [i_20] [i_20];
                    arr_104 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (arr_64 [i_27] [i_27]) : (var_16))) > (((/* implicit */int) (signed char)-88))));
                    arr_105 [i_20] [i_20] [i_20] [i_27] [(signed char)13] [(signed char)16] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-124))));
                }
                var_53 = ((/* implicit */short) arr_88 [i_9] [i_20] [i_9] [i_0 + 1]);
            }
        }
        for (int i_28 = 0; i_28 < 18; i_28 += 4) 
        {
            arr_109 [(short)12] = ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) >= (arr_65 [i_0] [(signed char)13] [i_0 - 1] [i_28] [i_0]));
            var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) (signed char)-93))));
            var_55 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_93 [i_28])) + (2147483647))) >> (((((/* implicit */int) (signed char)-114)) + (119)))));
            arr_110 [i_28] [i_28] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_97 [i_0] [i_0] [i_28] [i_0 - 2] [i_0 - 1] [i_0])) ? (arr_97 [i_0 - 2] [(_Bool)1] [i_28] [i_0 - 2] [i_0 + 1] [(_Bool)1]) : (arr_97 [i_0] [i_0] [i_28] [i_0 - 3] [i_0 - 3] [i_0])));
        }
        var_56 = ((((((/* implicit */int) (signed char)-96)) + (2147483647))) >> (((((/* implicit */int) (signed char)-102)) + (129))));
    }
    for (unsigned short i_29 = 2; i_29 < 22; i_29 += 4) 
    {
        arr_114 [(_Bool)1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((((/* implicit */signed char) var_10)), ((signed char)127)))) ? (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_111 [i_29] [i_29])) : (((/* implicit */int) (signed char)92)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101)))))))));
        arr_115 [i_29] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((var_13) ? (var_16) : (arr_112 [i_29 - 1])))), ((~(var_2)))));
    }
    for (int i_30 = 0; i_30 < 14; i_30 += 1) 
    {
        var_57 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)108)) - (((/* implicit */int) arr_93 [2]))));
        arr_118 [(signed char)12] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)96)) & (((/* implicit */int) (signed char)-114))));
        arr_119 [i_30] = ((/* implicit */_Bool) arr_27 [i_30] [i_30] [4] [i_30]);
    }
    var_58 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)98))));
}
