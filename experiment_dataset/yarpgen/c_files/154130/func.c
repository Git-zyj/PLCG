/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154130
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (0) : (((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)56463)))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) <= (((/* implicit */int) ((unsigned short) (unsigned char)75)))))) != (((int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)244)) : (-2147483635))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            var_13 = ((/* implicit */long long int) 0ULL);
            arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108848)) ? (14953635657770420938ULL) : (((/* implicit */unsigned long long int) 67108848))))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((1782342692) + (((/* implicit */int) (_Bool)0)))))));
            arr_14 [i_2] = ((/* implicit */_Bool) arr_3 [(unsigned char)1] [i_2]);
            var_14 = ((arr_8 [i_3 - 1] [i_2]) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_2 - 2])) : (((/* implicit */int) arr_1 [i_2])));
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) var_12);
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) (_Bool)0);
                            var_16 &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_7 + 1] [i_5])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)180)) - (176)))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((8870184195878717437ULL) / (((/* implicit */unsigned long long int) -8322599117633964645LL))))));
                        }
                        var_18 -= ((/* implicit */_Bool) ((var_0) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [(short)8] [i_4] [i_5 + 1])) : (var_5))) : (((/* implicit */int) (_Bool)0))));
                        arr_28 [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) (short)9694)) ? (arr_18 [1U] [i_5 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            arr_29 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 3])) ? (((((/* implicit */int) var_0)) ^ ((-2147483647 - 1)))) : (((/* implicit */int) (unsigned char)231))));
            var_19 &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (16700756093538700043ULL))) >> (0)));
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)75)))) : (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [(signed char)1] [i_8] [i_8]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) 917711142)))), ((_Bool)1))))) : (var_8)));
                    arr_34 [i_2] [i_2] [i_9] = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) >> (((arr_31 [i_2 - 2]) - (3649525611U)))))));
                }
            } 
        } 
        var_21 = ((((/* implicit */_Bool) min(((unsigned char)114), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((arr_2 [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 2]))))));
        /* LoopSeq 1 */
        for (unsigned char i_10 = 3; i_10 < 8; i_10 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                arr_40 [i_2] = ((/* implicit */unsigned int) ((arr_2 [i_2]) | (((/* implicit */unsigned long long int) 2261152027U))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_18 [i_11] [i_10] [i_2])) : (17592186044160ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [(_Bool)1])))))) : (2080708709U)));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_23 -= ((/* implicit */unsigned short) arr_17 [i_2] [i_2]);
                arr_43 [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)142)))))))) ? (((((/* implicit */_Bool) 1745987980170851577ULL)) ? (max((((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [10ULL] [i_2] [i_2])), (arr_35 [i_2] [i_10] [i_12 - 1]))) : (((((/* implicit */_Bool) 1063415415U)) ? (arr_36 [i_2] [i_10] [i_2]) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
            }
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_24 += ((/* implicit */_Bool) ((unsigned short) max(((unsigned short)25539), (((/* implicit */unsigned short) (_Bool)1)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19004)) >> (((((/* implicit */int) (unsigned short)22190)) - (22160)))));
                        arr_49 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43358)) ? (((/* implicit */int) (short)-18994)) : (((/* implicit */int) (short)18769))));
                    }
                } 
            } 
            var_26 = min((((/* implicit */unsigned int) (short)7)), (2080708709U));
            arr_50 [i_2] [(short)6] [i_10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((3034686262459748353ULL), (arr_42 [i_10 - 3] [i_10 - 3] [i_10 + 3])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)7837))));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            arr_54 [i_2 - 3] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_47 [i_15] [i_15] [i_2 - 2] [i_2 + 1])) ? (arr_47 [i_15] [i_15] [i_2 - 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) -4036368965436924283LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14737)))))))));
                var_28 = ((/* implicit */unsigned long long int) var_6);
            }
            /* vectorizable */
            for (short i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                arr_60 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2065111382U)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (short)-917))));
                var_29 ^= ((/* implicit */long long int) arr_42 [(unsigned short)5] [i_15] [i_17]);
            }
            /* vectorizable */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_65 [2U] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 3U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_30 ^= ((/* implicit */int) ((long long int) (unsigned short)2846));
                arr_66 [0] [i_15] [i_18] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_26 [i_18] [i_15] [i_15] [i_2] [i_2]) ? (1192368442U) : (2229855914U)))) ? (((int) 388260074U)) : (((((/* implicit */int) var_10)) / (var_5)))));
            }
            for (unsigned int i_19 = 4; i_19 < 11; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_76 [(signed char)10] [i_2] [i_19] [i_20] [i_21] [i_2 + 2] [(signed char)6] = ((/* implicit */unsigned short) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_2 - 3] [i_2 - 3])) > (var_3)))) : (min((arr_11 [i_2 - 2] [i_2 - 1]), (arr_11 [i_2 - 3] [i_2 - 1])))));
                            arr_77 [i_21] [i_2] [i_2] [(_Bool)1] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_0 [i_21]);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_22 = 4; i_22 < 11; i_22 += 3) 
                {
                    arr_81 [i_2 + 1] [i_15] [i_15] [i_15] [i_19] [i_15] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_15])) ? (arr_2 [i_15]) : (arr_2 [i_15])));
                    arr_82 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 761678184)) ? (arr_75 [i_22 + 1] [i_22 - 2] [i_19 - 1] [i_19 - 2] [i_19 - 4] [i_2 + 1] [i_2 - 3]) : (arr_75 [i_22 - 2] [i_22 + 1] [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_2 - 2] [i_2 + 1])));
                    var_31 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) % (var_6)));
                }
                /* vectorizable */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_87 [i_23] [i_2] [i_2] [i_2 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_48 [i_2 - 2] [i_15] [i_19] [i_19 - 1]))));
                    arr_88 [i_15] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3102598839U))));
                }
                for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (+(-4036368965436924276LL)))) ? (min((arr_73 [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_19 - 4] [i_2 - 1]), (arr_73 [i_2] [i_2 + 2] [i_19] [i_24] [i_19 - 3] [i_19 - 3]))) : (min((arr_73 [i_24] [i_2 - 1] [i_19] [2U] [i_19 - 1] [i_24]), (arr_73 [i_2] [i_2 - 2] [i_19] [i_24] [i_19 - 2] [i_15]))))))));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)202))))))) ? (arr_67 [i_2] [i_19] [(unsigned short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)127), ((signed char)-121))))))))));
                    arr_92 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((((-(var_8))) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) << (((max((((/* implicit */unsigned long long int) 438562889)), ((+(4608388209297877078ULL))))) - (4608388209297877071ULL)))));
                    arr_93 [i_2 + 1] [i_15] [i_2] [(unsigned short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_0))) >> (((var_8) - (2530850716U)))))) ? ((+(min((arr_80 [i_2] [i_15] [i_19] [i_24] [i_24] [1]), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1008)))));
                }
                for (unsigned int i_25 = 2; i_25 < 10; i_25 += 2) 
                {
                    arr_96 [i_19] [i_2] [i_19] [i_25 + 1] [i_2] [10U] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_34 += ((/* implicit */long long int) var_1);
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_2 + 2] [3ULL] [i_15] [i_19 - 2] [i_25 - 1])) ? (((((/* implicit */_Bool) -999944286)) ? (arr_74 [i_15] [i_15] [i_19 + 1] [i_2] [i_19 - 4]) : (arr_74 [i_2] [i_2] [i_15] [i_19 - 1] [i_25]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_74 [(short)0] [i_19] [(short)0] [i_2 + 2] [i_2 + 2])))));
                }
            }
            /* LoopSeq 4 */
            for (unsigned int i_26 = 2; i_26 < 11; i_26 += 1) 
            {
                arr_99 [i_2 + 2] [i_2] [i_26] [i_26 - 1] = ((/* implicit */int) var_10);
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)23)), (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))), (((unsigned int) (_Bool)1)))))))));
                var_37 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_62 [i_26 - 1] [i_15] [(_Bool)1] [i_15]))))));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_97 [i_2 - 1])) & (((/* implicit */int) (unsigned short)6503))))), (max((var_7), (((/* implicit */unsigned int) arr_25 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 2]))))));
                arr_104 [1ULL] [i_2] [i_27] [i_27] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_12 [i_2] [i_2 - 1]), (arr_12 [i_2] [i_2 - 3]))))));
            }
            for (long long int i_28 = 0; i_28 < 12; i_28 += 3) 
            {
                var_39 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_11))))) : (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) arr_51 [i_2] [i_2]))));
                var_40 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8569054725095143208LL)) ? (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_20 [i_2] [i_15] [i_28]))))) : (((((var_5) + (2147483647))) << (((((/* implicit */int) var_4)) - (224)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_21 [i_15] [i_2 - 1])))) : (((((/* implicit */_Bool) (short)-26102)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                arr_107 [i_2] [i_15] &= max((max((arr_67 [i_2 + 2] [i_2 - 3] [i_2 + 1]), (1192368442U))), (arr_67 [i_2 + 2] [i_2 - 1] [i_2 + 2]));
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 12; i_29 += 2) 
                {
                    for (long long int i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        {
                            var_41 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (unsigned char)12))));
                            arr_113 [i_2] [i_29] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(-312552253)))) : (max((((/* implicit */unsigned long long int) ((short) 3102598872U))), (((((/* implicit */_Bool) arr_36 [i_2] [i_28] [i_28])) ? (4191821118581080825ULL) : (((/* implicit */unsigned long long int) var_2))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                arr_116 [i_2] [i_2] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_2 - 3] [i_2 + 1] [i_31])) : (((/* implicit */int) arr_20 [i_2 - 2] [3ULL] [4ULL]))));
                var_42 = ((/* implicit */unsigned int) 749009439);
                arr_117 [8U] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8)))) ? (arr_108 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_89 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [1LL] [i_15])))));
                var_43 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) (unsigned short)6502)) : (((/* implicit */int) arr_71 [6U] [i_2] [i_15] [i_31] [5U]))));
                arr_118 [i_2] = ((/* implicit */int) 4313611484560294805ULL);
            }
        }
        /* vectorizable */
        for (long long int i_32 = 2; i_32 < 11; i_32 += 3) 
        {
            arr_121 [i_2 - 3] [i_32] [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_122 [i_32] [i_2] [i_32] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_102 [i_2 - 1]))));
        }
        for (unsigned char i_33 = 2; i_33 < 9; i_33 += 2) 
        {
            var_44 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)1008)) ? (3583606067U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((unsigned short) arr_119 [i_33] [i_33] [i_33 - 2]))));
            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_115 [i_2] [(short)1] [i_33 - 2])))))))));
        }
    }
    var_46 &= (((_Bool)1) ? (17965502814474284118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))));
}
