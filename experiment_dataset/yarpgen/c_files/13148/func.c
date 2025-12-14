/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13148
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) var_12))))) : (((((/* implicit */int) (unsigned char)19)) + (10)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_1] = var_1;
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -3345717581641520994LL)) ? (3309835558U) : (((/* implicit */unsigned int) 10))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16352)) || (((/* implicit */_Bool) 3837294888U))));
                        }
                        for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
                        {
                            arr_18 [(unsigned short)7] [12U] [i_3] = ((/* implicit */unsigned char) arr_1 [i_0]);
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5 - 2] [i_3 - 1] [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) min((var_7), (arr_3 [i_0] [(_Bool)1] [i_0])))) : (((/* implicit */int) ((unsigned char) arr_4 [i_3 + 1]))))))));
                        }
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_3] [i_2] [i_0] [i_6 + 1] = max((arr_16 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2]), (((/* implicit */unsigned int) arr_13 [i_0] [(_Bool)1] [i_1 - 1] [i_2] [i_2] [i_1 - 1] [i_6])));
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (short)22687)) != (((/* implicit */int) (signed char)16))))), (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_3 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_1 + 1] [i_3 + 1]))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [(unsigned short)4] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6392212073471327548ULL)) ? (12491605740313578380ULL) : (((/* implicit */unsigned long long int) -1))))) ? (-3345717581641520987LL) : (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_7] [i_1] [i_7] [i_1] [i_1]))));
                            var_20 -= ((/* implicit */unsigned short) arr_14 [i_0] [i_3] [i_7]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_29 [i_3] [i_1 + 1] [i_2] [(unsigned char)4] [i_3] [(unsigned char)4] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [17U] [i_1] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [7ULL])) >= (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_23 [i_0] [i_1 + 1] [(unsigned char)4] [i_3 + 1] [i_1 - 2] [i_0] [i_0])) ? (arr_16 [i_1 + 1] [i_3 - 1] [i_2] [i_3] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_8] [i_1] [i_3 + 1] [i_1 - 1] [i_0] [(_Bool)1])))))));
                            var_21 &= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_2] [i_1] [i_0]))) : (var_14)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((arr_21 [i_0] [i_0] [i_1] [i_1 + 1] [i_2] [i_3 - 1] [i_8]), (arr_21 [i_0] [i_1] [i_1] [i_0] [(unsigned char)19] [i_0] [i_2])))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min(((~(((/* implicit */int) arr_6 [i_0] [(signed char)4] [1])))), (((/* implicit */int) var_6)))))));
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_23 &= ((/* implicit */short) 14653415919280338542ULL);
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0] [i_0])) ? (min((var_14), (((/* implicit */unsigned long long int) arr_24 [i_2] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_12))))))))));
                    }
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_14))));
                }
            } 
        } 
        arr_32 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)-16352)) ? (((((/* implicit */_Bool) 1466194710U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)17)))) : (((/* implicit */int) var_5)))) : (min((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [(signed char)11] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0])))), ((+(((/* implicit */int) arr_12 [i_0] [0LL] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [(unsigned char)10] [i_10] [i_10])) ? (arr_33 [12ULL]) : (((/* implicit */int) arr_30 [0] [i_10] [0] [i_10] [i_10] [i_10]))))) : (arr_16 [i_10] [i_10] [i_10] [0LL] [i_10])))) ? (min((((((/* implicit */_Bool) arr_3 [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((unsigned char) var_15))))) : (((/* implicit */int) arr_30 [i_10] [i_10] [(unsigned char)12] [6U] [i_10] [(unsigned char)12]))));
        arr_36 [i_10] [(short)11] = ((/* implicit */unsigned char) (-(var_13)));
        var_27 += ((/* implicit */short) (+(max((((((/* implicit */_Bool) arr_10 [i_10] [8ULL])) ? (arr_5 [(unsigned short)3] [i_10] [(unsigned short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_10] [i_10] [1]))))), (((/* implicit */unsigned long long int) var_1))))));
    }
    for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
    {
        var_28 += ((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)20)), ((short)-21156)))), ((-(((((/* implicit */int) var_8)) << (((((((/* implicit */int) (short)-21399)) + (21427))) - (15)))))))));
        arr_41 [2LL] &= ((/* implicit */long long int) var_13);
    }
    var_29 = ((/* implicit */unsigned long long int) var_9);
    var_30 *= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (var_0))))), (((/* implicit */unsigned int) (unsigned char)26))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_12 = 2; i_12 < 9; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            for (unsigned char i_14 = 1; i_14 < 9; i_14 += 4) 
            {
                {
                    arr_51 [i_14] [i_13] [i_14] = ((/* implicit */unsigned char) (+(arr_40 [i_14 + 1] [i_13])));
                    arr_52 [i_14] [i_14] = ((/* implicit */unsigned int) var_12);
                    arr_53 [i_12] [i_13] [(unsigned char)4] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_14 - 1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_12 - 2] [i_14 + 1] [i_14 - 1] [i_14 - 1] [(_Bool)0])) << (((/* implicit */int) ((_Bool) arr_21 [i_12 + 1] [i_12 + 1] [i_13] [i_13] [i_14] [i_12 + 1] [i_14 - 1]))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_15 = 3; i_15 < 8; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            arr_63 [0LL] [i_18] [i_17] [i_12] [i_18] = ((/* implicit */int) ((((/* implicit */int) arr_35 [i_12 - 1])) < (((/* implicit */int) var_12))));
                            arr_64 [2U] [i_12 - 2] [i_16] [2U] [i_18] = ((/* implicit */unsigned long long int) (~(arr_17 [i_12] [i_15] [(unsigned short)3] [i_17] [i_18])));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [i_12] [i_15 - 3] [i_12] [i_17] [i_15] [i_12])) == (((/* implicit */int) arr_59 [i_16] [i_17] [i_16] [i_12 - 2] [i_15 + 2] [i_12 - 2]))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            var_33 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_12] [i_15] [i_12])) ? (((/* implicit */int) (signed char)71)) : (-1963820573)))) ? (((/* implicit */int) arr_31 [i_19] [i_16] [i_15] [i_12])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) && (((/* implicit */_Bool) -8342367198180864540LL)))))));
                            var_34 = ((/* implicit */unsigned char) arr_50 [i_12] [i_12] [i_12 - 1]);
                        }
                        for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            var_35 += ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_20] [i_16] [i_15 + 1])) : (((/* implicit */int) var_7)))));
                            arr_70 [i_20] [i_17] [(_Bool)1] [i_15] [i_12 - 2] = ((/* implicit */long long int) arr_60 [i_20] [i_17] [(short)5] [(unsigned char)3] [i_12]);
                            var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_12 - 2])) / (((/* implicit */int) var_8))));
                            arr_71 [i_12 - 2] [i_15] [i_16] [i_17] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) arr_3 [i_12 + 1] [i_17] [i_15 + 1])) : (arr_33 [i_12])));
                        }
                        var_37 = ((/* implicit */short) (+(((/* implicit */int) arr_30 [(_Bool)1] [(_Bool)1] [i_16] [i_17] [i_12] [i_16]))));
                        arr_72 [i_12 + 1] [i_15] [i_16] [i_17] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_15 - 2])))));
                        var_38 -= ((/* implicit */signed char) arr_47 [i_12 - 2] [i_17] [i_16]);
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)20625))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_48 [i_15 + 2] [i_15 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) arr_43 [i_15 - 3]))));
                    }
                } 
            } 
        } 
        arr_73 [(signed char)7] [(signed char)5] = ((/* implicit */_Bool) arr_1 [i_12 + 1]);
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                {
                    arr_78 [i_12] [i_12] [i_22] [i_21] = ((/* implicit */long long int) (+(8437204744255826145ULL)));
                    arr_79 [i_22] = ((/* implicit */short) ((-3345717581641520999LL) | (((/* implicit */long long int) -1))));
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        for (short i_24 = 0; i_24 < 10; i_24 += 4) 
                        {
                            {
                                var_40 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_24])) ? (arr_40 [i_24] [i_24]) : (((/* implicit */int) var_10))))) == (var_0));
                                arr_86 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_47 [i_12 - 1] [i_21] [i_21]) : (arr_47 [i_12 + 1] [i_24] [i_22])));
                                arr_87 [i_24] [i_24] [i_22] [i_23] [i_22] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_12 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12 - 2] [i_21] [i_21] [18ULL] [i_22] [i_12 - 2] [i_24]))) : (arr_83 [i_21])));
                                var_41 *= ((/* implicit */unsigned int) var_16);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_42 -= ((/* implicit */_Bool) arr_69 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
    }
    /* vectorizable */
    for (unsigned short i_25 = 2; i_25 < 15; i_25 += 4) 
    {
        var_43 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_25] [(short)11] [i_25 - 1] [i_25 + 1])) & (var_9)))) ? (((((/* implicit */_Bool) arr_89 [(unsigned short)12] [i_25])) ? (((/* implicit */int) arr_3 [i_25] [i_25 + 2] [(unsigned short)6])) : (((/* implicit */int) (short)32444)))) : (((/* implicit */int) arr_0 [i_25 + 1] [i_25 - 1]))));
        arr_91 [i_25] [i_25] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_30 [(unsigned char)17] [i_25 + 1] [(unsigned char)17] [i_25 - 1] [i_25 - 1] [i_25]))));
        arr_92 [i_25] = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 2) 
    {
        var_44 = min((min((((/* implicit */unsigned char) arr_27 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])), (arr_3 [i_26] [i_26] [(unsigned char)12]))), (((/* implicit */unsigned char) max((arr_27 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]), (((/* implicit */signed char) arr_28 [i_26] [(_Bool)1] [i_26] [i_26] [i_26] [i_26] [i_26]))))));
        arr_96 [i_26] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_26] [i_26])) ? (((/* implicit */int) arr_0 [i_26] [i_26])) : (((/* implicit */int) var_1)))), (((/* implicit */int) min((arr_0 [i_26] [i_26]), (arr_0 [i_26] [i_26]))))));
        var_45 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_26]), (arr_7 [i_26])))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_7 [i_26])) ? (((/* implicit */int) arr_7 [i_26])) : (((/* implicit */int) arr_7 [i_26]))))));
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        arr_99 [i_27] = var_12;
        /* LoopNest 3 */
        for (unsigned int i_28 = 2; i_28 < 13; i_28 += 3) 
        {
            for (unsigned int i_29 = 3; i_29 < 12; i_29 += 4) 
            {
                for (long long int i_30 = 1; i_30 < 13; i_30 += 4) 
                {
                    {
                        arr_107 [(unsigned short)4] [i_28] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_27] [21ULL] [i_27] [(unsigned short)15] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_30 + 1]))) : (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_29] [i_29] [i_29]) : (var_14)))));
                        arr_108 [i_27] [i_28] [i_29 + 3] [i_30 + 2] [i_27] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_27] [i_27] [i_27] [i_28 + 1] [i_28] [i_29 + 2] [i_27])) >> (((((/* implicit */int) arr_24 [i_27] [i_27])) - (82)))))) ? (arr_88 [i_30 - 1]) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-10)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            arr_111 [i_28] [i_30 + 1] [14ULL] [i_28 - 2] [(short)12] [i_28] [i_29 - 2] |= ((/* implicit */unsigned short) var_11);
                            var_46 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8343))));
                            arr_112 [(short)13] [(signed char)11] [3U] [(signed char)11] [i_27] [i_30] = ((/* implicit */unsigned char) arr_31 [i_27] [i_27] [i_27] [i_27]);
                            var_47 += ((/* implicit */signed char) (+(arr_103 [12] [i_28] [i_28])));
                        }
                        for (short i_32 = 1; i_32 < 14; i_32 += 3) 
                        {
                            var_48 -= ((/* implicit */_Bool) arr_21 [i_27] [i_28] [i_27] [i_30 + 2] [i_30] [i_30] [i_32]);
                            var_49 *= ((/* implicit */signed char) arr_24 [i_27] [i_28 - 2]);
                            arr_115 [i_27] = ((/* implicit */unsigned long long int) var_0);
                            arr_116 [i_27] [i_27] = (i_27 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_110 [i_27] [(unsigned char)9] [i_29] [(unsigned char)9] [i_27] [i_27])) + (32)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((((((((/* implicit */int) arr_110 [i_27] [(unsigned char)9] [i_29] [(unsigned char)9] [i_27] [i_27])) + (32))) + (55))) - (1))))));
                        }
                        var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-8344))));
                        var_51 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_104 [14] [i_28 - 2] [i_28 - 1] [i_29 - 2] [i_30])) ? (arr_104 [(unsigned char)8] [i_28 - 1] [i_29] [i_29 - 1] [i_30 + 2]) : (arr_104 [(unsigned short)8] [i_28 - 2] [i_29] [i_29 + 1] [i_30])));
                    }
                } 
            } 
        } 
    }
}
