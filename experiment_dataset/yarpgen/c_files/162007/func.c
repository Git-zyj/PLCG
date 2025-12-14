/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162007
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
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 7; i_2 += 4) /* same iter space */
                {
                    var_17 &= ((/* implicit */unsigned char) (-(2147483647)));
                    var_18 = ((/* implicit */unsigned int) (unsigned char)178);
                }
                for (unsigned char i_3 = 2; i_3 < 7; i_3 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) ((unsigned int) arr_1 [i_1]))))));
                    arr_9 [i_0] [i_1] [i_3] = ((((/* implicit */_Bool) min((arr_6 [i_1 - 1] [i_0]), (arr_6 [i_1 - 1] [i_1])))) ? (((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_3])) : (((/* implicit */int) var_7)))) : (min((((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2])), (var_5))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned short) (unsigned char)124);
                }
                for (unsigned char i_4 = 2; i_4 < 7; i_4 += 4) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [(short)0] = (unsigned char)178;
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_20 ^= ((/* implicit */long long int) (unsigned short)284);
                                var_21 = ((/* implicit */unsigned short) (~(min((arr_3 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_1] [i_4] [i_5] [i_6])) ? (var_9) : (((/* implicit */int) arr_7 [i_0] [(unsigned short)8] [i_0] [i_6])))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_0 + 1]))))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65252);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_23 = (+(((/* implicit */int) (_Bool)1)));
                                var_24 = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_4] [(_Bool)1] [i_7] [i_1]))) : (arr_3 [i_1])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_1 + 3] [i_4 + 3])))))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (-8924608039930131858LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65252), (arr_6 [i_4] [i_1]))))) : (8924608039930131858LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1217555910068279437LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48653))) : (-5834262922944596966LL)))) <= ((-(10025347795792460894ULL)))))))))));
                                var_26 = ((/* implicit */unsigned char) min((min((arr_15 [i_4 - 1] [i_4] [i_4] [i_7] [i_1 - 1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) arr_23 [i_4] [i_1]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min((arr_11 [i_0]), (((/* implicit */short) var_10))))))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4] [i_1])) ? (((/* implicit */int) (unsigned short)284)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_4]))))) ? (((/* implicit */int) ((signed char) arr_16 [i_0 + 1] [i_1] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])))) : (((/* implicit */int) (short)30269))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 7; i_9 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) ((3413790365997391330LL) + (((/* implicit */long long int) arr_5 [i_0 - 1] [i_1] [i_9]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        arr_32 [i_10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [(_Bool)0] [i_0] [(_Bool)0] [i_10])))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_17 [i_10] [i_10] [i_10])) : (var_4))) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_9 - 2] [i_0]))));
                        arr_33 [i_0] [i_0] [i_9] [i_1] [i_10] [i_1] = ((/* implicit */short) (_Bool)1);
                    }
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)284)) : (((/* implicit */int) arr_34 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
                        arr_37 [i_11] [i_1] [i_9] [i_9] [i_11] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-111)) % (((/* implicit */int) (unsigned short)284))));
                    }
                    for (short i_12 = 2; i_12 < 9; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */int) (-(arr_3 [i_0])));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((/* implicit */int) (unsigned short)284)) : (((/* implicit */int) (_Bool)1)))))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)178))) & (-1LL))))));
                        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_0 - 1] [i_9 + 3] [i_0] [i_9 + 3])) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_9] [i_9 - 1] [(_Bool)1] [i_0]))))));
                        arr_40 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) var_11))));
                    }
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned char)96)) : (((((/* implicit */int) (unsigned char)152)) * (((/* implicit */int) arr_28 [i_0] [i_1 + 3] [(unsigned char)1] [i_1 + 3])))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                            {
                                var_34 = ((/* implicit */unsigned long long int) ((_Bool) (-(min((((/* implicit */long long int) (unsigned short)65252)), (8924608039930131857LL))))));
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) - (arr_3 [i_14])))) ? ((+(((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) 8924608039930131857LL)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_13] [i_14] [i_0] [i_15])) ? (arr_5 [7] [7] [i_13]) : (((/* implicit */int) arr_27 [i_15] [i_15] [8LL] [i_15]))))) * (var_2)))));
                                arr_51 [i_0] [i_14] [i_13] [i_0] [i_1] = ((/* implicit */long long int) arr_31 [i_13] [i_1] [i_1]);
                            }
                            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
                            {
                                arr_54 [i_1] [i_13] [i_14] = ((/* implicit */unsigned short) (_Bool)1);
                                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (6131792080162176356ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 1] [i_1 + 2] [i_13] [i_14] [i_16]))))))));
                                var_37 -= ((/* implicit */unsigned char) var_4);
                                var_38 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                            {
                                var_39 = (!(((/* implicit */_Bool) min((arr_42 [i_1 + 2] [i_13] [i_14] [i_0 - 1]), (arr_42 [i_1 - 2] [i_13] [i_1 - 2] [i_0 + 1])))));
                                arr_58 [i_13] [i_0] = ((/* implicit */unsigned short) var_16);
                                var_40 = ((/* implicit */unsigned char) ((1691868665) > (((/* implicit */int) arr_38 [i_0] [i_0] [i_0]))));
                                var_41 = ((/* implicit */unsigned char) var_7);
                                arr_59 [i_13] [i_1] [i_1] [(unsigned short)6] [9LL] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [(signed char)0] [i_14] [(signed char)0] [i_14])) ? (((/* implicit */int) arr_30 [i_0] [i_1] [(unsigned char)6] [i_14])) : (((/* implicit */int) (unsigned char)44))))) <= (var_2))))));
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
                            {
                                var_42 = ((/* implicit */short) (unsigned char)96);
                                arr_63 [i_13] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)23273))));
                                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned short)0))) * (((((/* implicit */int) (unsigned char)63)) + (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)63))))))));
                            }
                            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                            {
                                arr_66 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_0] [i_1] [i_13] [i_14] [i_14])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))) ? (0ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_0] [i_1] [i_13 - 1] [i_14] [i_19])))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_44 [i_1] [i_14] [i_14] [i_14]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_9), (((/* implicit */int) (unsigned short)42263))))), (((arr_45 [i_1] [i_14] [i_14] [i_19]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                                arr_67 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_14] [i_0 + 1] [i_13] = ((/* implicit */unsigned int) (-(((((_Bool) (unsigned char)156)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))) : (((/* implicit */int) (unsigned short)48420))))));
                                var_44 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 354833002U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)35)))) % ((+(((/* implicit */int) ((unsigned char) (short)29098)))))));
                                arr_68 [i_13] [i_1 - 2] [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) min(((unsigned char)135), ((unsigned char)46)));
                                var_45 *= ((/* implicit */short) (~(arr_57 [i_0] [i_1] [i_0] [i_1] [i_14] [i_0] [i_19])));
                            }
                            for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
                            {
                                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_0] [i_13] [i_0] [i_20]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)159)) * (((/* implicit */int) (unsigned short)42263)))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) ((long long int) arr_28 [i_13] [i_13] [i_13] [i_13]))) ? (((/* implicit */int) arr_53 [i_0 - 1] [i_1] [i_0 + 1] [i_14] [i_20])) : (((/* implicit */int) (unsigned short)23273))))));
                                arr_71 [i_0] [i_13] [(unsigned short)2] [(unsigned short)2] [i_14] [i_14] [(unsigned short)2] = ((/* implicit */_Bool) arr_3 [(_Bool)1]);
                            }
                            /* LoopSeq 2 */
                            for (short i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
                            {
                                arr_74 [i_13] [i_1] [i_13] [i_14] [i_21] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)73))));
                                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_14])) % (((/* implicit */int) (short)-30269))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((int) var_1))))) || (((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-30270)))), (((/* implicit */int) var_7)))))));
                            }
                            for (short i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
                            {
                                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_39 [i_1] [i_1 + 1] [i_14] [i_14] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) : (arr_19 [i_0] [i_0] [i_13] [i_14] [i_22]))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)42262)))))))) != (((/* implicit */int) arr_30 [i_22] [i_22] [i_22] [i_22]))));
                                var_49 += min((((/* implicit */long long int) (-(((/* implicit */int) (short)30269))))), (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) arr_34 [(unsigned char)5] [i_1] [i_13] [i_14] [i_1] [i_1])) ? (var_3) : (var_3))))));
                                var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)114)))))))));
                                var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)4096))))) < (((((((/* implicit */_Bool) (unsigned short)65535)) ? (18381061193218147396ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_1] [i_1] [7] [i_0] [(short)0]))))) >> (((arr_19 [i_0] [i_13] [i_0] [i_13 - 1] [i_13]) - (2179009934U)))))));
                                arr_77 [i_0] [i_1] [i_13] [i_1] [i_22] = ((/* implicit */unsigned char) ((unsigned short) (~(arr_3 [i_1 - 2]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_52 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (3940134293U)))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)192)))))) != (((((/* implicit */int) var_16)) + (((/* implicit */int) ((4380021379755707383LL) == (9223372036854775807LL))))))));
    var_53 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_9)) >= (((((/* implicit */_Bool) ((((/* implicit */int) (short)6101)) << (((127U) - (120U)))))) ? (((/* implicit */long long int) var_9)) : (((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    var_54 = ((/* implicit */unsigned char) var_14);
}
