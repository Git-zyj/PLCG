/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113342
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (min((-6722771676298430639LL), (5336561041375154506LL)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2628251054U)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (signed char)-65)))) >> (((/* implicit */int) (!(((((/* implicit */int) (signed char)81)) > (((/* implicit */int) (unsigned short)12013)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] = arr_1 [(unsigned char)12] [i_0];
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0])) ^ (((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) var_2))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_4] [4ULL])) ? (((/* implicit */int) (unsigned short)53524)) : (((/* implicit */int) arr_12 [i_0])))), ((+(((/* implicit */int) (unsigned char)185))))))), (var_8))))));
                            }
                        } 
                    } 
                    var_21 = (unsigned short)53511;
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        var_22 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) -8407026648771505956LL)) ? (((/* implicit */unsigned long long int) arr_20 [i_7 - 1] [i_7 - 1] [i_5 + 2])) : (((((/* implicit */_Bool) 33285996544LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53505))) : (arr_7 [i_5] [i_5] [i_5] [i_5]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2647568399530384533LL)) : (3ULL)))) ? (arr_7 [i_5] [i_5] [12LL] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_5] [i_5]))))));
                        /* LoopSeq 3 */
                        for (short i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_0] [i_5])) > (arr_15 [i_6] [i_6])))), (var_9))))) * (((unsigned long long int) arr_17 [i_5 + 2] [i_7 + 1] [i_8 + 1]))));
                            arr_24 [i_0] [(unsigned char)17] [i_5] [i_5] [i_7] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)17)))))) + (16147400315864113761ULL)));
                        }
                        for (long long int i_9 = 3; i_9 < 19; i_9 += 1) 
                        {
                            var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_9] [i_6] [i_5] [i_0])) ? (((/* implicit */int) arr_3 [i_7 - 1])) : (-1367457923)));
                            var_25 ^= ((/* implicit */signed char) ((((long long int) (-(1143602728U)))) - (((/* implicit */long long int) ((((-647583901) - (arr_8 [i_5] [i_0] [14] [i_6]))) - (((((/* implicit */_Bool) (unsigned short)53522)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)167)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7] [18ULL] [i_7 + 1] [4ULL] [i_7] [i_0])) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_20 [i_6] [i_7] [i_7]) : (((/* implicit */unsigned int) -1046943049)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7] [i_7 + 1] [i_7] [i_0])))));
                            var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [17U] [i_7 + 2] [i_7 + 2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
                            var_28 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0]);
                        }
                        arr_32 [i_0] [i_5 - 2] [i_0] [(unsigned short)19] = ((/* implicit */short) arr_9 [i_0] [i_7] [i_7] [i_6] [i_5 + 1] [i_0]);
                        /* LoopSeq 4 */
                        for (int i_11 = 1; i_11 < 19; i_11 += 4) /* same iter space */
                        {
                            arr_36 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (signed char)29)) != ((+(((/* implicit */int) (unsigned short)12037))))))));
                            arr_37 [i_11] [i_11] [i_0] [i_7] [i_0] [(unsigned char)7] [i_0] = min(((~(-9223372036854775791LL))), (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */long long int) 1046943047)) : (5835986356521236028LL))));
                            var_29 = ((/* implicit */signed char) ((unsigned int) arr_9 [i_0] [i_7] [i_0] [i_5] [i_0] [i_0]));
                            var_30 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [(short)7]);
                        }
                        for (int i_12 = 1; i_12 < 19; i_12 += 4) /* same iter space */
                        {
                            arr_41 [19ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_7 + 1] [i_7 + 1] [i_5] [(_Bool)1]), (arr_6 [i_7 + 2] [i_5] [i_6] [i_0])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_4 [i_7 + 2] [i_5 + 2])) ? (((/* implicit */int) arr_6 [i_7 + 1] [i_7 + 1] [(short)6] [(short)6])) : (((/* implicit */int) arr_6 [i_7 + 1] [i_5] [i_6] [i_7]))))));
                            var_31 = ((/* implicit */unsigned short) var_5);
                            arr_42 [6LL] [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_1 [i_5 + 1] [i_0]);
                            var_32 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((-15LL), (((/* implicit */long long int) arr_28 [i_6] [i_5])))), (((/* implicit */long long int) arr_16 [i_5 + 1] [i_7] [i_12])))))));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 19; i_13 += 4) /* same iter space */
                        {
                            var_33 *= ((/* implicit */short) ((((/* implicit */int) arr_40 [i_7])) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (2912881228U))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) -686376314)) ? (((/* implicit */int) (short)-28298)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5])) && (((/* implicit */_Bool) (unsigned char)140)))))));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((int) arr_12 [i_7])) : (((((/* implicit */_Bool) arr_17 [i_6] [(short)18] [5LL])) ? (((/* implicit */int) var_6)) : (arr_8 [i_5] [i_6] [i_5] [i_13]))))))));
                            var_36 = ((/* implicit */int) (signed char)7);
                        }
                        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
                        {
                            var_37 ^= ((/* implicit */long long int) arr_49 [i_0]);
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_5])))))));
                            arr_51 [i_0] [i_0] [i_6] [i_7] [i_14 + 1] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    }
                    arr_52 [i_0] = ((/* implicit */int) 7378677901790514735LL);
                    /* LoopNest 2 */
                    for (long long int i_15 = 3; i_15 < 16; i_15 += 3) 
                    {
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            {
                                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_16] [i_15 - 1] [i_6] [i_0]))) <= (((((/* implicit */_Bool) ((long long int) (signed char)72))) ? (min((arr_44 [(signed char)1] [(signed char)1] [i_15] [i_15 - 2]), (arr_29 [i_0] [i_5] [i_6] [i_15] [(unsigned char)2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7177058501297642990ULL)) && (((/* implicit */_Bool) 9223372036854775790LL)))))))))))));
                                var_40 = ((/* implicit */_Bool) var_5);
                                var_41 = ((/* implicit */long long int) arr_39 [i_0] [i_5] [i_6] [13] [(signed char)9]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_17 = 1; i_17 < 18; i_17 += 4) 
                    {
                        arr_60 [i_0] = ((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_42 = ((long long int) arr_7 [i_5] [i_17 + 1] [i_17] [i_17 + 2]);
                    }
                    arr_61 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_6]))))) >= (((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) * (0LL)))));
                }
            } 
        } 
        arr_62 [i_0] = ((/* implicit */unsigned int) ((((arr_33 [i_0]) >> (((((/* implicit */int) arr_21 [i_0] [i_0])) - (165))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(175069298)))) ? (var_1) : (((/* implicit */int) ((unsigned char) (unsigned short)6006))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_33 [i_0]))));
            /* LoopSeq 1 */
            for (short i_19 = 2; i_19 < 18; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_18])) ? (((/* implicit */long long int) arr_53 [6U] [i_19 - 1] [i_19 + 2] [i_18])) : (arr_67 [i_18] [i_19 - 1] [i_18]))))));
                            arr_72 [i_0] [i_0] [i_19] [i_18] [i_20] [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [i_19] [i_19] [i_19 - 2] [i_21] [i_18]))));
                            var_45 = arr_6 [i_0] [i_18] [i_0] [i_20];
                            var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_0] [i_18] [1ULL] [i_20] [i_18]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_22 = 1; i_22 < 17; i_22 += 1) 
                {
                    for (int i_23 = 0; i_23 < 20; i_23 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) (~(arr_53 [i_0] [0LL] [i_19] [i_18])));
                            var_48 ^= ((/* implicit */signed char) arr_7 [i_18] [i_22 + 1] [i_19 - 2] [i_22 + 1]);
                            arr_78 [i_0] [i_18] [i_19] [(unsigned char)8] [i_22] [i_22] = ((/* implicit */unsigned long long int) (+(arr_35 [i_19 + 2] [i_19 - 2] [i_19 - 2] [i_19] [i_22 - 1] [i_22 - 1])));
                        }
                    } 
                } 
            }
            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((-2147483633) != (((/* implicit */int) (unsigned char)19)))))));
        }
        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))) < ((-(((/* implicit */int) var_6)))))))) < (arr_69 [14LL] [2] [14LL]))))));
    }
    for (unsigned long long int i_24 = 3; i_24 < 8; i_24 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_25 = 1; i_25 < 10; i_25 += 3) 
        {
            for (signed char i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                {
                    var_51 = ((/* implicit */long long int) arr_64 [i_24] [i_25]);
                    var_52 = ((/* implicit */long long int) var_11);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_27 = 1; i_27 < 10; i_27 += 4) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 3) 
            {
                for (signed char i_29 = 1; i_29 < 10; i_29 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_30 = 0; i_30 < 11; i_30 += 3) 
                        {
                            arr_100 [i_30] [i_24] [i_28] [i_24] [i_24] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [6] [i_27 - 1] [i_24])) / (((/* implicit */int) (unsigned short)59529))));
                            arr_101 [i_24] [(signed char)6] [i_28] [i_24] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (arr_44 [i_24] [i_27] [i_28] [i_24]) : (arr_85 [i_24]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) > (arr_85 [i_24])))))));
                            var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) var_2))));
                        }
                        for (int i_31 = 0; i_31 < 11; i_31 += 2) 
                        {
                            arr_106 [i_27 - 1] [i_24] [6] = ((/* implicit */short) var_12);
                            var_54 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (arr_55 [(unsigned char)14] [i_27] [(unsigned char)1] [i_29] [i_31])))) ? (((unsigned long long int) 2147483647)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_27 + 1] [i_27 + 1] [i_29] [i_27 + 1])) ? (-2396776405570759932LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_28])))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_89 [i_27 + 1] [i_27] [(short)4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_21 [16U] [16U])) : (((/* implicit */int) (unsigned char)142))))) : (((((/* implicit */_Bool) arr_45 [i_24] [i_27])) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [(short)1] [i_28]))) : (-37LL))))))));
                            var_55 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_98 [i_24 + 1] [i_24 - 3] [i_24 + 3] [i_24 + 1] [i_24 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_24] [i_24]))) : (min((((((/* implicit */_Bool) 13LL)) ? (12711034823327418580ULL) : (arr_65 [(signed char)19]))), (((/* implicit */unsigned long long int) (!((_Bool)1))))))));
                            var_56 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)22866))))) ? (((16746501316217171607ULL) % (arr_7 [i_31] [i_24 + 2] [i_29 + 1] [i_27 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -4910003046480359726LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (18080938287774586190ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_32 = 0; i_32 < 11; i_32 += 3) 
                        {
                            arr_111 [i_24] [i_27] [9LL] [i_24] [i_24] = ((/* implicit */unsigned short) arr_99 [i_24] [i_27] [i_28] [i_29] [i_32]);
                            var_57 = arr_28 [i_24] [i_24];
                            arr_112 [i_24] [(short)7] [i_28] [i_28] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_24 + 1] [i_27] [i_27] [i_29 - 1] [i_32] [i_24])) ? (784694760U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_24 + 2] [i_27] [i_27] [i_29 + 1] [i_32] [i_24])))));
                            var_58 = ((/* implicit */long long int) arr_21 [i_27] [i_27]);
                            var_59 = ((/* implicit */unsigned char) (-(2786882542U)));
                        }
                        var_60 ^= ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_71 [i_24 - 2] [(_Bool)0])), (arr_95 [i_24 + 2] [i_24 + 1] [i_24 + 1] [i_24]))))));
                    }
                } 
            } 
        } 
    }
}
