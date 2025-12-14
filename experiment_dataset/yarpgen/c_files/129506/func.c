/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129506
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_16 = var_13;
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_0]));
                            var_18 = ((/* implicit */unsigned short) ((0ULL) >> (((6415399076925465427ULL) - (6415399076925465378ULL)))));
                            var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0 - 3] [(unsigned char)2] [i_2 - 1] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 3]))) : (arr_11 [i_2 - 3] [5U] [i_0 - 2] [i_0] [i_0])));
                        }
                        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_15)) <= ((+(12031344996784086182ULL)))));
                    }
                } 
            } 
            var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) > (((/* implicit */int) arr_2 [i_1])))) && (((/* implicit */_Bool) var_9))));
            var_22 += ((/* implicit */unsigned int) ((((_Bool) 6415399076925465434ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2]))) & (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1])))));
            /* LoopSeq 1 */
            for (short i_5 = 3; i_5 < 7; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) var_15);
                            arr_23 [i_0] [i_1] [i_0] [i_6] [5ULL] = ((/* implicit */signed char) (~((~(12031344996784086176ULL)))));
                        }
                    } 
                } 
                arr_24 [(unsigned short)1] [(signed char)1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-4381)) == (((/* implicit */int) arr_4 [i_0 + 1]))));
                arr_25 [i_0] [(short)3] [5LL] = ((/* implicit */unsigned char) (!(arr_16 [i_0 + 1] [i_5 + 1])));
            }
            arr_26 [i_0] [i_1] [i_0 - 3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_1] [i_0] [(signed char)9] [i_0]))));
        }
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
        {
            var_24 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-27444)) > (((/* implicit */int) (unsigned char)190))))) - (((((/* implicit */int) var_14)) * (((/* implicit */int) arr_16 [i_0] [i_0]))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_1))) % (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
        {
            arr_32 [(unsigned char)7] [i_9] |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_9])) ? (var_13) : (((/* implicit */int) (unsigned short)47125)))));
            var_26 += ((/* implicit */unsigned char) ((var_2) & (((/* implicit */int) arr_7 [i_0] [i_0 - 3] [i_0]))));
            arr_33 [i_0] |= ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_18 [i_0 - 3] [i_0] [i_9])))));
        }
        for (long long int i_10 = 3; i_10 < 8; i_10 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_11 = 3; i_11 < 7; i_11 += 2) 
            {
                arr_39 [i_10] [i_10 + 2] [9LL] [i_10] = ((unsigned short) ((unsigned short) arr_21 [(unsigned char)2] [8U] [(unsigned char)2] [(unsigned char)8] [(unsigned char)8]));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (int i_13 = 2; i_13 < 8; i_13 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) arr_22 [3] [i_10 + 1] [i_12]);
                            var_28 = ((/* implicit */unsigned char) ((long long int) (unsigned char)64));
                            var_29 += ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    arr_48 [i_0] [i_10] [i_10 - 2] [i_10 - 2] [i_14] = ((/* implicit */_Bool) var_13);
                    var_30 += ((/* implicit */int) arr_42 [5ULL] [i_14]);
                }
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    arr_52 [i_10] [i_10] [i_10] [i_10 + 1] = ((/* implicit */unsigned long long int) (unsigned char)42);
                    var_31 = ((/* implicit */unsigned short) arr_51 [i_10 - 2] [i_11] [i_11]);
                    var_32 = ((/* implicit */unsigned short) arr_13 [i_0] [0] [i_11] [8] [i_15]);
                    var_33 -= ((/* implicit */long long int) ((unsigned char) var_10));
                }
                var_34 = ((/* implicit */short) var_8);
            }
            for (unsigned char i_16 = 4; i_16 < 6; i_16 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0 - 2])))));
                arr_56 [i_0 - 3] [i_10] = ((/* implicit */long long int) ((arr_40 [i_16] [i_16] [i_16 + 3] [i_0 - 2] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4389)))));
                arr_57 [i_10] = ((/* implicit */unsigned char) ((long long int) (unsigned char)106));
            }
            for (signed char i_17 = 1; i_17 < 6; i_17 += 1) 
            {
                var_36 = ((/* implicit */int) ((((((/* implicit */_Bool) -4273449787455705544LL)) ? (arr_41 [i_17] [i_10 - 2] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4381))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_17 + 1] [i_10] [i_0 - 3] [i_0 - 3])))));
                var_37 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)18)) ^ (((/* implicit */int) (unsigned char)255))));
                arr_60 [i_17] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_10 + 2] [i_17 + 4] [i_0 - 1]))));
            }
            for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 3) 
            {
                var_38 = ((/* implicit */unsigned char) ((_Bool) arr_34 [i_10 - 2] [i_0]));
                /* LoopNest 2 */
                for (signed char i_19 = 4; i_19 < 6; i_19 += 2) 
                {
                    for (short i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        {
                            arr_68 [(unsigned char)2] [3ULL] [i_0] [8ULL] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [i_18] [i_20])) << (((((/* implicit */_Bool) arr_10 [8ULL] [i_18] [(unsigned char)6] [i_18])) ? (((/* implicit */int) arr_44 [i_0] [i_10 + 2] [i_18])) : (((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_10]))))));
                            arr_69 [i_20] [i_19] [i_18] [i_10] [i_0] [0U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)8]))) | (12905855160982985323ULL)))));
                            var_39 = ((/* implicit */short) ((unsigned char) (signed char)63));
                            var_40 = ((/* implicit */int) arr_53 [i_20]);
                            var_41 += ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (unsigned short)15423)) >> (((((/* implicit */int) (unsigned char)251)) - (220))))));
                        }
                    } 
                } 
                arr_70 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -8018349246441717584LL)) ? (((/* implicit */unsigned int) -8192)) : (var_12)));
            }
            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (arr_51 [i_10 + 2] [i_10] [i_10])));
            var_43 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_13)))));
            /* LoopNest 2 */
            for (unsigned long long int i_21 = 3; i_21 < 9; i_21 += 1) 
            {
                for (unsigned int i_22 = 4; i_22 < 6; i_22 += 2) 
                {
                    {
                        var_44 = ((/* implicit */unsigned int) ((((unsigned int) 366869690)) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                        var_45 += ((unsigned char) arr_44 [i_10 - 1] [i_10] [i_0 + 1]);
                        arr_76 [i_22] [i_21] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) var_5));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_23 = 2; i_23 < 10; i_23 += 4) 
    {
        var_46 -= ((arr_77 [12ULL] [i_23 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47125))));
        /* LoopSeq 2 */
        for (int i_24 = 1; i_24 < 11; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 13; i_25 += 1) 
            {
                for (long long int i_26 = 2; i_26 < 12; i_26 += 2) 
                {
                    {
                        var_47 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_83 [i_23] [i_24] [i_24] [i_26]))) | (((/* implicit */int) (short)32767))));
                        var_48 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)181));
                    }
                } 
            } 
            var_49 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_23] [(unsigned char)4] [i_23]))) * (6415399076925465417ULL)));
            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_82 [i_23] [(unsigned char)10] [i_23 + 3] [i_24 - 1])) ? (arr_83 [i_23] [i_24] [5] [i_24 + 1]) : (arr_83 [i_23] [i_24] [i_24] [i_24 - 1])));
        }
        for (unsigned short i_27 = 0; i_27 < 13; i_27 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_29 = 1; i_29 < 12; i_29 += 1) 
                {
                    var_51 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)-4374))))));
                    var_52 = arr_88 [i_23 - 2] [(_Bool)1];
                }
                for (unsigned int i_30 = 0; i_30 < 13; i_30 += 3) /* same iter space */
                {
                    arr_93 [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_82 [i_23 + 1] [i_23] [i_23] [i_23 - 1])) ^ ((+(((/* implicit */int) (short)-18096))))));
                    arr_94 [i_23 + 3] [i_30] = ((/* implicit */unsigned char) ((signed char) (unsigned char)255));
                }
                for (unsigned int i_31 = 0; i_31 < 13; i_31 += 3) /* same iter space */
                {
                    var_53 -= ((/* implicit */unsigned char) arr_78 [i_23 + 2] [i_31]);
                    arr_98 [i_23] [i_28] [(unsigned short)5] = ((/* implicit */unsigned char) arr_85 [i_23 - 1] [i_23 - 1] [i_23 + 1]);
                }
                for (unsigned int i_32 = 0; i_32 < 13; i_32 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_33 = 4; i_33 < 12; i_33 += 1) 
                    {
                        var_54 = ((/* implicit */long long int) ((unsigned int) 2147483647));
                        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_79 [i_32] [i_28] [i_32])) % (((/* implicit */int) arr_79 [i_32] [i_32] [i_32]))));
                        var_56 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1548549703)) || (var_7)));
                    }
                    for (unsigned char i_34 = 0; i_34 < 13; i_34 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned short) ((int) (~(2074941568U))));
                        var_58 = ((/* implicit */long long int) ((unsigned char) ((_Bool) (unsigned short)42507)));
                        var_59 = ((/* implicit */long long int) arr_77 [i_23 + 1] [i_23 + 3]);
                        arr_107 [i_32] [2] = ((/* implicit */int) var_9);
                        arr_108 [i_23] [i_34] [i_32] [i_32] [(short)0] [i_34] [i_32] = ((/* implicit */unsigned long long int) arr_104 [i_28] [i_32] [i_34]);
                    }
                    var_60 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24747)) || (((/* implicit */_Bool) (short)-16858))))) <= (((/* implicit */int) arr_99 [i_23] [i_23] [i_28] [i_28] [i_23] [i_23]))));
                }
                var_61 += ((/* implicit */long long int) var_13);
            }
            for (unsigned int i_35 = 1; i_35 < 10; i_35 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_36 = 3; i_36 < 9; i_36 += 4) 
                {
                    for (short i_37 = 0; i_37 < 13; i_37 += 2) 
                    {
                        {
                            arr_117 [i_23] [i_27] [i_23] [i_36] [(unsigned char)8] = ((/* implicit */long long int) ((unsigned int) arr_90 [i_23 + 3] [i_35 + 1] [i_36 - 3] [i_36 - 3]));
                            var_62 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)47125)) && (((/* implicit */_Bool) (unsigned char)138)))));
                        }
                    } 
                } 
                arr_118 [i_23] [i_27] [i_27] [i_35] = (-(((/* implicit */int) arr_97 [i_23 + 1] [i_35 + 2] [i_35] [i_35 - 1] [(unsigned char)7] [i_35 + 1])));
                var_63 |= ((unsigned long long int) arr_102 [i_23] [i_23] [i_23] [i_23 + 2] [i_35 - 1] [i_27]);
            }
            var_64 = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_86 [i_23] [7LL])))));
        }
        var_65 = ((unsigned short) arr_91 [i_23] [i_23] [i_23 + 2] [i_23]);
    }
    var_66 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) - (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)24749), (((/* implicit */unsigned short) (short)32758))))))))));
}
