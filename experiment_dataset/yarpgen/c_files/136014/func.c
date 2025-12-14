/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136014
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [(short)18] |= ((/* implicit */short) (+(((/* implicit */int) (short)0))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min((-8152467132443437145LL), (min((((/* implicit */long long int) arr_1 [i_0])), ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)119)))))) : (min((((/* implicit */long long int) (short)(-32767 - 1))), (-8152467132443437134LL))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_3] [(unsigned char)2] &= ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_17 [i_1] [(unsigned short)11] = ((/* implicit */int) arr_8 [i_1] [i_2] [i_1]);
                                arr_18 [i_3] [i_3 - 1] &= ((/* implicit */unsigned short) ((short) ((unsigned char) (short)31618)));
                                arr_19 [i_1] [i_1] [i_3 + 1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_4 + 3] [i_2] [19] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_1] [(short)16] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31607)) ? (8152467132443437144LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (unsigned char)124))))));
        arr_21 [i_1] = ((/* implicit */unsigned char) 2147483638);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_8))));
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (short)23732)) : (((/* implicit */int) arr_9 [i_1] [(signed char)4] [i_1]))));
    }
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */short) ((signed char) arr_10 [(short)20]));
        /* LoopSeq 4 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
            {
                arr_32 [i_8] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)31618))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-31608)) || (((/* implicit */_Bool) (unsigned char)136)))))));
                var_18 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)2)))));
            }
            for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) /* same iter space */
            {
                arr_36 [i_6] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)213))) ? (((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) arr_7 [i_9])))) : ((-(((/* implicit */int) arr_7 [i_9]))))));
                var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_9] [i_9] [i_7] [i_6] [(short)14])), (arr_29 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) ((unsigned char) arr_31 [i_6] [i_6] [i_6]))) : (min((var_5), (((/* implicit */int) arr_4 [i_9]))))))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    arr_39 [i_9] [i_9] [i_7] [i_9] = ((/* implicit */signed char) (short)0);
                    /* LoopSeq 2 */
                    for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        arr_43 [i_6] [i_6] [i_6] [i_9] [i_9] = ((/* implicit */unsigned int) min((-8152467132443437145LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2710413023U)))))));
                        arr_44 [i_9] [i_9] [i_10] [i_10] = ((/* implicit */long long int) (-(max((((/* implicit */int) arr_33 [(short)8] [i_7] [i_9] [i_9])), (((((/* implicit */int) var_13)) % (((/* implicit */int) (unsigned short)65535))))))));
                        arr_45 [i_9] [i_6] [i_7] [i_9] [i_10] [i_11] = ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)89)) | (((/* implicit */int) arr_34 [i_10] [i_9] [i_10 - 1])))))) | (((/* implicit */int) arr_34 [i_11] [i_9] [i_6])));
                        arr_46 [i_6] [i_7] [i_9] [i_9] [i_11] [i_10] [i_7] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 0LL)) ? (((1766712243) | (((((/* implicit */int) (short)-21546)) - (((/* implicit */int) (unsigned char)136)))))) : (((((((/* implicit */_Bool) arr_24 [i_6])) || (((/* implicit */_Bool) (short)0)))) ? ((+(((/* implicit */int) arr_31 [i_6] [i_6] [i_6])))) : (((/* implicit */int) arr_0 [i_7]))))));
                        arr_47 [i_9] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_9 + 1])) ? (((/* implicit */int) arr_27 [i_10 - 1] [i_9 + 1])) : (((/* implicit */int) (unsigned char)117)))) > (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_27 [i_10 - 1] [i_9 - 2])) : (((/* implicit */int) (signed char)-32))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_50 [i_6] [i_7] [i_9] [(short)19] [i_6] [i_7] [(signed char)5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5380571868442034367LL))));
                        var_20 = (+(((/* implicit */int) max((((signed char) (unsigned char)5)), (arr_48 [i_9 + 1] [i_10 - 1] [(unsigned short)2] [i_9] [i_12])))));
                        var_21 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)16352)))), (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) arr_27 [i_10] [i_6])) : (((/* implicit */int) arr_27 [i_12] [i_6]))))));
                    }
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)223)) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned char) arr_31 [i_6] [i_9 + 1] [i_10 - 1]))))))));
                }
                arr_51 [i_9] [i_7] [(unsigned char)4] [i_9] = (unsigned char)127;
            }
            for (unsigned char i_13 = 2; i_13 < 21; i_13 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(-2147483647)))), (((unsigned long long int) arr_9 [(unsigned short)21] [i_13] [i_6]))));
                /* LoopSeq 2 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    arr_57 [i_7] [i_13] [i_13] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) 286843024051202437LL)) ? (((/* implicit */int) (signed char)18)) : (2147483647))) > (((/* implicit */int) (short)30961)))), (((_Bool) (unsigned short)20777))));
                    arr_58 [i_14] [i_13] [i_13] [i_13] [i_6] = ((/* implicit */int) (-(max((max((12724143148132543158ULL), (((/* implicit */unsigned long long int) arr_40 [(short)10])))), (((/* implicit */unsigned long long int) arr_31 [i_7] [i_13] [i_13 - 1]))))));
                }
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                {
                    arr_62 [i_13] = ((((/* implicit */_Bool) arr_49 [i_13 - 2] [i_13 - 2] [i_13] [i_13] [i_13 - 2] [i_13])) ? (arr_29 [i_13 - 1] [i_13] [i_13]) : (arr_29 [i_13 - 2] [13LL] [i_13]));
                    /* LoopSeq 1 */
                    for (short i_16 = 2; i_16 < 21; i_16 += 1) 
                    {
                        arr_66 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [12LL] [i_13 + 1])) ? (((/* implicit */int) arr_22 [i_13] [i_13 - 2])) : (((/* implicit */int) arr_22 [i_13] [i_13 - 2]))));
                        arr_67 [i_6] [i_13] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_13 + 1] [i_16] [i_16 - 2] [i_13])) ? (((/* implicit */int) arr_33 [i_13 - 1] [i_13] [i_16 + 1] [i_13])) : (((/* implicit */int) arr_33 [i_13 - 1] [i_13 - 1] [i_16 - 2] [i_13]))));
                    }
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_13] [i_13 - 1] [i_7] [i_13 - 1] [i_13 - 1] [(_Bool)1] [i_13 - 1])) ? (((/* implicit */int) arr_49 [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_7])) : ((-(((/* implicit */int) (short)24548))))));
                }
                arr_68 [i_6] [i_13] [i_6] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_6 [i_13])))), ((~(((/* implicit */int) arr_6 [i_13]))))));
                arr_69 [i_13] [i_7] = ((/* implicit */short) (~(((((/* implicit */int) arr_63 [i_6] [(short)12] [i_6] [i_13] [6U] [i_6])) | ((~(((/* implicit */int) (short)31585))))))));
            }
            arr_70 [i_6] [(unsigned char)18] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-89))))))) & (((-4910666693735081075LL) | (((/* implicit */long long int) ((((/* implicit */int) (short)-21543)) | (((/* implicit */int) (unsigned short)47117)))))))));
            arr_71 [i_6] [i_7] [(signed char)9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)28916)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_7]))) : (arr_15 [i_6] [i_7] [0] [i_6] [i_7] [i_7]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_6]))))))))));
            arr_72 [i_6] = ((/* implicit */unsigned char) (short)-16578);
            var_25 = ((/* implicit */short) arr_15 [i_7] [i_7] [i_7] [i_6] [i_7] [i_6]);
        }
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            arr_75 [i_17] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [13] [i_6] [i_17] [i_17]))) : (arr_56 [i_17] [18ULL] [i_6] [i_17] [i_17])))) ? (((/* implicit */int) (short)-24550)) : (((((/* implicit */int) arr_0 [i_17])) + (((/* implicit */int) (signed char)120)))))) / (((/* implicit */int) (unsigned short)17144))));
            var_26 = ((/* implicit */unsigned short) (~(min(((+(((/* implicit */int) arr_48 [i_6] [(unsigned char)18] [i_6] [i_17] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_17] [i_17] [i_6])))))))));
        }
        for (signed char i_18 = 4; i_18 < 19; i_18 += 2) 
        {
            arr_79 [i_18 + 1] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((((((/* implicit */int) arr_48 [(unsigned short)8] [i_18] [(unsigned short)8] [i_18] [i_18])) + (2147483647))) << (((((/* implicit */int) (signed char)5)) - (5))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) - (((/* implicit */int) (short)21546))))) ? (4091124162U) : (((/* implicit */unsigned int) 1209239042))))));
            var_27 = ((/* implicit */unsigned short) (unsigned char)255);
            arr_80 [13] = ((/* implicit */unsigned char) (~(max(((~(((/* implicit */int) arr_9 [i_6] [i_18] [i_18])))), (((/* implicit */int) min((arr_49 [i_6] [i_6] [i_6] [i_6] [(short)18] [i_18]), (((/* implicit */short) (unsigned char)119)))))))));
        }
        /* vectorizable */
        for (short i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            arr_83 [i_6] = arr_54 [(short)6] [i_19] [i_19];
            arr_84 [i_6] = ((/* implicit */unsigned short) arr_76 [i_19]);
            arr_85 [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)28073)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_6] [i_6] [4LL])))))));
        }
    }
    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (signed char i_20 = 4; i_20 < 24; i_20 += 3) 
    {
        for (signed char i_21 = 1; i_21 < 24; i_21 += 1) 
        {
            for (short i_22 = 0; i_22 < 25; i_22 += 2) 
            {
                {
                    arr_93 [11] [i_20] [i_20] [i_20 - 2] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-24518)), (arr_90 [i_20])))) ? ((~(18446744073709551603ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_86 [i_20] [i_20])) | (((/* implicit */int) (_Bool)0)))))))));
                    arr_94 [i_20] [i_20] = ((short) min((arr_87 [i_20]), (((/* implicit */unsigned int) (unsigned short)438))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_23 = 4; i_23 < 19; i_23 += 2) 
    {
        var_29 += max((((((/* implicit */_Bool) (short)12518)) ? (((/* implicit */int) min(((signed char)-121), ((signed char)14)))) : ((+(((/* implicit */int) arr_7 [i_23])))))), (((/* implicit */int) (signed char)-125)));
        arr_99 [i_23] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)24529)) && (((/* implicit */_Bool) var_12))))), (((long long int) var_8)))))));
        arr_100 [i_23] [i_23] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_23])) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) arr_9 [i_23 + 2] [i_23] [i_23 - 4]))))), (((unsigned int) arr_61 [i_23] [(unsigned short)16] [i_23])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_96 [i_23]) ? (((/* implicit */int) (short)21543)) : (((/* implicit */int) (short)22022))))) ? (((/* implicit */int) ((1523842087) != (((/* implicit */int) arr_4 [i_23]))))) : (((/* implicit */int) ((unsigned char) arr_82 [i_23]))))))));
    }
}
