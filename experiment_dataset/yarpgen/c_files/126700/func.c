/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126700
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
    var_17 = ((/* implicit */unsigned short) var_15);
    var_18 = ((/* implicit */short) var_8);
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((var_8) + (320231569)))))), (var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_7 [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
                    arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << ((((((-(((/* implicit */int) arr_3 [i_1] [i_1])))) + (253))) - (3)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */long long int) arr_0 [i_2]);
                                var_21 = ((/* implicit */long long int) arr_10 [i_0] [(unsigned short)6] [i_2] [(unsigned short)6]);
                                var_22 = ((/* implicit */signed char) var_6);
                                arr_14 [i_0] [i_1] [i_2] [i_2] [(unsigned char)12] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_10 [i_1] [(_Bool)1] [i_1] [i_1])) ? (max((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [(unsigned char)5] [i_0] [i_4] [i_4] [(unsigned short)13])), (821680723U))) : (arr_5 [(signed char)2] [(unsigned char)9] [i_3] [(unsigned char)9]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) max((var_16), (arr_12 [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) ((unsigned long long int) (+(max((((/* implicit */unsigned int) var_12)), (var_14))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) var_9);
                                arr_21 [(short)10] [i_1] [i_1 + 1] [1ULL] [(_Bool)1] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-107)) + (2147483647))) << (((((/* implicit */int) (unsigned short)12)) - (12)))))) ^ (max((((/* implicit */unsigned int) arr_3 [(unsigned short)8] [i_1 - 1])), (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_2 [i_0]))))) && (((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) (unsigned short)25))))))), ((+(((/* implicit */int) (unsigned short)65528))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)7), ((unsigned short)65534)))), (((((/* implicit */_Bool) arr_17 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_22 [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1]))))));
                                arr_29 [i_0] [i_1] [i_5] [i_8] [i_9] = ((/* implicit */unsigned char) ((int) (unsigned char)32));
                                arr_30 [i_0] [i_1] [i_5] [i_0] [i_9] = ((/* implicit */_Bool) ((max((max((((/* implicit */unsigned long long int) var_10)), (arr_16 [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5])))));
                                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (268435200ULL))))));
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 3; i_10 < 21; i_10 += 2) 
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) ((unsigned char) var_4)))))) * (((unsigned long long int) max((arr_31 [i_0] [i_0] [i_10 - 1] [i_0]), (1485176615U)))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            var_29 = ((/* implicit */int) var_13);
                            var_30 += ((/* implicit */unsigned short) (!(min((((((/* implicit */_Bool) (unsigned short)65534)) || (((/* implicit */_Bool) var_1)))), (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_10] [i_11] [i_11]))))))));
                        }
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_33 [i_0] [(unsigned short)0]))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        var_32 += ((/* implicit */short) max((((((/* implicit */unsigned long long int) var_2)) | (arr_34 [17U] [17U] [17U] [i_13]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [i_10 - 3] [(signed char)0])), (((2552700952U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))))))))));
                        var_33 = ((/* implicit */unsigned int) max((arr_18 [i_1 + 2] [i_1 - 2] [i_10 - 1] [i_10 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_10 + 1]))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_12)), (var_11)));
                        arr_42 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((2552700952U) << (((((/* implicit */int) (unsigned char)128)) - (107)))))) ? (arr_5 [i_0] [i_1] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_7)))))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_2)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [10U] [i_14] [i_10] [i_14] [i_10]))) : (arr_38 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2]))) : (min((((/* implicit */long long int) var_10)), (var_15)))))));
                    }
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        arr_45 [i_0] [(signed char)7] [i_1 - 2] [10] [(signed char)7] = ((/* implicit */signed char) max((min((((/* implicit */long long int) max(((unsigned char)51), ((unsigned char)231)))), (-7057557496175903328LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 2] [i_10 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) (unsigned short)2))))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) : (-7057557496175903322LL)));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1 + 1] [i_1 + 1] [(_Bool)1]) >> (((((/* implicit */int) (unsigned short)65533)) - (65492)))))) ? (arr_35 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) ((arr_47 [i_0] [i_0] [(unsigned short)14] [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) arr_2 [i_16])))))));
                        arr_49 [7] [i_16] [i_10 - 1] [i_1] [i_1 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) - (((/* implicit */int) arr_1 [i_0]))));
                        arr_50 [(unsigned short)19] [i_10 - 2] [9] [i_0] = ((((/* implicit */int) (unsigned short)8)) >> (((arr_41 [i_10 - 3] [i_10 - 3] [i_10] [(unsigned short)6]) - (18392677974508754617ULL))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
                    {
                        arr_54 [i_0] [i_1] [i_1] [i_17] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [16U] [3LL] [3LL] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (0LL)))) ? ((~(11911895546747229383ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47643)))))));
                        var_38 = ((((/* implicit */_Bool) max((arr_18 [i_17] [i_17] [i_10 - 3] [i_10 - 3]), (arr_18 [(signed char)21] [i_10] [i_10 - 3] [i_10 - 3])))) ? (arr_18 [i_17] [i_17] [i_10 - 3] [i_10 - 3]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned short i_18 = 1; i_18 < 20; i_18 += 3) /* same iter space */
                    {
                        arr_57 [i_0] [i_1 - 2] [i_10] = ((/* implicit */int) (~(var_14)));
                        arr_58 [i_10] [i_10] [i_1 - 2] [(unsigned short)14] = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_0]);
                        var_39 = ((/* implicit */unsigned short) var_1);
                    }
                    for (unsigned short i_19 = 1; i_19 < 20; i_19 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            arr_64 [i_0] [i_1] [i_0] [i_19] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_1] [i_10] [i_10 - 3] [i_10 - 3] [i_19 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_20]))) : (arr_38 [i_0] [i_0] [i_10])));
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [(signed char)9] [(signed char)9] [i_10 + 1] [i_19] [i_19] [i_19 - 1] [i_20])) && (((/* implicit */_Bool) (signed char)127))));
                        }
                        var_41 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0]))));
                        arr_65 [13LL] [13LL] [i_10] [14ULL] [i_1] [i_10 - 2] = ((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_66 [i_0] [i_1] [i_0] [i_19] = min((((arr_33 [i_1 + 1] [i_10 - 3]) ^ (arr_33 [i_1 + 2] [i_10 - 2]))), ((-(((/* implicit */int) arr_4 [i_1 - 1])))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    for (long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        {
                            arr_72 [i_0] [4U] [i_21] [i_22] [i_22] [i_22] = ((_Bool) ((arr_17 [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 3) 
                            {
                                arr_77 [i_0] [i_1 - 2] [i_22] [(unsigned char)2] [i_23] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) | (((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_23])));
                                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) arr_48 [i_0] [i_0] [i_21] [i_22] [i_23] [i_22])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                            }
                            for (unsigned int i_24 = 0; i_24 < 22; i_24 += 2) 
                            {
                                var_43 ^= ((/* implicit */unsigned int) arr_4 [i_0]);
                                var_44 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_24])) ? (((/* implicit */int) arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 1] [(unsigned short)8]))))), (((arr_41 [i_1 + 2] [(unsigned char)21] [i_1 + 1] [i_21]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1 + 2] [(unsigned short)5] [i_1 + 1] [i_1])))))));
                            }
                            for (int i_25 = 2; i_25 < 20; i_25 += 4) 
                            {
                                arr_84 [i_0] [i_0] [i_22] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_0] [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_0] [i_25] [i_25])) && (((/* implicit */_Bool) arr_68 [(_Bool)1] [(_Bool)1] [i_21])))))) / (((((/* implicit */_Bool) arr_10 [(short)16] [i_25 + 2] [i_1 + 1] [(short)15])) ? (arr_71 [i_0] [(unsigned char)14] [i_0] [i_22] [i_25] [i_0]) : (((((/* implicit */_Bool) (short)-10075)) ? (((/* implicit */long long int) var_14)) : (var_15)))))));
                                var_45 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */signed char) arr_13 [(signed char)5] [(unsigned char)3] [(signed char)5] [i_21] [(signed char)5] [(unsigned char)3] [i_25 + 2])), (arr_37 [9ULL] [9ULL] [(_Bool)1] [i_22] [i_22])))), (((((/* implicit */long long int) arr_26 [i_0] [i_0] [i_21] [i_21] [i_22] [16LL] [i_25])) ^ (var_7)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
