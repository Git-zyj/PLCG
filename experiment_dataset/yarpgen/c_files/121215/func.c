/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121215
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_15 += ((/* implicit */unsigned char) (((~(-264978901))) - (((/* implicit */int) (short)-3843))));
                    var_16 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_0 - 1] [i_1 - 1] [i_2 + 2]))) * (0ULL));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) < (18446744073709551612ULL))))));
                        var_18 &= ((/* implicit */int) (!(((/* implicit */_Bool) -1364677592))));
                    }
                    arr_10 [0ULL] [0ULL] [0ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1364677593)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (3198675671269522700ULL)));
                }
                for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(((/* implicit */int) max((arr_2 [1U] [i_1]), (((/* implicit */unsigned short) (signed char)-116))))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min((arr_7 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [(unsigned char)10] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) / (9007199254740991LL)));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_9 [(_Bool)1]))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        arr_18 [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) (~(9007199254740978LL)));
                        var_22 = ((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_4] [i_4] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            var_23 = var_14;
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(18064547233417371913ULL)))) ? (((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7] [i_6] [6ULL] [i_0] [i_0] [i_0]))) : (-9007199254740978LL))) : (((/* implicit */long long int) -1364677592))));
                        }
                    }
                    for (int i_8 = 4; i_8 < 9; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))))));
                        var_26 *= ((/* implicit */long long int) (-(((/* implicit */int) (short)-24834))));
                    }
                }
                arr_24 [i_1] = ((/* implicit */signed char) min((arr_12 [5U]), (((/* implicit */short) arr_8 [i_0] [i_1 + 1] [i_1] [i_0 - 1] [5ULL]))));
                /* LoopSeq 4 */
                for (signed char i_9 = 3; i_9 < 8; i_9 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned short) (signed char)-114);
                    arr_28 [i_0] [i_1] = ((/* implicit */unsigned short) ((_Bool) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) max((((/* implicit */short) (signed char)32)), (var_9)))))));
                    /* LoopSeq 1 */
                    for (short i_10 = 1; i_10 < 9; i_10 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) min((arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_10 - 1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-90)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) 2147483647))));
                        var_30 -= ((/* implicit */short) 13667039793074200035ULL);
                        /* LoopSeq 2 */
                        for (short i_11 = 2; i_11 < 10; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) 1015808U);
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((signed char) 1364677592)))));
                            arr_37 [i_1] [i_10] [i_9] [i_9] [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                            var_33 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((arr_26 [i_1] [i_1]), (2773069620U)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [9] [(_Bool)1] [(_Bool)1])) : (4779704280635351581ULL))) : (max((18446744073709551604ULL), (((/* implicit */unsigned long long int) (signed char)50)))))), (((/* implicit */unsigned long long int) max((arr_34 [i_0 - 1] [i_0 - 1] [i_9 + 1]), (((/* implicit */unsigned char) var_5)))))));
                            var_34 = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned char i_12 = 1; i_12 < 8; i_12 += 2) 
                        {
                            arr_42 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_33 [i_1 + 1] [i_9 + 4] [i_9] [i_12 - 1] [i_12] [i_12]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1 - 1] [i_9] [i_1 - 1] [i_1] [i_12 + 3])) ? (((/* implicit */int) var_1)) : (-1)))) : (((((/* implicit */_Bool) (signed char)-59)) ? (arr_9 [i_1]) : (3377699720527872ULL)))))) ? (min((((var_7) - (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) 4035824266U)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((arr_33 [i_10] [i_10] [(signed char)8] [i_10] [i_12] [i_0 - 1]) || (((/* implicit */_Bool) var_7))))), (var_9)))))));
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(var_7))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 15U)))))))) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_4 [0LL] [i_1] [i_9] [0LL])))))));
                        }
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3400937287340683126LL)) ? (arr_1 [i_0]) : ((+(((/* implicit */int) (signed char)-50))))))) ? (2835135485692455788LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1] [7LL] [i_10])))));
                    }
                }
                for (unsigned int i_13 = 3; i_13 < 10; i_13 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 2; i_15 < 11; i_15 += 3) 
                        {
                            {
                                arr_51 [i_1] [i_14] [5U] [i_0 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) >= (((unsigned int) 0ULL))));
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 11078843430996740838ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_14] [i_15 + 1] [i_15]))) : (var_7))))) * (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (min((arr_13 [i_0] [i_1] [i_13] [i_15 - 1]), (((/* implicit */int) arr_46 [i_14 - 1] [(signed char)6] [(signed char)6] [i_0 - 1]))))))))))));
                                var_38 = ((/* implicit */unsigned short) (signed char)16);
                                var_39 = ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                    var_40 &= ((/* implicit */long long int) arr_22 [(short)4] [8] [i_1] [(unsigned char)0] [8] [4]);
                    arr_52 [i_0] [4LL] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_30 [i_1 - 1] [i_13 - 2]), (arr_30 [i_1 - 1] [i_13 - 3])))) ? (((/* implicit */long long int) 3765311668U)) : (((((/* implicit */_Bool) arr_30 [i_1 + 1] [i_13 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_30 [i_1 - 1] [i_13 + 1])))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 3; i_16 < 10; i_16 += 4) /* same iter space */
                {
                    var_41 *= 1015808U;
                    arr_55 [3U] [i_1] [i_1] [(unsigned char)1] = ((/* implicit */long long int) ((signed char) arr_19 [i_0 - 1] [i_0] [i_0 - 1] [i_1] [i_1 + 1] [i_16 - 3]));
                    /* LoopNest 2 */
                    for (signed char i_17 = 3; i_17 < 10; i_17 += 1) 
                    {
                        for (signed char i_18 = 4; i_18 < 9; i_18 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) / (-9007199254741003LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_16] [i_17] [i_18]))) : (arr_15 [i_0] [7U] [7U])))))))));
                                var_43 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_1 + 1] [i_16 + 1] [i_17 + 2] [i_18 - 2]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_19 = 3; i_19 < 10; i_19 += 4) /* same iter space */
                {
                    var_44 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_40 [(signed char)10] [i_19 - 2]) >> (((((/* implicit */int) var_4)) - (26)))))) ? (((/* implicit */long long int) 3816245301U)) : ((-(arr_40 [8] [i_19 - 3])))));
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */long long int) ((arr_49 [i_19 + 1] [i_1] [i_19] [i_19 + 2] [i_1]) ? (((/* implicit */int) arr_49 [i_19 + 1] [i_1] [i_19] [i_19 - 1] [i_19 - 3])) : (((/* implicit */int) arr_49 [i_19 - 1] [i_1] [10LL] [i_19] [i_19]))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_1] [(unsigned char)6] [i_1] [i_1])) ? (((/* implicit */int) (signed char)37)) : (var_3)))), (((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 1] [i_19 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) : (-3400937287340683126LL)))))));
                    var_46 = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_19] [11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (4294967260U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((((/* implicit */int) min((((/* implicit */unsigned short) arr_46 [(unsigned char)6] [i_1] [i_1] [(short)7])), (var_13)))) > (((/* implicit */int) var_14))))));
                }
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)-11734))) | (var_0))), (((/* implicit */long long int) (~(var_3))))))) ? (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) & (0ULL)))) : (((/* implicit */long long int) ((((/* implicit */int) max((var_1), (((/* implicit */short) (_Bool)1))))) >> (((7159859768096457669LL) - (7159859768096457638LL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_20 = 1; i_20 < 15; i_20 += 3) /* same iter space */
    {
        var_48 *= ((/* implicit */signed char) arr_64 [i_20 - 1]);
        /* LoopNest 3 */
        for (long long int i_21 = 1; i_21 < 16; i_21 += 1) 
        {
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    {
                        var_49 = ((/* implicit */unsigned char) arr_70 [(signed char)14] [(signed char)14] [i_22]);
                        var_50 &= ((/* implicit */signed char) arr_73 [i_23 + 1] [6U] [i_23] [i_23]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_24 = 1; i_24 < 15; i_24 += 3) /* same iter space */
    {
        var_51 = ((((/* implicit */_Bool) ((signed char) 11078843430996740846ULL))) ? (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)162))))) : (arr_76 [i_24]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))));
        /* LoopSeq 1 */
        for (long long int i_25 = 3; i_25 < 16; i_25 += 4) 
        {
            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [1ULL] [i_25 - 1] [i_25] [i_25] [i_24] [i_24]))) == (18446603336221196288ULL)))) == (((/* implicit */int) arr_74 [i_24] [i_25]))));
            var_53 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_25 - 3]))) < (max((((/* implicit */unsigned int) (_Bool)1)), (var_2)))));
            arr_81 [i_24] [i_25] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)0)), (7367900642712810769ULL)));
            var_54 ^= ((/* implicit */unsigned int) min((max((562949953421311LL), (arr_75 [i_24 + 1]))), (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))));
        }
        var_55 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_64 [i_24 + 1]), (arr_64 [i_24 + 2])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (2613061025U)));
        arr_82 [i_24] [i_24] = arr_71 [i_24 + 1] [i_24 - 1] [i_24 - 1] [8] [i_24] [8];
        arr_83 [i_24] |= min((((/* implicit */int) var_8)), ((~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-110)))))));
    }
    var_56 = ((/* implicit */int) var_12);
}
