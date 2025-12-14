/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12157
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
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((long long int) (signed char)119))))), (max((((unsigned long long int) 15)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_2] [1LL])))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5U)) ? (2155514833511304914LL) : (((/* implicit */long long int) -6358913))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (9460050516467504445ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) arr_3 [i_1] [i_4])))))))) ? ((+(((((/* implicit */unsigned long long int) arr_13 [i_0] [(short)6] [(short)6] [i_3] [i_0])) * (1ULL))))) : (((/* implicit */unsigned long long int) 2147483640))));
                                arr_14 [i_2] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1] [i_3] [5ULL] [i_2 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]), (((/* implicit */long long int) 1177462407)))) : (((/* implicit */long long int) 0U))))));
                                arr_15 [i_0] [i_0] [6] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */long long int) min(((~(((/* implicit */int) (short)10504)))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) 9007199187632128LL)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [2LL] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (0U)))))))));
                                arr_16 [i_0] [0LL] [i_0] [i_0] [i_0 + 2] [8] = ((/* implicit */unsigned long long int) ((13835058055282163712ULL) >= (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_2 - 2])), (max((511ULL), (((/* implicit */unsigned long long int) -7856961831831729980LL))))))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18670))) : (arr_6 [i_0 + 1]))) & (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 2]))))) ? ((~(((/* implicit */int) arr_3 [(unsigned short)7] [i_2 + 1])))) : (((/* implicit */int) ((signed char) (~(2357212536U)))))));
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (-(1073741824U)));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 8; i_6 += 2) 
                        {
                            {
                                var_22 = max((((((1048064ULL) << (((/* implicit */int) (_Bool)0)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-122)) < (((/* implicit */int) var_8)))))))), (((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775796LL))));
                                var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)55)), (arr_1 [i_0] [3])))) ? (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) arr_22 [i_6 + 1] [i_5] [i_0] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2 - 1] [i_5] [i_0])))), (((unsigned long long int) ((unsigned char) arr_4 [i_2] [i_5] [i_6])))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2 - 1]))) * ((((-(2481114567U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6372994248228836237LL)) ? (-1417322517) : (((/* implicit */int) (unsigned short)12491)))))))));
                }
                for (unsigned int i_7 = 3; i_7 < 8; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 6; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_7] [i_7] [i_8]);
                        arr_29 [i_0] [i_1] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (short)21293)) ? (8196738209575007689LL) : (((/* implicit */long long int) 19U)))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        arr_32 [i_0] = ((/* implicit */long long int) 9851144186142322777ULL);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) -9090156599395950399LL)))) ? (max((-2389038217320311848LL), (((/* implicit */long long int) (_Bool)1)))) : (min((((/* implicit */long long int) max(((short)-3660), (((/* implicit */short) (unsigned char)0))))), ((+(arr_10 [i_0] [7U] [i_1] [7U] [i_7] [i_0]))))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_39 [i_0] [i_1] [i_0] [i_10] [i_1] [i_10] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0]))) || (((/* implicit */_Bool) arr_31 [6ULL] [(unsigned char)9] [6ULL]))))), (max((1567486570U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7013423944610665001LL)))))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((long long int) arr_36 [i_0] [i_1] [7ULL] [i_0] [i_0] [i_11])) & (((/* implicit */long long int) ((int) (_Bool)1)))))) ? (arr_11 [i_0] [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) arr_18 [i_11] [i_0] [i_1] [i_0])) ? (arr_18 [i_1] [i_7 + 2] [i_10] [i_7 + 2]) : (arr_18 [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 1])))));
                            arr_40 [6ULL] [i_1] [i_1] [i_1] [6ULL] [6ULL] |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_11] [i_11])) : (((/* implicit */int) arr_2 [i_11] [i_11]))))));
                            var_27 = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_7] [i_7] [i_0]);
                        }
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                        {
                            arr_43 [i_0] [i_0] [i_0] [i_0] [3LL] [i_0] [3LL] = ((((/* implicit */int) ((unsigned char) ((short) 1898937176U)))) - (((((/* implicit */_Bool) 1065353216)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [(unsigned char)4] [i_10] [i_10])), (arr_0 [i_0])))) : (arr_19 [i_0] [i_0] [(unsigned char)1] [i_12]))));
                            arr_44 [i_0] [i_1] [i_12] [i_0] [i_1] = min((((long long int) ((int) 3961037831141032043LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)168)) / (-94082648)))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) min((-3874599620763648746LL), (arr_42 [i_7] [i_1] [i_7] [i_10] [i_0] [i_1] [i_12])))) ? (max((((/* implicit */unsigned long long int) (unsigned char)1)), (17657597684285893328ULL))) : ((-(18446744073709551615ULL))))) : (max((9630911540789150757ULL), (7727617021122075728ULL)))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                        {
                            var_29 |= ((/* implicit */_Bool) (unsigned short)2037);
                            var_30 = ((arr_27 [i_0] [(unsigned short)4] [i_7] [i_13]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_5 [i_7 + 1])) : (arr_46 [i_0] [i_1] [i_7] [9] [(unsigned char)6] [i_1] [i_13])))) ? (arr_42 [i_0] [i_0] [i_0] [i_7] [i_0] [i_10] [i_7]) : (((((/* implicit */_Bool) var_12)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))) : (((/* implicit */long long int) arr_25 [i_1] [i_7 - 3] [i_13])));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) % (((/* implicit */int) ((arr_6 [i_7]) != (((/* implicit */unsigned long long int) 0LL)))))))) ? (max((((11395360180605596757ULL) | (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((arr_5 [i_0]) - (((/* implicit */unsigned int) 262143))))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 2646506373496313749LL)))) ? (-8382290192026721162LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) 3375094474357023487LL))))))))))));
                            var_32 ^= var_11;
                        }
                        arr_47 [i_0 + 2] [i_0] [i_0] [i_7 + 1] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_7 [5U] [i_7 + 1] [i_7 - 3] [i_7 + 1] [i_0 + 2] [i_1]))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -2042190860183778739LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2846))) : ((-(var_11)))))) ? (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_1] [i_7] [i_1])))) : ((~(max((((/* implicit */unsigned long long int) (signed char)63)), (18446744073709551615ULL)))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        var_34 -= ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) 1056992612)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((max((((4667545988231581134ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) 654619450U)) * (var_1))))) * (((/* implicit */unsigned long long int) max((arr_22 [i_1] [i_1] [i_0] [i_7] [i_7 - 3]), (arr_22 [i_0] [i_0] [i_0] [i_0] [i_7 - 3]))))));
                            arr_53 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2950331863U)) ? ((+((((_Bool)1) ? (arr_10 [5U] [i_14] [i_14] [i_7] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_33 [(unsigned short)4] [i_7])), (17340997100323336345ULL)))) ? (((/* implicit */int) arr_37 [i_15] [i_15] [i_15] [i_14] [i_15] [i_0 - 2] [i_1])) : (((int) arr_2 [i_0] [i_1])))))));
                        }
                        for (long long int i_16 = 1; i_16 < 7; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((unsigned long long int) (!((!(((/* implicit */_Bool) var_16))))))))));
                            var_36 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [8LL] [i_14])) ? (((/* implicit */int) (unsigned short)64899)) : (((/* implicit */int) arr_27 [i_1] [i_7] [i_14] [i_16]))))) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)141)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_1]))) != (arr_20 [i_14])))))), (((((/* implicit */_Bool) 1453290421035190395ULL)) ? ((~(((/* implicit */int) (signed char)7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7 + 1] [i_16 + 2])))))))));
                        }
                        var_37 -= ((/* implicit */unsigned char) (short)-15776);
                        arr_57 [9ULL] [9ULL] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 3058083195130146455LL)))) ? ((-9223372036854775807LL - 1LL)) : ((~(((((/* implicit */_Bool) 7010704384736481008LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_0]))) : (3LL)))))));
                        var_38 = arr_21 [(unsigned short)0] [(unsigned short)0] [i_1] [i_7] [i_7 + 1] [i_14];
                    }
                    arr_58 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_1])) < (((/* implicit */int) ((signed char) 1506881853)))))), (((((/* implicit */_Bool) arr_55 [i_0] [i_0] [i_0 - 2] [i_0])) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16256))) : (arr_18 [i_0] [i_0] [i_0] [i_0]))) : (max((arr_20 [i_0]), (((/* implicit */long long int) arr_48 [i_0] [i_0]))))))));
                }
                arr_59 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_49 [i_0] [i_0] [i_1] [i_1]);
                var_39 = min((4330330819570101027LL), (((/* implicit */long long int) (_Bool)1)));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned short) min((1352593809U), (((/* implicit */unsigned int) (unsigned char)85))));
    var_41 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((-4105148922882763142LL), (((/* implicit */long long int) var_15))))) ? (((/* implicit */int) var_0)) : (-3)))));
}
