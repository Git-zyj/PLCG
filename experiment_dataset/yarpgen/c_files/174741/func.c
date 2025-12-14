/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174741
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [(unsigned char)6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [(signed char)2] [i_1 + 2] [i_2])) ? (((/* implicit */int) (short)-1308)) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (short)24554)))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [7])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))))) : ((+(((/* implicit */int) ((signed char) arr_3 [i_0] [i_1 + 2] [i_0])))))));
                                arr_16 [i_0] [i_2] [(unsigned short)6] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_2 + 2] [i_4 + 3])) ? (((((/* implicit */int) (unsigned char)44)) >> (((((/* implicit */int) (unsigned char)201)) - (195))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    arr_19 [i_0] = ((((((/* implicit */int) arr_11 [i_5 + 3] [(unsigned short)17] [i_1 - 3] [i_1 - 4])) << (((((/* implicit */int) arr_11 [(short)13] [i_5 + 3] [i_5 + 3] [i_1 - 2])) - (16))))) != ((-(((/* implicit */int) arr_11 [(short)2] [i_5] [i_1 - 4] [i_1 + 2])))));
                    arr_20 [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) 3949016172U))));
                    arr_21 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_5 [i_0] [i_5 + 3] [i_0])))) ? (((((/* implicit */int) var_3)) * (max((((/* implicit */int) (signed char)-2)), (arr_2 [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)212))))) ? (((/* implicit */int) ((signed char) var_1))) : (arr_2 [i_5 + 3])))));
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) (~(max((((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_5])) != (((/* implicit */int) (short)-32748))))), ((-(((/* implicit */int) (short)27424))))))));
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_9);
                }
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                {
                    arr_26 [i_0] = max((((/* implicit */int) var_6)), (((((/* implicit */int) var_14)) / (((((/* implicit */int) var_3)) & (((/* implicit */int) var_6)))))));
                    arr_27 [i_0] [i_1 - 1] [i_6] [i_1 - 4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((short)-27437), (((/* implicit */short) (_Bool)0)))))));
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                {
                    arr_30 [i_7] = ((/* implicit */long long int) (-(((((var_0) < (((/* implicit */unsigned long long int) arr_29 [i_7])))) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 4] [i_7] [i_1 - 4])) : (((/* implicit */int) arr_25 [i_1]))))));
                    arr_31 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */_Bool) var_0);
                    arr_32 [i_0] [i_0] [i_1 - 4] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1 - 1] [i_7] [(unsigned char)6]) ? (arr_5 [i_7] [i_1 + 2] [i_0]) : (arr_5 [i_7] [i_1 - 3] [i_0])))) ? (((arr_12 [(unsigned char)17] [i_1 - 2] [i_0] [i_1 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_1 + 1] [i_7] [i_0]))) : (-7936102216842718399LL))) : (((/* implicit */long long int) (-(arr_5 [i_0] [i_0] [i_7]))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        for (short i_9 = 3; i_9 < 10; i_9 += 3) 
        {
            {
                arr_39 [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) var_1);
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_42 [i_8] [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_12 [i_8] [i_10] [i_9] [i_8])) ^ (((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8]))))))) ? (((/* implicit */int) ((unsigned short) ((_Bool) arr_3 [i_8] [i_9] [i_10])))) : (((((/* implicit */int) (short)30707)) >> (((345951124U) - (345951120U)))))));
                    arr_43 [i_8] [i_9 + 1] [i_8] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9 + 2] [(short)9] [i_9 + 2] [i_8])) && (((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_9 + 1])))))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                    {
                        arr_48 [i_8] [i_8] |= ((/* implicit */unsigned int) ((arr_28 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_12]) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_44 [i_8]))))));
                        arr_49 [i_9] [11LL] [i_12] = arr_9 [i_8] [i_8] [i_9 + 1] [i_9 - 3];
                    }
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                    {
                        arr_54 [i_8] [i_11] [i_11] [1LL] [(short)1] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) << (((((((((/* implicit */int) var_5)) + (2147483647))) >> (((arr_41 [i_11] [i_11]) - (6798987582281856423LL))))) - (20)))));
                        arr_55 [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) ((arr_4 [i_8]) != (((arr_12 [i_8] [i_8] [i_11] [i_13]) ? (((/* implicit */int) arr_11 [i_9] [i_9] [i_11] [i_13])) : (((/* implicit */int) var_12))))));
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            arr_60 [i_8] [i_8] [i_8] [i_8] [4] [4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)212))))) ? (((/* implicit */int) arr_58 [i_8] [8ULL] [8ULL] [i_9 - 1])) : (((/* implicit */int) arr_11 [i_9 - 2] [11] [i_9 - 3] [i_9 - 3]))));
                            arr_61 [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] = ((/* implicit */short) var_14);
                        }
                        arr_62 [(unsigned char)0] [i_9 - 2] [i_11] [i_13] = ((/* implicit */long long int) (+((-(((/* implicit */int) var_9))))));
                        arr_63 [i_8] [i_9] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3117764306630373942LL)) ? (((/* implicit */int) (short)27456)) : (-615372491)));
                    }
                    arr_64 [i_8] = ((/* implicit */int) ((unsigned char) arr_3 [i_9 - 1] [i_9 - 1] [i_9 - 1]));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        arr_72 [(short)5] &= ((/* implicit */signed char) ((((/* implicit */int) (short)27436)) >> (((((/* implicit */int) (signed char)64)) - (43)))));
                        arr_73 [(short)4] [i_15 - 1] [i_9 - 1] = ((/* implicit */unsigned char) arr_47 [i_8] [i_9] [i_15] [i_9] [i_16] [i_15]);
                        arr_74 [i_16] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((-(-18LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)27436)) * (((/* implicit */int) (short)-1308)))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        arr_78 [i_8] [i_9 - 3] [i_9 - 3] [i_9 - 3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30719)) ? (((/* implicit */int) ((1881617756500246965ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205)))))) : (((/* implicit */int) (short)30685))));
                        /* LoopSeq 2 */
                        for (short i_18 = 1; i_18 < 9; i_18 += 4) 
                        {
                            arr_81 [i_8] [i_8] [i_18] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_47 [i_18 + 1] [i_18 + 4] [i_18 + 3] [5] [i_18 + 4] [(unsigned char)3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)41)))))));
                            arr_82 [i_8] [i_9] [i_8] [i_17] [(unsigned char)0] [(_Bool)1] [i_17] &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_9 - 3] [i_9 - 3])) << (((arr_10 [i_15] [i_17]) + (5616872965051474446LL)))))) ? (((((/* implicit */int) arr_37 [i_15 - 1])) >> (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) (short)-27432))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            arr_85 [i_8] [i_9 - 2] [i_15 - 1] [(signed char)4] [i_19] |= (!(((/* implicit */_Bool) (-(arr_53 [i_19] [i_17] [(signed char)0] [i_9 + 3] [i_8])))));
                            arr_86 [i_8] [i_15] [(short)3] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            arr_87 [i_8] [i_17] [i_15 - 1] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)30707)) ? (arr_52 [7LL] [i_9] [7LL] [i_17]) : ((~(923250281)))));
                        }
                    }
                    arr_88 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_45 [i_8]))));
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 13; i_20 += 3) 
                    {
                        for (unsigned short i_21 = 1; i_21 < 11; i_21 += 4) 
                        {
                            {
                                arr_94 [(unsigned short)3] [i_20] [i_15 - 1] [i_20] [i_21 + 2] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((+((-2147483647 - 1)))) : ((~(((/* implicit */int) (short)-30719))))));
                                arr_95 [i_8] [i_9 - 2] [i_8] [i_20] [i_21] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_75 [i_15 - 1] [i_9 - 2] [i_21 - 1] [i_20]))));
                                arr_96 [(unsigned char)10] [(unsigned char)10] [i_8] [i_21] [i_21 + 2] [i_8] &= ((/* implicit */long long int) ((short) arr_18 [i_8] [i_9 + 1] [i_9 + 1] [i_20]));
                            }
                        } 
                    } 
                    arr_97 [i_8] [i_9] [i_15 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_15 - 1] [i_15 - 1] [i_9 + 1])) ? ((+(1881617756500246946ULL))) : (((/* implicit */unsigned long long int) (-(var_13))))));
                }
                for (unsigned short i_22 = 0; i_22 < 13; i_22 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_23 = 2; i_23 < 12; i_23 += 3) 
                    {
                        for (short i_24 = 0; i_24 < 13; i_24 += 1) 
                        {
                            {
                                arr_110 [i_8] [i_8] [(unsigned char)6] [i_24] [i_24] = ((/* implicit */unsigned char) var_2);
                                arr_111 [i_8] [i_23] [i_22] [i_9 - 2] [i_8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23848)) ? (16565126317209304642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17308)))));
                                arr_112 [i_8] [i_23] [i_8] [i_9] [i_8] &= ((/* implicit */signed char) arr_40 [i_24] [i_22] [i_22]);
                            }
                        } 
                    } 
                    arr_113 [i_8] [i_9 + 1] [i_9 + 1] &= ((/* implicit */short) ((((_Bool) ((arr_104 [i_8] [i_8] [i_8] [i_8] [i_9 + 2]) / (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_8] [(_Bool)1] [i_22] [(_Bool)1] [i_22])) ? (((/* implicit */int) arr_90 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_103 [i_8] [i_8] [i_9] [i_22]))))) ? (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_9] [i_22] [i_22]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)15))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))));
                }
                /* vectorizable */
                for (unsigned short i_25 = 1; i_25 < 10; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_26 = 0; i_26 < 13; i_26 += 2) /* same iter space */
                    {
                        arr_118 [i_8] [i_25] [i_25] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((long long int) arr_99 [i_8] [i_25 + 1] [i_26]));
                        arr_119 [i_25] = ((/* implicit */unsigned short) var_1);
                    }
                    for (short i_27 = 0; i_27 < 13; i_27 += 2) /* same iter space */
                    {
                        arr_122 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_8] [i_9] [i_8] [i_8]))) : (arr_77 [i_8] [i_9 - 3] [i_8])));
                        arr_123 [i_25] [i_25] [i_25 + 1] [(unsigned char)8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_8] [i_8]))));
                    }
                    arr_124 [i_8] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_56 [i_8] [i_8] [i_8] [i_9] [i_25 + 3] [i_25 + 3] [i_8])) && (((/* implicit */_Bool) var_3)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(arr_1 [i_8]))))));
                    arr_125 [i_8] [i_8] [i_25] [i_25] = ((/* implicit */unsigned long long int) var_14);
                    arr_126 [(unsigned char)3] [i_25] [i_25] = ((/* implicit */short) (-(((/* implicit */int) arr_99 [i_9 + 1] [i_25 + 2] [i_25 + 1]))));
                }
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    arr_130 [i_8] [(signed char)8] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) && (arr_57 [i_8] [i_8] [i_9] [i_28] [i_28]))) ? (((((/* implicit */_Bool) arr_17 [i_9])) ? (arr_89 [i_8] [i_9 + 2] [i_9 + 2]) : (((/* implicit */int) (unsigned short)32781)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11)))))))) ? (max((((/* implicit */int) arr_75 [i_8] [i_8] [i_8] [i_28])), (max((var_10), (((/* implicit */int) var_8)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_92 [i_9 - 2] [(short)4] [i_9 - 1] [i_9 - 3] [i_9 - 3] [i_8] [i_8])))))));
                    arr_131 [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_5 [i_8] [i_9 + 3] [i_8])) * (((((16565126317209304650ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_9 + 3]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                }
            }
        } 
    } 
}
