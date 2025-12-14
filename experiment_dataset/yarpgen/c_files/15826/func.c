/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15826
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) 4294967295U))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((2369978724U), (((/* implicit */unsigned int) (short)255))))));
    var_18 ^= max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (var_0) : (var_0))), (var_1)))), (min((((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((var_9) - (1442081059U)))))), (max((((/* implicit */long long int) var_13)), (-7841397403596587741LL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((long long int) var_2)) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) (unsigned char)15));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                arr_10 [i_1] [0U] [i_1] [i_1] |= ((/* implicit */short) var_9);
                var_19 = ((/* implicit */long long int) arr_0 [i_0]);
            }
            for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
            {
                arr_14 [i_0] [i_0] [i_0] = (unsigned char)15;
                arr_15 [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0]);
                arr_16 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32760))) : (-22LL)));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)0))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [(signed char)15])) >= (var_3)))) : (((/* implicit */int) arr_9 [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_23 [i_5] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_3 - 1] [i_3 + 2])) & (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 2]))));
                        arr_24 [i_0] [i_0] [(signed char)15] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_18 [i_0] [i_3 - 1] [5] [i_4] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_3 - 1] [i_1]))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7881215915818691633LL)) ? (-1002361569) : (((/* implicit */int) (unsigned short)7896))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((_Bool) arr_20 [i_3] [i_3 + 2] [i_3 - 1] [(unsigned char)2] [i_3 - 3] [i_3 + 1])))));
                    }
                    for (short i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 - 3] [i_6 + 2]))) - (var_16)));
                        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((arr_13 [i_6] [i_1] [i_3] [i_1]) ? (((/* implicit */int) arr_1 [i_4] [(unsigned short)8])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6 + 2] [i_6] [i_6]))));
                        arr_29 [i_0] = ((/* implicit */int) arr_22 [i_0] [17] [i_3 - 1]);
                    }
                    arr_30 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_3] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_34 [i_0] [i_3 + 1] [i_4] [i_7]))));
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) -22LL);
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_39 [i_1] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)215))));
                        arr_40 [i_8] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_27 [i_8 - 1] [i_3 - 3] [i_3] [i_3] [i_3] [i_1]) ? (((/* implicit */int) arr_27 [i_8 - 1] [i_3 - 3] [i_3] [i_3 - 2] [i_3] [i_3 + 2])) : (var_1)));
                    }
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4] [i_3] [12ULL] [i_0])) * (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned short)8] [i_4])))))));
                }
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    arr_44 [i_0] [15] [i_0] [i_9] = ((/* implicit */unsigned long long int) ((arr_13 [i_3 + 2] [i_3] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) arr_17 [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_8))));
                    var_26 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_3] [i_0]);
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) ((13956363153268850467ULL) / (((/* implicit */unsigned long long int) 7881215915818691644LL))));
                        var_28 = ((/* implicit */long long int) ((short) arr_2 [i_3 - 3]));
                        arr_48 [i_0] [i_10] = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_3 + 1]))) : (((var_4) * (((/* implicit */long long int) 0U)))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_29 ^= ((/* implicit */int) ((unsigned int) arr_46 [6U] [i_9] [i_3 - 3] [6U] [6U]));
                        arr_51 [i_9] [i_9] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) var_12)));
                        arr_52 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_34 [i_0] [i_3 - 1] [i_0] [i_11])) || (((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0] [i_9] [i_11])))));
                        arr_53 [i_0] [i_1] [i_0] [i_9] [i_9] = ((/* implicit */int) ((unsigned int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0] [i_1] [i_3] [i_11] [i_11]))))));
                    }
                    var_30 ^= ((/* implicit */short) ((unsigned short) var_14));
                }
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    var_31 = ((/* implicit */int) (short)-468);
                    var_32 = ((/* implicit */unsigned char) var_14);
                }
                var_33 -= ((/* implicit */_Bool) ((unsigned int) arr_20 [i_1] [i_3 + 2] [i_3] [i_1] [i_3] [i_3 - 3]));
            }
            for (unsigned short i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                var_34 -= ((/* implicit */unsigned short) ((arr_37 [16]) == (arr_37 [(unsigned short)2])));
                arr_58 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_38 [(_Bool)1] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_13] [i_0] [i_13] [i_1] [i_0]))) : (-15LL))));
                arr_59 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (arr_41 [i_0] [i_13 + 1] [i_0] [i_13 + 1])));
            }
            var_35 = ((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        for (short i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            arr_63 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_14] [i_14])) < (((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_14] [i_14]))));
            /* LoopSeq 4 */
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                arr_66 [i_0] [i_0] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_15] [i_14] [i_14] [i_0] [i_0])) ? ((+(((/* implicit */int) arr_42 [i_0] [i_14] [i_14])))) : (((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)1] [(unsigned short)1]))));
                var_36 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                arr_67 [i_15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 7881215915818691633LL)) || (((/* implicit */_Bool) -7881215915818691621LL)))) ? ((~(15LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_42 [i_0] [i_14] [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((arr_64 [i_17] [i_16] [(unsigned char)11]) && (((/* implicit */_Bool) var_6))));
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((arr_37 [(_Bool)0]) / (((/* implicit */int) arr_4 [i_15] [i_14])))))));
                            var_39 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_14] [i_14])) ? (arr_57 [i_17] [i_14] [0LL]) : (((/* implicit */unsigned long long int) 23LL)))));
                        }
                    } 
                } 
            }
            for (signed char i_18 = 1; i_18 < 16; i_18 += 1) 
            {
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_14] [i_14] [i_18]))) : (arr_12 [i_18 + 1] [i_0] [i_0] [i_0])));
                /* LoopSeq 3 */
                for (int i_19 = 1; i_19 < 14; i_19 += 1) 
                {
                    arr_78 [i_0] [i_18] [i_14] [i_0] = ((/* implicit */unsigned int) ((short) arr_19 [i_0] [i_0] [i_14] [i_18 - 1] [7]));
                    arr_79 [i_0] [i_0] [i_0] [i_18] [i_18] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_18])) >= (((/* implicit */int) arr_34 [i_0] [i_0] [i_18] [i_19]))))) : (((/* implicit */int) arr_62 [i_0]))));
                }
                for (long long int i_20 = 4; i_20 < 16; i_20 += 1) 
                {
                    arr_83 [i_0] [i_0] [i_18 + 1] [i_20] = ((((/* implicit */_Bool) (short)-31663)) ? (((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) arr_38 [i_0] [i_14] [i_18] [i_0] [i_18])) - (75))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_4))))));
                    var_41 = ((/* implicit */unsigned char) arr_41 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_18 - 1]);
                    var_42 = ((/* implicit */int) arr_6 [i_0]);
                }
                for (short i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 1; i_22 < 15; i_22 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_18 + 2] [i_18 - 1] [i_21] [i_22 - 1] [i_22 + 2])) && (((/* implicit */_Bool) arr_38 [i_18 - 1] [i_18 + 2] [i_22 + 2] [i_22] [i_22 - 1]))));
                        var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_11))) != (((/* implicit */int) arr_9 [(_Bool)1]))));
                    }
                    arr_91 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_87 [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (int i_23 = 3; i_23 < 17; i_23 += 1) 
                    {
                        arr_94 [i_0] [i_0] [i_0] [(unsigned short)1] [i_23 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_21] [i_0] [i_18 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_14] [i_18 + 2] [i_21]))) : (((arr_13 [i_0] [i_14] [i_14] [i_21]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_23]))) : (var_3)))));
                        arr_95 [i_23 - 2] [i_21] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_75 [i_0] [i_23 - 3]);
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_84 [i_0] [i_14] [i_18] [i_18 + 1] [i_0] [i_23 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_18 + 2] [i_0]))));
                        arr_96 [i_0] [i_21] [i_18] [i_14] [i_0] = ((((/* implicit */_Bool) arr_65 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_23 + 1])) ? (arr_65 [i_18 + 1] [i_18 - 1] [i_23] [i_23 + 1]) : (arr_65 [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_23 + 1]));
                    }
                    var_46 = ((/* implicit */unsigned short) arr_57 [i_0] [i_0] [i_0]);
                    var_47 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_82 [i_0] [i_18 + 2] [14U] [i_14])) ? (((arr_57 [i_0] [i_14] [(short)16]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [i_0] [i_14] [i_14] [(short)7] [i_21])))));
                }
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 17; i_24 += 3) 
                {
                    for (signed char i_25 = 0; i_25 < 18; i_25 += 1) 
                    {
                        {
                            var_48 -= ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_24] [i_25]);
                            arr_104 [(short)5] [(short)5] [i_18] [i_0] [i_25] [i_24 + 1] [i_25] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) % (((/* implicit */int) (unsigned char)8)))) & (((/* implicit */int) arr_92 [i_0] [i_0] [i_18 + 2] [i_0] [i_18 + 2] [i_24 + 1]))));
                            var_49 = ((/* implicit */short) ((arr_13 [i_18] [i_18] [i_18] [i_18 + 1]) && (arr_13 [i_18] [i_18] [i_18 - 1] [i_18 + 2])));
                        }
                    } 
                } 
            }
            for (short i_26 = 0; i_26 < 18; i_26 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_27 = 1; i_27 < 17; i_27 += 3) 
                {
                    arr_111 [i_0] [i_27] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_21 [i_0] [i_27] [i_27 + 1] [i_0]));
                    arr_112 [i_0] [i_0] [i_14] [i_0] [(_Bool)1] [(unsigned char)4] |= ((/* implicit */unsigned char) ((unsigned short) arr_20 [i_27 - 1] [i_14] [i_26] [i_27 - 1] [i_27 + 1] [i_27]));
                }
                arr_113 [i_0] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */short) ((arr_12 [i_0] [i_0] [i_0] [i_26]) < (((/* implicit */unsigned long long int) arr_65 [(short)2] [i_14] [i_14] [i_26]))));
                arr_114 [i_0] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_43 [i_0] [i_14] [i_14] [i_14] [i_26] [i_26])) ^ (arr_19 [i_0] [i_26] [i_26] [i_0] [i_14])));
            }
            for (unsigned int i_28 = 1; i_28 < 16; i_28 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 1) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 1) 
                    {
                        {
                            arr_121 [i_0] [i_0] [i_14] [i_0] [i_0] [7U] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_30] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_42 [i_0] [i_14] [i_14])))))) : (arr_45 [i_0] [i_0] [i_14] [i_28] [i_29] [i_30])));
                            arr_122 [i_0] [i_0] [i_14] [i_28] [i_0] [i_30] [i_30] = ((/* implicit */short) var_5);
                            var_50 = ((/* implicit */long long int) ((arr_68 [i_0] [i_14] [8U] [i_14] [i_28 + 1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43)))));
                            arr_123 [i_0] [i_0] [i_28] [i_29] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */long long int) -359279843)) + (-7881215915818691621LL)));
                        }
                    } 
                } 
                arr_124 [i_0] = ((/* implicit */unsigned short) ((arr_56 [i_28 + 2] [i_28 - 1] [i_0] [i_28 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                var_51 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_115 [i_28 - 1] [i_14] [i_14] [i_0]));
            }
        }
    }
    var_52 ^= ((/* implicit */int) ((unsigned short) max((1125898833100800ULL), (((/* implicit */unsigned long long int) var_1)))));
}
