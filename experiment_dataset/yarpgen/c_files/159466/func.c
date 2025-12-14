/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159466
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) var_15)) / ((-((+(((/* implicit */int) (unsigned char)255)))))))))));
    var_19 = ((/* implicit */unsigned int) var_3);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((2814307323U), (((/* implicit */unsigned int) var_6)))), (min((1480659968U), (((/* implicit */unsigned int) 4194048))))))) ? (((/* implicit */long long int) (-(2814307345U)))) : (((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) / (var_9)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0])));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) ^ (((/* implicit */int) ((_Bool) var_14)))))), (2814307323U)));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_23 ^= ((/* implicit */signed char) min((((/* implicit */int) ((short) arr_7 [i_2] [i_1]))), ((-(((/* implicit */int) arr_4 [i_1] [i_2]))))));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2814307323U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 2] [i_4 - 1])))))) ? (min((2814307323U), (((/* implicit */unsigned int) (signed char)-90)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_4 - 1] [i_3 + 2])))))));
                        arr_15 [i_2] [i_2] [i_4] [(short)7] [i_3 + 2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (18113434389820876831ULL)))));
                        arr_16 [i_2] [4U] [i_3] [(unsigned char)8] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32756))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)64)), (var_7)))), (((arr_13 [i_1] [i_2] [4U] [i_2] [i_2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_2] [i_2]))))))) : (7249258231573368047ULL)));
                        var_25 *= ((/* implicit */long long int) 2814307306U);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_26 *= ((/* implicit */unsigned short) arr_0 [i_4] [i_1]);
                            var_27 *= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((~(4294967295U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))), (((min((((/* implicit */unsigned long long int) (_Bool)1)), (11197485842136183574ULL))) >> (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            arr_21 [i_2] [i_2] [(unsigned short)9] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_11 [1ULL] [i_2] [i_2] [i_2]), (arr_11 [i_1] [i_1] [(_Bool)1] [i_1]))))));
        }
        arr_22 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((-(((/* implicit */int) (_Bool)1))))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)37331)))))))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_29 = ((/* implicit */unsigned int) (_Bool)1);
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_24 [i_6]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 2; i_9 < 8; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_31 = ((min((((/* implicit */unsigned long long int) arr_33 [i_7] [(signed char)10] [(signed char)10] [i_8 + 2] [i_10] [i_8])), (arr_35 [i_8] [i_9 + 4] [i_9]))) > (((/* implicit */unsigned long long int) min((7881299347898368LL), (((/* implicit */long long int) (!((_Bool)1))))))));
                                var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) min((((/* implicit */signed char) (_Bool)1)), (var_13)))))));
                                var_33 = ((/* implicit */long long int) ((((var_3) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) arr_30 [i_8])))) != (((/* implicit */int) ((unsigned char) (_Bool)0)))));
                                var_34 = ((/* implicit */short) arr_27 [i_10]);
                            }
                        } 
                    } 
                    var_35 *= ((/* implicit */unsigned char) ((long long int) 7814071380825141758LL));
                }
                /* LoopSeq 3 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    var_36 = ((/* implicit */unsigned short) ((long long int) max((8183500884944601615ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 10; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) ((arr_34 [i_12] [i_8] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62940))) : (871957035U)))), (((-1LL) % (arr_43 [i_8])))))));
                                var_38 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_46 [i_13 + 2] [i_13 + 2] [i_8 + 1] [i_8] [i_8]))))), (min((((/* implicit */unsigned long long int) 4294967275U)), (7249258231573368047ULL)))));
                                var_39 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)227)), ((((~(2251799813677056LL))) ^ (arr_43 [i_8])))));
                                var_40 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65504))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29372)) ? (((/* implicit */int) max((var_10), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (unsigned short)0))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65517)) / (((/* implicit */int) var_10))))), (((long long int) var_1)))));
                                var_41 = ((/* implicit */unsigned int) ((arr_42 [i_12] [i_8] [i_7]) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)35)), ((unsigned short)65535)))) : (((/* implicit */int) (signed char)24))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned short) arr_42 [(_Bool)1] [i_8] [i_12]);
                }
                for (unsigned short i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    var_43 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))), (((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_34 [i_7] [i_7] [i_7]))))))), ((((_Bool)1) ? (((/* implicit */long long int) 871957035U)) : ((-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_44 ^= ((/* implicit */long long int) arr_39 [i_16] [i_16]);
                                var_45 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)99)) - ((+(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */unsigned char) 3423010260U);
                    arr_57 [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((arr_41 [i_7] [i_7] [i_8] [i_7]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5710))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12)) - (((/* implicit */int) (short)32143))))))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_60 [i_18] [i_8] = ((/* implicit */unsigned char) arr_30 [i_8]);
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_40 [i_8 - 1] [i_8 - 1]), (((/* implicit */unsigned char) var_13))))) | ((~(((/* implicit */int) ((unsigned short) arr_42 [i_7] [i_8] [i_7])))))));
                    arr_61 [(unsigned char)11] [i_8] = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 2; i_19 < 11; i_19 += 3) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned short) -1713536965984342776LL);
                                var_49 -= ((/* implicit */unsigned char) ((min((max((((/* implicit */unsigned long long int) 2814307302U)), (4ULL))), ((-(0ULL))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-1))))))))));
                                var_50 = ((/* implicit */unsigned char) min((-1713536965984342776LL), (((/* implicit */long long int) 2814307328U))));
                                var_51 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_32 [i_7]), (((/* implicit */unsigned long long int) var_3)))))));
                                var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_7] [0LL] [i_7] [i_7])) && (((/* implicit */_Bool) (unsigned char)255))))), (max((((/* implicit */unsigned short) (unsigned char)255)), (arr_36 [i_7] [i_7])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */long long int) 1682857503)) : (-2388193346467103722LL)))))) : (((unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)247))))))))));
                            }
                        } 
                    } 
                }
                arr_68 [i_7] [(signed char)2] [i_7] |= ((((((/* implicit */int) arr_36 [i_7] [i_7])) != (((/* implicit */int) (unsigned short)65529)))) ? ((-(arr_51 [i_7] [i_7] [i_8 + 1]))) : (max((arr_51 [i_8] [i_8 + 2] [i_8 + 1]), (((/* implicit */long long int) var_0)))));
                var_53 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_55 [i_7] [i_7] [i_7] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
            }
        } 
    } 
}
