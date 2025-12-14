/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185372
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)48094))))) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6)))));
    var_13 = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_9)), (var_11)))) ? (((((/* implicit */int) var_8)) * (var_3))) : (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_2))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(123212299766699046ULL))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_3 + 1] [i_2] [i_2] [i_1] [i_0] = arr_6 [i_0] [i_3] [i_0];
                                arr_13 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_1] [i_1] [i_3 - 2] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) != (-9034279647405984748LL))))) : (arr_10 [i_0] [i_0] [i_3 + 1] [i_4] [i_4])));
                                arr_14 [i_0] [i_4] [i_0] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)61))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) + (8787503087616ULL)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1] [i_5] [i_6]);
                        arr_22 [i_0] [i_1] [i_5] [i_6] [i_0] = min((((unsigned int) 12693571553677715525ULL)), (((/* implicit */unsigned int) (!(arr_0 [i_0])))));
                        arr_23 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)-41)), ((unsigned short)48094)))), (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48094))) : (0ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_5] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(18446735286206464000ULL))))));
                            arr_27 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_24 [i_7] [i_6] [i_5] [i_1] [i_1] [i_1] [i_0])) + (((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) == (((((((/* implicit */int) (signed char)-33)) + (2147483647))) << (((18446735286206464000ULL) - (18446735286206464000ULL)))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_6] [i_0] [i_8] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_5] [i_8]) / (((/* implicit */long long int) var_0))))) == (((18446735286206463999ULL) << (((arr_6 [i_0] [i_0] [i_5]) - (7866213033812703517LL)))))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_5] [i_8]) / (((/* implicit */long long int) var_0))))) == (((18446735286206463999ULL) << (((((arr_6 [i_0] [i_0] [i_5]) - (7866213033812703517LL))) + (6913724459195520289LL))))))));
                            arr_33 [i_0] [i_1] [i_5] [i_0] [i_6] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_28 [i_1])))));
                            arr_34 [i_0] [i_1] [i_5] [i_6] [i_8] [i_6] [i_0] = ((((/* implicit */unsigned long long int) arr_1 [i_5])) != (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_2))))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_6] [i_0] [i_0] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14902))))))));
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)55053)) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) max(((unsigned short)982), ((unsigned short)65535)))))) : (((/* implicit */int) (unsigned short)1))));
                        var_17 = ((/* implicit */unsigned short) max(((+((~(((/* implicit */int) var_2)))))), ((~(arr_11 [i_0])))));
                        arr_38 [i_0] [i_1] [i_1] [1LL] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            arr_42 [i_10] [i_9] [i_0] [i_1] [i_0] = ((/* implicit */short) -5150642804960077459LL);
                            arr_43 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_10 + 2] [i_10 + 1])) ? (((/* implicit */int) arr_40 [i_0] [i_10 + 2] [i_10 - 1])) : (((/* implicit */int) arr_21 [i_10 - 1] [i_0] [i_10 - 1] [i_10 + 1]))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            arr_47 [i_0] [i_1] [i_0] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) arr_30 [i_11] [i_11] [0ULL] [i_11] [i_11] [i_11]));
                            arr_48 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_36 [i_0]) ^ (arr_36 [i_0])));
                            arr_49 [i_0] [i_1] [i_5] [i_9] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_5] [i_9] [i_11]))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_9] [i_9] [i_5] [i_12] [i_9])) ? (((/* implicit */int) arr_25 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))) != (((/* implicit */int) max((var_9), (arr_2 [i_5] [i_9] [i_0])))))))));
                            arr_53 [i_0] [i_1] [i_0] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)-17))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))));
                            var_19 = ((/* implicit */unsigned long long int) var_0);
                            arr_54 [i_0] [(signed char)1] = ((/* implicit */signed char) min((18446735286206464000ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_58 [i_0] [i_1] [i_0] [i_13] = ((/* implicit */_Bool) var_0);
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            arr_61 [i_0] [i_0] [3ULL] [i_13] [i_14] [i_13] = ((/* implicit */short) arr_24 [i_0] [i_1] [i_5] [i_13] [1U] [i_13] [i_14]);
                            arr_62 [i_13] [2U] [i_13] [i_13] [i_0] [i_13] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_40 [i_0] [i_5] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_0] [i_0] [i_14]))) : (18446744073709551615ULL))));
                            var_20 = ((/* implicit */short) var_8);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_0] [i_13] [i_14])) ? (arr_55 [i_0] [i_1] [i_5] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
                        {
                            arr_65 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [i_15] = ((/* implicit */signed char) ((arr_64 [i_13] [i_1] [i_5] [i_5] [i_1]) != (arr_64 [i_0] [i_15] [i_15] [i_13] [i_5])));
                            arr_66 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_1))))));
                            arr_67 [i_0] [i_0] [i_0] [i_13] [i_15] = (+(arr_10 [i_0] [i_0] [i_5] [i_0] [i_15]));
                            arr_68 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_1] [i_5] [i_13] [i_13] [i_15]))) == (arr_1 [i_0])));
                            var_22 = ((/* implicit */signed char) (((_Bool)1) ? (((2147483647) << (((18336640923644396243ULL) - (18336640923644396243ULL))))) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
                        {
                            arr_71 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (6328199340365962401LL))) / (((/* implicit */long long int) 3399538082U))));
                            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(var_6)))));
                            arr_72 [i_0] [i_1] [i_5] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [i_13] [i_5] [i_5] [i_1] [i_0] [i_0]))) != (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1]))) : (arr_56 [i_0] [i_5] [i_5] [i_13] [i_16])));
                        }
                        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [3ULL] [i_1] [i_13] [i_13] [i_5] [i_13] [i_13]))));
                        arr_73 [i_0] [i_0] [i_1] [i_5] [i_13] = ((/* implicit */_Bool) var_2);
                    }
                    /* vectorizable */
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_18 = 1; i_18 < 9; i_18 += 1) 
                        {
                            arr_79 [i_0] [i_0] [i_0] [i_5] [(unsigned short)4] [i_18] = ((/* implicit */unsigned char) ((_Bool) arr_39 [i_1] [i_0]));
                            arr_80 [i_0] [i_5] [i_17] = ((/* implicit */_Bool) (~(var_3)));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_75 [i_0] [(_Bool)1] [i_17] [i_18])) && (var_8))))));
                            arr_81 [i_0] [(unsigned short)4] [(unsigned short)4] [i_0] [i_18 + 1] [i_1] [i_5] = ((3360380573908993341ULL) - (422212465065984ULL));
                            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_17] [i_0])) ? (arr_6 [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) var_8))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_84 [i_0] [i_0] [i_5] [i_5] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_17] [i_17] [i_1])) ^ (((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_27 = ((/* implicit */_Bool) (unsigned short)57118);
                            arr_85 [i_19] [i_17] [i_5] [i_17] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_70 [i_0] [i_1] [i_5] [i_17] [i_17])) : (((/* implicit */int) arr_70 [i_0] [i_0] [i_0] [i_17] [i_0]))));
                        }
                        arr_86 [i_17] [i_17] |= ((/* implicit */unsigned char) arr_55 [i_17] [i_1] [i_1] [i_0]);
                        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_17]))) : (arr_55 [i_0] [i_0] [i_1] [i_17])));
                        var_29 *= ((/* implicit */unsigned int) arr_11 [i_0]);
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((unsigned char) (_Bool)0)))));
                    }
                    var_31 ^= ((/* implicit */unsigned int) min((min((((/* implicit */signed char) arr_50 [i_0] [i_0] [6LL] [i_5] [i_5])), (var_1))), (((/* implicit */signed char) (!((_Bool)1))))));
                    arr_87 [1U] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_44 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))) ? (((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_74 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((~(((long long int) arr_9 [i_0] [i_1] [i_0] [i_5] [i_1]))))));
                }
                for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                {
                    arr_91 [i_0] [(short)6] &= ((/* implicit */unsigned char) var_0);
                    var_32 *= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_11 [i_20])), (3360380573908993365ULL))) * (((/* implicit */unsigned long long int) max((arr_11 [i_20]), (((/* implicit */int) var_10)))))));
                    var_33 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (min((((((/* implicit */int) (_Bool)1)) << (((1833362633093198870ULL) - (1833362633093198867ULL))))), (((/* implicit */int) arr_17 [i_0] [i_1] [i_20] [i_0]))))));
                    arr_92 [i_0] [i_20] [(unsigned short)0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_0] [(short)5] [(unsigned short)5] [i_0] [i_0]))) : (min((1724703791U), (((/* implicit */unsigned int) (_Bool)1))))));
                }
            }
        } 
    } 
}
