/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138800
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */signed char) 4932843785827937605LL);
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) min((arr_6 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
                                var_19 += ((/* implicit */unsigned short) ((arr_4 [i_0] [i_1 + 1] [i_2] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2 - 3]))) : (min((((/* implicit */long long int) arr_7 [4] [i_2 - 3] [i_2 - 2])), (281474708275200LL)))));
                                var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) (signed char)55))), (max((((/* implicit */unsigned long long int) var_13)), (arr_6 [i_4 - 1] [i_4] [i_1] [i_1] [i_3] [i_3])))));
                                var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_2])), (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned char)29))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3 - 2] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))))) ? ((+(((/* implicit */int) (short)32739)))) : (((/* implicit */int) ((signed char) (unsigned short)255))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)92)))) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [(_Bool)1] [5] [i_4] [i_4 - 1])) : (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_19 [i_5 - 1] [i_5] [(_Bool)1] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned short) arr_2 [i_0]))))) - ((~(((/* implicit */int) arr_19 [i_1] [i_5 - 1] [(_Bool)0] [i_5 - 1] [i_6])))))))));
                                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-19449))) | (12884901888LL)))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (max((((/* implicit */long long int) var_9)), (var_6)))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (35184372088831ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6])))));
                                arr_20 [i_1] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                                var_24 = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) (unsigned short)12)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                        {
                            arr_36 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)-14), (((/* implicit */short) arr_31 [i_10]))))) ? (arr_32 [i_8] [i_9] [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((min((4135621658U), (((/* implicit */unsigned int) (unsigned short)31834)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9] [i_9 + 2]))))))));
                            var_25 += ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) (short)(-32767 - 1)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))), ((~((~(((/* implicit */int) var_14))))))));
                        }
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) var_16);
                            arr_39 [i_10] [i_11] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_26 [i_13] [i_9 + 1]))));
                            var_27 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_37 [i_8] [i_9 - 1] [i_11] [i_9 - 1] [i_8]))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                        {
                            var_28 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_8] [i_8] [i_10] [i_11] [(unsigned char)10]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_31 [(unsigned char)6])))))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_8] [i_9 + 1] [i_8] [i_8])) ? (((/* implicit */int) arr_28 [i_8] [i_9 - 1] [i_9] [i_8])) : (((/* implicit */int) arr_27 [i_9 + 3] [i_9 + 2])))))));
                        }
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (((_Bool) (_Bool)1))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9 - 1] [i_9 + 1])) ? ((-(((/* implicit */int) (short)21208)))) : (((/* implicit */int) arr_26 [i_8] [i_9])))))));
                            var_32 *= (short)(-32767 - 1);
                        }
                        var_33 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_8] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_9] [i_10] [i_11] [i_9 - 1] [i_11]))) : (-585665683943380652LL)))) | ((~(((arr_23 [i_8] [i_8]) ? (8814196226189266886ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))))))));
                    }
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        var_34 ^= (signed char)(-127 - 1);
                        var_35 *= ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) arr_44 [i_16] [(signed char)9] [i_16] [i_16] [i_9 + 1])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)4)) : (arr_25 [i_10] [i_9 + 2] [i_9 + 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            arr_51 [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_38 [i_10] [(signed char)11] [i_9 - 1] [i_10] [i_9 - 1] [18ULL])) > (((/* implicit */int) (!(arr_23 [i_9] [i_17])))))))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(arr_41 [i_8] [i_9 + 3] [(unsigned char)22] [i_16] [i_8] [i_8] [i_10]))), (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) arr_42 [i_8] [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_8] [i_9] [i_10] [(signed char)22] [i_10]))) : (((arr_32 [i_8] [(unsigned char)22] [23] [i_16]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) arr_30 [i_8] [i_9] [i_9 + 1] [i_9])) : (((/* implicit */int) max(((unsigned short)61440), (((/* implicit */unsigned short) (unsigned char)236)))))))))))));
                            arr_52 [i_8] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), ((~(arr_41 [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9])))));
                            var_37 += ((/* implicit */unsigned long long int) ((max((8646911284551352320LL), (arr_29 [i_16] [i_16]))) - (((/* implicit */long long int) ((/* implicit */int) (short)8064)))));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 3; i_18 < 23; i_18 += 1) 
                        {
                            var_38 = ((/* implicit */int) (signed char)123);
                            arr_57 [(unsigned char)2] [(unsigned char)2] [i_16] [(unsigned char)2] [i_18] [(_Bool)1] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)2869))));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [(unsigned short)0] [i_9] [i_10] [i_16] [i_9 + 2])) || (((/* implicit */_Bool) 106816063U)))))));
                        }
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 23; i_19 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_26 [i_8] [i_19])) <= (arr_44 [(signed char)2] [14ULL] [i_10] [i_10] [(signed char)2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) max(((signed char)-123), ((signed char)39)))), (var_4))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) | (max((15476650832541507018ULL), (((/* implicit */unsigned long long int) var_3)))))))))));
                        var_41 -= ((/* implicit */long long int) arr_54 [i_8] [i_19 - 3] [i_19] [i_19]);
                        var_42 = ((/* implicit */int) min((var_42), (((((/* implicit */_Bool) min((((((((/* implicit */int) var_12)) + (2147483647))) << (((((arr_44 [i_8] [i_8] [i_9 + 2] [i_10] [i_19]) + (1882986962))) - (28))))), (((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) arr_59 [i_10] [i_10] [i_19 - 2] [i_19 - 2])))) : (min((((/* implicit */int) arr_46 [i_8] [(_Bool)1] [12LL] [i_10] [(signed char)7] [i_8] [i_19])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [0])) : (((/* implicit */int) var_3))))))))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)205), (((/* implicit */unsigned char) (signed char)-95)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-115)) - (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (((4011788252227217694ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1360574765U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_8] [i_9 + 2] [i_9] [i_10] [i_10])))))) ? ((-(((/* implicit */int) (short)255)))) : (((/* implicit */int) arr_49 [i_8] [i_8] [i_8] [i_10] [i_19]))))))))));
                        var_44 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_35 [i_10] [i_19 - 1] [i_19 - 1] [i_19] [i_10] [(_Bool)1])))), (max((((/* implicit */int) (unsigned char)79)), (arr_44 [(unsigned short)22] [i_9] [i_9 + 3] [i_10] [i_19 - 2])))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_67 [i_9] [i_9] [i_9] [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_45 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9]))));
                            var_45 += ((/* implicit */unsigned long long int) (~(arr_29 [i_9 + 2] [i_10])));
                            arr_68 [i_8] [i_9] [i_10] [(unsigned short)20] [i_10] [i_10] [i_21] &= ((/* implicit */unsigned char) (-(((1966080) ^ (((/* implicit */int) arr_35 [i_8] [i_9 - 1] [i_10] [i_10] [i_9 - 1] [i_21]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) 
                        {
                            arr_71 [(signed char)4] [(signed char)4] [(short)17] [i_22] [i_22] [i_9] [i_20] = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) (unsigned short)6)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_3))))));
                            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_45 [(unsigned short)0] [i_9 - 1] [(unsigned short)0] [i_9 - 1] [i_10])) > (((/* implicit */int) arr_45 [i_8] [i_9 - 1] [(unsigned short)6] [i_8] [i_10]))))))))));
                            var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) var_11))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 24; i_24 += 4) 
                        {
                            {
                                arr_78 [i_8] [i_8] [i_8] [i_23] [i_24] [i_10] [i_10] |= ((/* implicit */signed char) (-(arr_72 [i_8] [i_9] [i_10] [i_9])));
                                var_48 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_74 [i_8] [i_9] [i_9] [10] [i_23] [(_Bool)1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_50 [i_8] [i_8] [(unsigned short)22])))), (((/* implicit */int) max((var_10), ((signed char)65))))))), (max((arr_47 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 3]), (((/* implicit */unsigned long long int) (unsigned char)255))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_49 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_14)), (var_1)))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1)))))));
    /* LoopNest 2 */
    for (signed char i_25 = 3; i_25 < 9; i_25 += 4) 
    {
        for (short i_26 = 0; i_26 < 10; i_26 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_27 = 2; i_27 < 8; i_27 += 3) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        for (unsigned char i_29 = 1; i_29 < 9; i_29 += 1) 
                        {
                            {
                                var_50 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_58 [i_28] [i_25]))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_26]))) : (1125831187365888LL)))) ? (((((/* implicit */_Bool) arr_7 [i_25] [i_27] [i_29])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (var_11) : (((/* implicit */int) (_Bool)1)))))))));
                                var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)9385)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (signed char)-81)))), (((/* implicit */int) ((((/* implicit */int) (signed char)33)) == (((/* implicit */int) var_5)))))))), (max((arr_18 [i_28] [(unsigned short)5] [i_28] [i_28] [i_28]), (((/* implicit */unsigned long long int) var_7)))))))));
                            }
                        } 
                    } 
                } 
                var_52 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_0)), (arr_66 [i_25] [i_25] [i_25] [i_26])))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1433963709)) + (71765304U)))) ? (((((/* implicit */_Bool) 2607720287U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_25] [i_25] [i_26]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14336)))));
            }
        } 
    } 
    var_53 += ((/* implicit */unsigned int) 12675133260654661264ULL);
}
