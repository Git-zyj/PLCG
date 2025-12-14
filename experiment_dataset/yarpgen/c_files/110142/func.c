/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110142
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) 1365685924318136600ULL);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) (~(-988685027)))) < (var_9)))) > (max((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_4)))), ((+(var_1)))))));
        var_15 = ((/* implicit */signed char) max((17081058149391415023ULL), (((/* implicit */unsigned long long int) (unsigned char)41))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (short)10145);
                    arr_9 [i_2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) var_6)), (4973122691201160720ULL))))), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10136))) : (var_9))), (((/* implicit */unsigned int) max((var_10), (var_8))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-10147)) ? (var_12) : (var_12)));
                        var_17 = ((/* implicit */signed char) ((3794627211U) % (var_9)));
                        arr_13 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) var_5);
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            arr_19 [i_0] [(unsigned short)9] [(unsigned short)9] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-10146)) && (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) / (var_3))))));
                            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */int) (short)10146)) <= (var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-7876))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_6] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_5))))))));
                            var_19 ^= ((/* implicit */unsigned int) ((_Bool) var_7));
                            var_20 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) max((var_4), ((unsigned char)189)))) ? (var_10) : (((/* implicit */int) (short)10136)))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) ((-2338459470918644985LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))));
                            arr_26 [i_7] [i_1] [4ULL] [i_1] [14LL] &= ((/* implicit */int) ((((_Bool) var_4)) && (((/* implicit */_Bool) var_8))));
                            var_22 = ((((/* implicit */_Bool) (short)7876)) ? (((/* implicit */int) (short)7876)) : (((/* implicit */int) (short)7876)));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)));
                            var_24 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)10147))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-10145))))) ? (4290738973U) : (var_12)))) != (((max((((/* implicit */unsigned long long int) var_0)), (var_3))) >> (((min((((/* implicit */unsigned long long int) (unsigned short)46855)), (1365685924318136612ULL))) - (46827ULL))))))))));
                    }
                    for (int i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        arr_29 [16] [i_2] [i_8] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10145)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)10136))));
                        var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -2010551805)))))), (((/* implicit */unsigned int) var_1))));
                        var_27 -= ((/* implicit */int) ((unsigned short) ((var_10) << (((max((var_10), (((/* implicit */int) var_11)))) - (987458432))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 3; i_9 < 17; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */int) var_5);
                        var_29 = ((/* implicit */int) 35184372084736ULL);
                        var_30 &= ((/* implicit */unsigned int) ((var_1) == (((int) (unsigned char)51))));
                        var_31 *= ((/* implicit */unsigned long long int) var_13);
                    }
                }
            } 
        } 
    }
    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        var_32 = ((/* implicit */short) 26);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_11 = 2; i_11 < 14; i_11 += 1) 
        {
            arr_40 [i_11] = ((/* implicit */long long int) var_4);
            var_33 = ((/* implicit */unsigned long long int) (~(var_0)));
        }
        for (unsigned char i_12 = 1; i_12 < 14; i_12 += 2) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35475)))))) ? (((/* implicit */int) var_11)) : (2010551810)));
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                arr_46 [14ULL] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (0ULL) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_1)) : (var_0))))))) ? (min((((/* implicit */unsigned long long int) 296560664U)), (var_3))) : (((/* implicit */unsigned long long int) (~(var_6))))));
                arr_47 [i_10] [i_10] [i_13] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) <= (((/* implicit */int) var_4)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)44234)))) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */int) var_4))))))), (((unsigned int) (unsigned short)35475))));
            }
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((2251799813685247ULL), (((1365685924318136600ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20349)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21302))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (0ULL)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-9749)) || (((/* implicit */_Bool) var_6))))), (((unsigned short) 2010551794)))))));
        }
        for (int i_14 = 2; i_14 < 15; i_14 += 4) 
        {
            arr_50 [i_10] [i_10] [i_14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 2010551794)) : (18446744073709551615ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-15376))))) : (((long long int) (unsigned short)18681))));
            var_36 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (short)19805)) - (19782))))), ((+(((/* implicit */int) var_11)))))))));
            var_37 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8402147339621045928LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9908))) : (var_0)))) || (((/* implicit */_Bool) (unsigned short)44234)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_12)) : (-6LL)))) ? (((/* implicit */unsigned long long int) var_0)) : (var_3)))));
            /* LoopSeq 3 */
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                var_38 -= 1329914519U;
                arr_53 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3086409869U) << (((((/* implicit */int) (unsigned short)44234)) - (44220)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((18446744073709551614ULL) << (0ULL))), (((/* implicit */unsigned long long int) 2965052772U))))));
                arr_54 [i_10] [i_14] [i_14 - 2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) == (var_7))))) : (min((((/* implicit */long long int) var_8)), (var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46855))) : (min((((/* implicit */unsigned int) var_10)), (min((((/* implicit */unsigned int) var_8)), (var_12)))))));
            }
            for (unsigned long long int i_16 = 3; i_16 < 14; i_16 += 1) 
            {
                var_39 *= ((/* implicit */long long int) min((((/* implicit */int) min((max(((unsigned short)18680), (var_11))), ((unsigned short)65535)))), (min((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_5))))), (var_10)))));
                arr_58 [i_16] = ((/* implicit */signed char) var_9);
            }
            for (long long int i_17 = 2; i_17 < 12; i_17 += 1) 
            {
                arr_61 [i_17] [i_14] [i_17] [i_17 - 1] = ((/* implicit */unsigned int) var_2);
                arr_62 [i_10] &= max((8342904642183899631LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 2147483648U)) : (var_6))) < (var_6)))));
            }
            var_40 = ((/* implicit */short) max((min((((/* implicit */unsigned int) ((var_9) == (((/* implicit */unsigned int) (-2147483647 - 1)))))), (((((/* implicit */unsigned int) -107524878)) ^ (1329914527U))))), (((/* implicit */unsigned int) ((10451441072876414299ULL) == (12ULL))))));
        }
        for (int i_18 = 3; i_18 < 14; i_18 += 2) 
        {
            var_41 = ((/* implicit */long long int) var_3);
            var_42 ^= ((/* implicit */unsigned int) var_2);
            arr_65 [i_18 - 1] [0U] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (2965052751U) : (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */long long int) var_8)) ^ (var_7)))));
            arr_66 [i_10] [i_18] = ((((/* implicit */_Bool) ((18446744073709551610ULL) % (max((10778144428304676012ULL), (10451441072876414299ULL)))))) ? (((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (var_13)))) ? (((unsigned int) var_7)) : (var_9)))));
        }
    }
    for (unsigned long long int i_19 = 4; i_19 < 14; i_19 += 2) 
    {
        arr_70 [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) * (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_13)) : (var_9))), (((/* implicit */unsigned int) var_13))))));
        /* LoopNest 2 */
        for (short i_20 = 2; i_20 < 11; i_20 += 4) 
        {
            for (unsigned short i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                {
                    arr_76 [i_19] [(short)10] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12845711685939021299ULL)) ? (4503716280395696469LL) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned short)54962))))), (((int) 1398212272U)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_22 = 4; i_22 < 13; i_22 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned char) var_6);
                        arr_81 [i_19] [i_20] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)145))))) ? ((((_Bool)1) ? (-4503716280395696469LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37571))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    }
                    for (unsigned short i_23 = 4; i_23 < 13; i_23 += 4) /* same iter space */
                    {
                        arr_85 [i_19] [i_19] [i_19] [i_19] [i_23] [i_23 + 1] = ((/* implicit */unsigned short) min((var_8), (((/* implicit */int) var_11))));
                        var_44 &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46690)) >> (((var_9) - (1671108151U)))));
                        arr_86 [i_20 + 3] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) var_10))))) & (107524890)))) / ((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */long long int) ((unsigned int) var_10))) : (1019631558965289407LL)))));
                        var_45 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (unsigned short)0)) : (16775168)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) var_2))))) : (var_9))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    for (int i_24 = 0; i_24 < 15; i_24 += 1) 
                    {
                        arr_90 [i_19 - 2] [i_20] [i_24] [i_20 + 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) 1438696647))), (max((((/* implicit */unsigned int) var_11)), (var_9)))))), (10032976823670118396ULL)));
                        arr_91 [i_24] [i_21] [i_21] [i_19 - 4] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_13)), (max((max((var_7), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_4)))))))));
                    }
                    var_46 = ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) -5LL))), (var_11))))) : (var_7));
                    var_47 = ((/* implicit */unsigned long long int) var_13);
                }
            } 
        } 
    }
    var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (max((min((16LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) min((107524890), (((/* implicit */int) var_2))))))) : (-16LL)));
}
