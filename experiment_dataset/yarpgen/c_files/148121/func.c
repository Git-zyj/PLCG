/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148121
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) min((arr_1 [i_0 + 2]), (((/* implicit */unsigned int) 173205835))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) ((unsigned char) 4661992469997988078LL))))) : (((((/* implicit */int) (signed char)42)) >> ((((+(173205835))) - (173205815))))))))));
            arr_4 [i_0 - 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned char) var_14);
            var_18 -= ((/* implicit */_Bool) var_5);
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))))));
        }
    }
    for (int i_2 = 1; i_2 < 8; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = ((/* implicit */signed char) arr_2 [i_2]);
        var_20 = ((/* implicit */signed char) arr_1 [i_2]);
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) 1399446103);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_2])) ? (var_9) : (((/* implicit */long long int) arr_11 [i_2] [i_3] [i_2]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    arr_16 [i_2] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2 + 1] [i_2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)106))))) : (arr_12 [i_2] [i_2])));
                    var_22 *= ((/* implicit */unsigned long long int) arr_1 [i_4]);
                }
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) arr_2 [i_2]);
                    arr_19 [i_2 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) 173205841);
                    var_24 = ((/* implicit */unsigned long long int) (-(926928102U)));
                }
                arr_20 [i_2] = ((/* implicit */unsigned char) arr_1 [i_2]);
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -415971387)) ? (((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_4])) : (((/* implicit */int) var_2)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 173205835)))))));
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                arr_23 [i_2 - 1] [i_3] [i_2] = ((/* implicit */unsigned short) var_10);
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 6; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 2])) ? (arr_27 [i_9 + 2] [i_2 + 2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1] [i_2 + 2]))))))));
                        var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (2642736376U));
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_34 [i_2] [i_2] = ((((/* implicit */_Bool) arr_24 [i_10] [i_8] [i_7] [i_2 - 1])) ? (arr_24 [i_2 + 2] [i_3] [i_7] [i_8]) : (arr_24 [i_2] [i_3] [i_7] [i_10]));
                        var_28 = ((/* implicit */unsigned char) (+(4661992469997988078LL)));
                    }
                    arr_35 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 2]))));
                }
                for (signed char i_11 = 1; i_11 < 9; i_11 += 2) /* same iter space */
                {
                    var_29 = var_14;
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (arr_3 [i_2] [i_7]) : (((/* implicit */unsigned long long int) 2642736376U))));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) var_14);
                        arr_43 [i_12] [i_11 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)183));
                    }
                }
                for (signed char i_13 = 1; i_13 < 9; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_50 [i_2] [i_3] [i_3] [i_2] [i_14] = ((/* implicit */signed char) (-(((var_10) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        arr_51 [i_2] [0ULL] [i_7] [i_2] [i_14] = ((/* implicit */signed char) arr_40 [i_2 - 1] [i_3] [6ULL] [i_13] [i_14]);
                    }
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_32 [i_7] [i_13]))));
                }
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_16 = 4; i_16 < 8; i_16 += 1) 
            {
                for (unsigned char i_17 = 4; i_17 < 8; i_17 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
                        {
                            arr_61 [i_2] [1ULL] [i_2] [i_17] [i_15] [i_17 + 2] [i_15] = ((/* implicit */signed char) min(((+(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) ((((/* implicit */int) arr_47 [i_2] [9] [i_17] [i_16] [i_15] [i_2 - 1] [i_2])) < (((/* implicit */int) arr_59 [i_2] [i_15] [i_16 + 1] [i_17] [i_2])))))))));
                            arr_62 [i_2 - 1] [i_15] [i_2] [i_17 - 1] [i_18] = ((/* implicit */_Bool) var_2);
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
                        {
                            arr_66 [i_2] [i_2] [i_16] [i_16] = ((/* implicit */unsigned char) ((int) ((14517488682583947055ULL) << (((/* implicit */int) (_Bool)1)))));
                            arr_67 [i_2] [i_16 + 2] [i_2] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((-415971376) + (2147483647))) >> (((173205817) - (173205812)))))) ? (min((((/* implicit */unsigned int) var_12)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) : (2070588609U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_19] [i_17] [i_2 + 2])))));
                            arr_68 [i_2] [i_2] [i_2] [i_17 - 3] [i_19] = ((/* implicit */_Bool) min((var_13), (576350024)));
                        }
                        var_33 = ((/* implicit */unsigned char) (~(((var_0) ? (((/* implicit */int) max((((/* implicit */short) arr_64 [i_2] [i_15] [i_16] [i_16 + 2] [i_16 - 2] [i_16] [8])), (var_3)))) : (((((/* implicit */int) (_Bool)1)) ^ (9317382)))))));
                        /* LoopSeq 1 */
                        for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            var_34 &= ((/* implicit */unsigned short) (~(-911841692)));
                            var_35 ^= ((/* implicit */unsigned short) ((unsigned long long int) max((arr_5 [i_2 + 2]), (arr_5 [i_2]))));
                            arr_73 [i_2] = ((/* implicit */unsigned long long int) arr_37 [i_2 - 1] [i_2] [i_16] [i_17] [i_20]);
                            var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_2] [i_15] [i_17 - 3])) | (((/* implicit */int) arr_44 [i_17 - 3] [i_17 + 2] [i_16 - 4] [i_2 + 1]))))) & (3568655936U)));
                            arr_74 [i_2] [i_17 + 1] [i_16 - 4] [i_15] [i_2] [i_2] = ((/* implicit */int) (_Bool)0);
                        }
                        arr_75 [(unsigned char)8] [i_16] [i_2] [i_2] [i_15] [i_2 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24407)) - (((/* implicit */int) (short)5620))));
                        var_37 = ((/* implicit */int) arr_63 [i_2 - 1] [i_2] [i_2]);
                    }
                } 
            } 
            arr_76 [i_2] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((-173205818) ^ (-173205818))) : (min(((~(((/* implicit */int) (unsigned char)119)))), (((/* implicit */int) var_3))))));
            var_38 = (i_2 % 2 == 0) ? (min((min((((/* implicit */int) min((var_2), (arr_25 [i_2])))), (((((var_13) + (2147483647))) >> (0ULL))))), (((/* implicit */int) ((((((/* implicit */int) (signed char)63)) << (((/* implicit */int) arr_53 [i_2] [i_15])))) > (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)75))))))))) : (min((min((((/* implicit */int) min((var_2), (arr_25 [i_2])))), (((((var_13) + (2147483647))) >> (0ULL))))), (((/* implicit */int) ((((((/* implicit */int) (signed char)63)) << (((((/* implicit */int) arr_53 [i_2] [i_15])) + (50))))) > (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)75)))))))));
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            for (long long int i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(7147891662118382498ULL)))) ? (((/* implicit */int) arr_0 [i_2 + 2])) : (((int) var_11))));
                            var_40 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 415971402)) ? (((/* implicit */int) (unsigned short)52250)) : (((/* implicit */int) (signed char)0)))));
                            arr_89 [i_2 + 2] [i_22] [i_2] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_24 - 1] [i_21] [i_2 + 1] [i_23] [i_24] [i_24 - 1])) > (((/* implicit */int) arr_26 [i_24 - 1] [i_22] [i_2 + 1] [i_23] [i_24] [i_23]))));
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((arr_29 [i_22] [i_24 - 1] [i_24] [i_24 - 1] [i_24] [i_24] [i_24]) + (9223372036854775807LL))) >> (((arr_29 [i_2] [i_24 - 1] [i_24] [i_24 - 1] [(_Bool)1] [i_24 - 1] [i_24]) + (5675352634218211028LL))))))));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 70302025)) ? (arr_56 [i_24 - 1] [i_24 - 1] [i_2 + 2] [i_2 - 1]) : (173205817)));
                        }
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            arr_94 [i_2] [i_21] [i_22] [i_23] [i_25 - 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (arr_38 [i_2] [i_21] [i_22] [i_2] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_21])))))));
                            arr_95 [i_25] [i_21] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2] [i_2 + 1]))));
                            var_43 |= ((/* implicit */unsigned long long int) (signed char)-8);
                        }
                        for (unsigned char i_26 = 1; i_26 < 9; i_26 += 3) 
                        {
                            var_44 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [6] [i_21] [i_22] [6])) ? (var_13) : (arr_56 [i_23] [i_21] [i_22] [i_23])));
                            arr_98 [i_2] [i_21] [i_2] [i_23] [i_26] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_2] [i_26 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2])) - (((/* implicit */int) (unsigned char)75))));
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            arr_99 [i_2] = ((/* implicit */unsigned short) ((unsigned char) arr_13 [i_2] [i_21] [i_26] [i_26 + 1] [i_26] [i_2]));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 2) 
                        {
                            var_46 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-14));
                            var_47 += ((/* implicit */signed char) (~(((/* implicit */int) ((var_8) && (((/* implicit */_Bool) -173205818)))))));
                            var_48 &= ((/* implicit */_Bool) (~(15263706795618513443ULL)));
                            arr_102 [i_2] [i_2] [i_21] [i_22] [i_22] [i_27] [i_27] = ((/* implicit */signed char) var_9);
                        }
                    }
                    var_49 = ((/* implicit */unsigned char) (unsigned short)65535);
                    var_50 = ((/* implicit */unsigned char) (unsigned short)65533);
                }
            } 
        } 
    }
    var_51 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
}
