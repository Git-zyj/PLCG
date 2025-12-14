/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147431
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
    var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (609619942U)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_12 *= ((/* implicit */int) ((31550399) != (max((((/* implicit */int) (_Bool)1)), (-31550411)))));
        var_13 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) -7LL)) ^ (8861622734302956424ULL))) << (((min((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) 31550411)) ? (1350042945U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))) - (1350042909U)))));
        var_14 = ((/* implicit */int) max((var_14), (arr_1 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_15 &= ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) % (var_7));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) 2619275740U)))), (((((/* implicit */_Bool) var_4)) || ((_Bool)1))))))) * (min((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) 31550399)), (0U))))))))));
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) != (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (0LL))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_10 [i_4] [i_4] |= ((/* implicit */_Bool) ((((arr_4 [i_3 + 1] [i_3 + 1]) & (var_8))) << (((((/* implicit */_Bool) 1705460295)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_2] [i_3]))))));
                    /* LoopSeq 4 */
                    for (int i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_2] [(unsigned char)15] [i_4] [i_4])) >> (((((((/* implicit */_Bool) var_5)) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (7842278043704852230ULL)))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_3))))));
                            var_20 += ((/* implicit */unsigned long long int) ((arr_9 [i_3 + 2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        }
                        for (short i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (316987987U)))));
                            arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (signed char)60);
                            arr_21 [(signed char)16] [i_7] [i_4] [i_4] [i_4] [(signed char)16] [i_2] &= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (4294967295U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_22 = ((/* implicit */unsigned int) ((_Bool) ((_Bool) var_2)));
                        }
                        var_23 &= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_5))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    }
                    for (unsigned short i_8 = 4; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_24 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((arr_25 [i_2] [i_2] [i_3] [i_8] [i_2]) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)29))))) % (arr_9 [i_4 - 4] [i_4])));
                        var_25 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_3 + 2] [i_3 + 2]));
                        var_26 = ((/* implicit */_Bool) (~(((var_1) ^ (((/* implicit */unsigned long long int) arr_7 [i_8] [i_2]))))));
                        var_27 = ((/* implicit */short) (signed char)-57);
                    }
                    for (unsigned short i_9 = 4; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                        var_29 = ((signed char) arr_5 [i_2]);
                    }
                    for (unsigned short i_10 = 4; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        arr_34 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1705460312)) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)))));
                        var_30 = ((/* implicit */short) (+(-16LL)));
                        arr_35 [i_3] [i_3 + 2] [i_3] [i_3] [i_3 + 3] = ((/* implicit */unsigned short) 6653944198836893660ULL);
                    }
                }
            } 
        } 
        arr_36 [i_2] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_2)))));
        var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59541)) * (((/* implicit */int) (unsigned short)511)))))));
        /* LoopSeq 1 */
        for (int i_11 = 1; i_11 < 21; i_11 += 4) 
        {
            arr_41 [i_11] [i_2] = ((/* implicit */unsigned int) ((((var_0) % (((/* implicit */unsigned long long int) 1705460290)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
            var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)-47))) ? (((6653944198836893674ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (var_7)));
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_33 = ((/* implicit */int) ((3977979307U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11 + 1])))));
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_34 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_2] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) var_9))));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1705460270)) ? (((/* implicit */int) (signed char)56)) : (-1705460296))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_36 += ((/* implicit */short) ((((((/* implicit */unsigned int) var_4)) ^ (arr_3 [i_2] [i_2]))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 3 */
                    for (int i_15 = 3; i_15 < 21; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) min((var_37), (((((/* implicit */_Bool) 1675691555U)) && (((/* implicit */_Bool) ((unsigned int) var_3)))))));
                        var_38 = ((((/* implicit */_Bool) arr_13 [i_14] [i_15] [i_2] [i_14])) ? (((var_1) % (((/* implicit */unsigned long long int) 3977979316U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1354))));
                        var_39 = ((/* implicit */unsigned char) ((var_4) | (((/* implicit */int) (signed char)41))));
                        var_40 &= ((/* implicit */unsigned char) 6653944198836893660ULL);
                        arr_53 [i_2] [i_11 - 1] [i_12] [i_14] [i_15] = ((((((/* implicit */_Bool) (unsigned short)62436)) ? (7794533070442995141ULL) : (((/* implicit */unsigned long long int) 3977979316U)))) ^ (((1520718548453271568ULL) ^ (18446744073709551615ULL))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        arr_56 [i_2] [(unsigned char)1] [i_12] [i_14] [i_16] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 560471974)) ^ (var_1)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_6)) << (((var_0) - (9568347568130505482ULL)))))));
                        arr_57 [i_2] [i_2] [i_2] [i_2] [9ULL] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1705460296)) ? (((/* implicit */int) var_10)) : (arr_38 [i_11 + 1] [i_11 + 1])));
                    }
                    for (unsigned int i_17 = 4; i_17 < 21; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) arr_40 [i_14] [i_11 + 1] [i_2]);
                        var_42 -= ((/* implicit */unsigned short) ((arr_45 [i_17 + 2] [i_17 + 2] [i_17 - 2] [i_11 - 1] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_11 + 1] [i_11 + 2] [i_14] [i_2] [i_14])))));
                    }
                    var_43 = ((/* implicit */unsigned int) 0ULL);
                }
                var_44 += ((var_7) << (((12589133465506604831ULL) - (12589133465506604819ULL))));
                var_45 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_11 + 2] [i_11 + 2])) / (var_7)));
            }
            for (short i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                arr_65 [i_2] [i_11] [i_18] [i_11] = ((/* implicit */unsigned char) ((var_2) ? (arr_31 [i_2] [i_18] [i_11 - 1] [i_18]) : (((/* implicit */long long int) (-(arr_17 [i_18] [i_11] [i_11] [i_11] [i_18]))))));
                /* LoopSeq 3 */
                for (unsigned short i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */_Bool) 8547432142157591761ULL);
                    var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) 2097151))));
                    var_48 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))));
                    var_49 = ((/* implicit */int) (unsigned short)16);
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 724668613)) != (var_8)))) != (arr_60 [i_19])));
                }
                for (unsigned short i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
                {
                    var_51 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [14U] [i_18] [i_18] [i_18] [i_18] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (var_4))) << (((((/* implicit */int) arr_16 [i_2] [i_2] [i_18] [i_20] [i_20])) - (65)))));
                    var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2])) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_23 [i_2])) ^ (((/* implicit */int) (signed char)29))))));
                    var_53 = ((/* implicit */long long int) var_8);
                    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_2] [i_20])) / (var_5)))) ? (9124947170455393026ULL) : (18446744073709551615ULL)));
                }
                for (short i_21 = 3; i_21 < 20; i_21 += 4) 
                {
                    var_55 = ((/* implicit */unsigned long long int) ((unsigned int) 6314709820189269359ULL));
                    arr_73 [i_18] [i_18] [i_11] [i_18] = ((/* implicit */unsigned int) (+(arr_60 [i_11 - 1])));
                    arr_74 [i_2] [i_18] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) 0U)) % (4390025871756533275LL))) < (((/* implicit */long long int) 3977979308U))));
                    arr_75 [i_18] [i_18] [i_18] [i_2] [i_18] [i_21 + 2] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) var_9)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 0; i_22 < 23; i_22 += 2) /* same iter space */
                    {
                        arr_79 [i_2] [i_11] [i_18] [i_21] [1] [i_22] = ((/* implicit */int) arr_39 [i_18] [i_22]);
                        var_56 = ((/* implicit */long long int) var_10);
                        arr_80 [i_18] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3977979316U)) ^ (3484024104138849639ULL))))));
                        var_57 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_22] [i_21] [i_11] [i_11])) < (((/* implicit */int) (unsigned short)20))))) : ((-(((/* implicit */int) var_6))))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 23; i_23 += 2) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) ((arr_15 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 2] [i_2] [i_21 + 2]) ^ (arr_15 [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11] [i_2] [i_21 - 1]))))));
                        arr_84 [(unsigned short)1] [i_11] [(unsigned short)1] [i_18] [i_23] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) & (var_7)));
                        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_11 + 2])) ? (((((/* implicit */unsigned long long int) arr_32 [i_2] [i_11 + 1] [i_21 + 2] [(_Bool)1])) & (22ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_11] [i_11]))));
                        var_60 = ((/* implicit */unsigned short) var_7);
                    }
                }
                var_61 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_47 [i_2] [i_11] [i_11] [i_11] [i_18] [i_18]))) | (((/* implicit */int) arr_52 [i_11] [i_18] [i_11] [i_11 - 1] [i_2] [i_2]))));
            }
            for (int i_24 = 1; i_24 < 21; i_24 += 4) 
            {
                arr_88 [i_24] = ((/* implicit */_Bool) (signed char)127);
                var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (((4405048053737492075ULL) % (((/* implicit */unsigned long long int) 3760935373U)))) : (((/* implicit */unsigned long long int) 3977979308U))));
                var_63 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) | (var_5)));
            }
            /* LoopSeq 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_64 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)80)) % (((((/* implicit */_Bool) -2123821932)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)5060))))));
                var_65 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_11] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_25] [i_2] [i_2] [i_2] [i_2])))));
                /* LoopNest 2 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (unsigned char i_27 = 2; i_27 < 19; i_27 += 4) 
                    {
                        {
                            var_66 |= ((/* implicit */long long int) ((((/* implicit */int) (short)5060)) / (((/* implicit */int) (unsigned char)114))));
                            var_67 = ((/* implicit */unsigned int) min((var_67), (((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_11 - 1] [i_11 - 1] [i_11 + 2])) & (((/* implicit */int) arr_81 [i_11 + 2] [i_2])))))));
                            arr_96 [3ULL] [3ULL] [i_25] [i_26] [i_27 - 2] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_11] [i_25] [i_26] [12]))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2]))) ^ (arr_66 [i_25] [i_11]))));
                            var_68 = ((/* implicit */unsigned int) ((316988015U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42575)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_28 = 1; i_28 < 22; i_28 += 1) 
                {
                    var_69 = ((/* implicit */unsigned short) max((var_69), (((/* implicit */unsigned short) var_7))));
                    var_70 = 2084111580427253762ULL;
                    var_71 |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-74)) && (((/* implicit */_Bool) (signed char)-104))))) / (((/* implicit */int) (unsigned char)193))));
                    arr_99 [i_28 - 1] = ((/* implicit */int) ((unsigned long long int) 7794533070442995128ULL));
                    var_72 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (arr_31 [i_2] [i_2] [i_28] [i_28])));
                }
                for (unsigned long long int i_29 = 2; i_29 < 22; i_29 += 4) /* same iter space */
                {
                    var_73 ^= ((/* implicit */_Bool) (-(3460134088U)));
                    arr_102 [i_2] [i_2] [i_11] [i_25] [i_2] [(short)9] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_29]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)5414)) != (((/* implicit */int) var_9))))))));
                }
                for (unsigned long long int i_30 = 2; i_30 < 22; i_30 += 4) /* same iter space */
                {
                    arr_105 [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_11] [i_2] [(_Bool)1])) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) arr_37 [i_2])) : (((((/* implicit */unsigned long long int) 3977979308U)) ^ (var_8)))));
                    var_74 = ((/* implicit */unsigned short) ((((arr_91 [i_2] [i_11] [i_25] [i_25] [i_25]) ? (arr_103 [18ULL]) : (18446744073709551595ULL))) ^ (((/* implicit */unsigned long long int) arr_24 [i_11] [i_30 - 1]))));
                    var_75 = ((((/* implicit */unsigned long long int) arr_11 [i_30 - 1] [i_30 + 1] [i_30 - 2] [i_30 - 1] [i_2] [i_30 - 2])) / (var_8));
                }
                /* LoopNest 2 */
                for (int i_31 = 2; i_31 < 22; i_31 += 2) 
                {
                    for (signed char i_32 = 2; i_32 < 20; i_32 += 4) 
                    {
                        {
                            var_76 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_93 [i_11 - 1])) : (((/* implicit */int) (_Bool)1))));
                            arr_111 [i_32] [i_31] [i_25] [i_11] [i_2] = ((/* implicit */long long int) 1152920405095219200ULL);
                            arr_112 [i_32 + 1] [i_31] [i_11] &= ((/* implicit */int) ((((/* implicit */_Bool) ((6924491945016612988ULL) >> (((/* implicit */int) var_2))))) ? (((2103970192530498535ULL) & (18446744073709551595ULL))) : (((/* implicit */unsigned long long int) ((1228590791) ^ (((/* implicit */int) (signed char)108)))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_33 = 0; i_33 < 23; i_33 += 1) 
            {
                var_77 = ((/* implicit */signed char) max((var_77), ((signed char)-111)));
                var_78 &= ((/* implicit */short) arr_40 [i_2] [i_2] [i_33]);
                var_79 = ((/* implicit */unsigned int) max((var_79), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_17 [i_2] [i_11] [i_11 - 1] [i_11] [i_2])) | (4095ULL)))) && (arr_86 [i_2] [i_33] [i_11 + 2] [i_2]))))));
            }
        }
        var_80 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5060))) / (var_5)));
    }
    var_81 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) -674949665)), (3299630685U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((((/* implicit */_Bool) -1618715598)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 3934870395U)) : (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) != (max((((/* implicit */unsigned long long int) -9223372036854775802LL)), (var_7)))))))));
    var_82 = max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)5399)) << (((2147483647) - (2147483632)))))), (((((/* implicit */_Bool) 3935880958U)) ? (var_5) : (15291173111103637499ULL))))));
    var_83 *= ((/* implicit */short) var_6);
}
