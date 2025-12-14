/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106930
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
        arr_5 [i_0] = ((/* implicit */unsigned char) (+(-7006332108688479227LL)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_6 [i_0])))) + (2147483647))) << (((((/* implicit */int) arr_6 [i_2])) - (112)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 3596747879U)) ? (((((/* implicit */int) (short)-2837)) - (((/* implicit */int) arr_7 [i_3] [i_3] [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (var_10) : (((/* implicit */int) (unsigned char)18)))))))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) (short)-2834))))))))));
                        arr_15 [i_3] [i_2] [i_3] [i_0] [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0]))) : (((var_1) - (var_8)))));
                        var_20 = ((/* implicit */short) var_7);
                    }
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) 1195293789U);
            arr_20 [i_0] [i_0] [i_4] = ((/* implicit */signed char) (unsigned char)20);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_6 [i_0 + 2])) : (((/* implicit */int) var_16)))))));
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            arr_24 [i_0] [i_5] = ((/* implicit */int) arr_14 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_25 [i_0] |= ((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
        }
        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
        {
            arr_28 [i_0 + 2] [i_0] = (short)2830;
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1604429672)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_7]))) : (((((/* implicit */_Bool) arr_10 [i_6])) ? (15407091496127614392ULL) : (((/* implicit */unsigned long long int) arr_33 [i_0]))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_38 [i_8] [i_0] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) arr_35 [i_0 + 1] [i_0 - 4] [i_8]);
                            arr_39 [i_0] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) arr_27 [i_8]);
                            arr_40 [3ULL] [i_6] [3ULL] [i_8] [i_9] = ((/* implicit */signed char) (-(arr_34 [i_0] [i_9] [i_8 - 3] [i_0 + 3] [i_9] [i_8 - 3])));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2834)) || (((/* implicit */_Bool) (short)2836)))))));
                            arr_44 [i_8] [i_6] [i_7] [i_8] [i_10] = ((/* implicit */long long int) ((((arr_42 [i_0] [i_0] [i_6] [i_7] [i_7] [i_10] [i_10]) << (((((/* implicit */int) (short)2851)) - (2844))))) << (((((/* implicit */_Bool) (short)25838)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_0 [i_0 + 3]))))));
                            arr_45 [i_6] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) (unsigned short)20198);
                        }
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_24 = ((/* implicit */short) (-(((/* implicit */int) arr_30 [i_7] [i_7] [i_7] [i_0]))));
                            arr_48 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) arr_27 [i_11])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned char)19)) : ((+(((/* implicit */int) (unsigned char)65))))));
                            arr_49 [i_0] [i_11] [i_8] [i_11] [11U] [i_6] [i_6] = ((unsigned char) 2384218911U);
                            arr_50 [i_0] [i_6] [i_8] [i_8] [i_11] = ((/* implicit */unsigned int) -5223081961887364515LL);
                            arr_51 [i_0 + 3] [i_6] [i_7] [i_8 + 3] [i_8] = ((arr_22 [i_0 + 4]) % (arr_22 [i_0 - 4]));
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 2) 
                        {
                            var_25 -= ((/* implicit */unsigned int) arr_47 [i_0] [i_6] [i_7] [i_8] [(short)13]);
                            arr_56 [i_0] [i_6] [i_8] [i_8] [i_8] [14U] [i_12] = ((/* implicit */short) arr_9 [i_0] [i_7] [i_8] [i_12]);
                            arr_57 [i_0] [i_0] [i_12] [i_0] &= ((/* implicit */unsigned short) arr_42 [i_12] [i_12 + 4] [i_12 + 3] [i_12] [i_12] [i_12 + 3] [i_12]);
                            arr_58 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) (_Bool)1));
                            var_26 = ((/* implicit */unsigned long long int) ((signed char) arr_43 [i_0 + 4] [i_0 + 4] [i_0 + 4]));
                        }
                        var_27 = ((/* implicit */unsigned short) 3389142886964351007LL);
                    }
                } 
            } 
        }
        for (signed char i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_14 = 1; i_14 < 18; i_14 += 1) /* same iter space */
            {
                arr_65 [i_13] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) (short)25838))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 4] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_0 + 4] [i_14 + 1] [i_14]))) : (arr_8 [i_0 + 4] [i_14])));
            }
            for (unsigned short i_15 = 1; i_15 < 18; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    arr_70 [i_15] [i_13] [i_15 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0 + 3] [i_15 - 1] [i_15 - 1] [i_15 - 1])) ? (((/* implicit */int) arr_41 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_15 + 1] [i_15 - 1] [i_15 - 1])) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0 + 1] [i_15 - 1] [i_15 + 1] [i_15 - 1]))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6446))) : (986155696576581103LL)));
                    arr_71 [i_0] [i_15] [i_13] [i_15] [i_16] [(signed char)2] = ((/* implicit */unsigned int) (~(484499479)));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -260334958)) + (var_14)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 2) 
                {
                    for (short i_18 = 1; i_18 < 18; i_18 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_69 [i_0] [i_0] [i_15] [i_17])) ? (arr_64 [i_0] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5))))));
                            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2837)) ? (-3389142886964351027LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))));
                            var_33 += ((/* implicit */long long int) ((arr_60 [i_13] [i_13]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                arr_76 [4ULL] [i_15] = ((/* implicit */unsigned short) arr_43 [i_0 + 3] [i_0 - 1] [i_15 + 2]);
            }
            for (unsigned short i_19 = 1; i_19 < 18; i_19 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (((((~(((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) (short)5649)) - (5649))))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        {
                            var_35 = ((int) (unsigned char)19);
                            arr_83 [i_19] [i_20] [i_19] [i_20] [i_19] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) 2384218924U))) ? (((/* implicit */int) arr_18 [i_0 - 3] [i_0 - 3] [i_19 + 2])) : (((int) arr_75 [i_19] [i_13] [i_19] [i_20] [i_21] [i_13])));
                            arr_84 [16] [i_13] [i_19] [i_19] [i_19] [i_13] [i_19] = ((((((/* implicit */int) (_Bool)1)) << (((-335792112) + (335792130))))) < (((/* implicit */int) arr_7 [i_19 + 1] [i_19] [i_0])));
                        }
                    } 
                } 
                arr_85 [i_19] [i_0 + 4] [i_13] [i_19] = ((/* implicit */unsigned char) arr_74 [7] [i_13] [i_19] [i_13] [i_0 + 3] [i_0] [(unsigned char)5]);
            }
            for (unsigned short i_22 = 1; i_22 < 18; i_22 += 1) /* same iter space */
            {
                var_36 *= var_14;
                var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14152)) ? (((/* implicit */int) arr_62 [i_0] [i_0] [(signed char)2] [i_22])) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1036236364)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))) : (arr_2 [i_0])));
                /* LoopSeq 4 */
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2874667537597517993LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_66 [i_0])))) ? (((/* implicit */unsigned int) -880033628)) : (((((/* implicit */_Bool) arr_6 [i_0 + 3])) ? (2002045601U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */int) (short)20124)) << (((/* implicit */int) var_6)))))));
                    }
                    for (long long int i_25 = 0; i_25 < 20; i_25 += 2) 
                    {
                        arr_96 [i_22] [i_22] = ((/* implicit */long long int) (!((_Bool)0)));
                        arr_97 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) (+(((/* implicit */int) arr_67 [i_0 - 3] [i_0 + 2]))));
                    }
                    for (short i_26 = 0; i_26 < 20; i_26 += 2) 
                    {
                        arr_102 [i_26] [i_23] [i_22] [i_0] = ((/* implicit */short) ((unsigned char) (unsigned char)20));
                        arr_103 [i_13] [i_22 + 2] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_26] [(short)2] [(short)2] [i_0] [(short)2] [i_0])) ? (arr_66 [i_23]) : (((/* implicit */int) (unsigned char)227)))))));
                        arr_104 [i_22 + 1] = ((/* implicit */long long int) arr_94 [i_0] [i_0] [i_22] [i_26] [i_26] [i_23] [i_26]);
                        var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_92 [i_22] [i_22] [i_22] [i_22] [i_22 - 1]))));
                        var_41 = ((/* implicit */signed char) ((7712142717339144515ULL) + (((/* implicit */unsigned long long int) 335792120))));
                    }
                    for (unsigned int i_27 = 0; i_27 < 20; i_27 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) ((3286704136U) & (arr_26 [i_0 + 1] [i_0] [i_0])));
                        arr_109 [i_0] [i_0 - 3] [i_0] [i_0] [(unsigned short)15] [i_0] = ((((/* implicit */_Bool) (unsigned char)219)) ? (arr_86 [i_0 - 4] [(unsigned char)12] [i_0 + 3]) : (7976283150183604594ULL));
                    }
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (unsigned char)74))));
                    arr_110 [i_0 + 1] [i_22] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 10470460923525947034ULL))))));
                }
                for (unsigned int i_28 = 0; i_28 < 20; i_28 += 2) /* same iter space */
                {
                    var_44 += ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_90 [i_22 + 1] [i_22 - 1] [i_0 + 3]))) : (arr_81 [i_0 - 4] [i_0 + 3] [0] [i_0] [i_0 - 2])));
                    var_45 = ((((/* implicit */_Bool) arr_99 [i_0] [9ULL] [i_0 - 3] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_75 [i_0] [i_13] [i_22] [i_28] [i_0] [i_28])));
                }
                for (unsigned int i_29 = 0; i_29 < 20; i_29 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        arr_120 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
                        var_46 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)106))));
                    }
                    var_47 = ((/* implicit */unsigned long long int) (short)11587);
                    var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_13))) << (((/* implicit */int) ((((/* implicit */int) arr_59 [i_0] [16LL])) < (((/* implicit */int) (short)14152))))))))));
                }
                for (unsigned int i_31 = 0; i_31 < 20; i_31 += 2) /* same iter space */
                {
                    var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) (~(arr_3 [i_0 + 1]))))));
                    var_50 = ((/* implicit */long long int) ((short) arr_3 [i_13]));
                    arr_123 [i_0] [i_13] [i_13] [i_22] [i_31] [i_31] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_13] [i_0] [i_22 + 1]));
                }
                var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_108 [i_0] [i_0 + 4] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_73 [i_0] [i_13] [i_13] [i_22 + 2])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */long long int) arr_105 [i_0] [i_0] [i_0] [i_0] [i_0])) - (var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0 - 3] [i_13] [i_22 - 1] [i_22])))));
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_22 - 1])) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_27 [i_22 - 1])))))));
            }
            arr_124 [i_0] = ((/* implicit */short) ((unsigned int) 468946806));
        }
    }
    for (signed char i_32 = 4; i_32 < 16; i_32 += 4) /* same iter space */
    {
        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (short)-4417)), (arr_86 [i_32] [i_32 + 3] [i_32])))))) ? (min((((/* implicit */int) (signed char)6)), (((((/* implicit */_Bool) (short)-32283)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_68 [(short)14] [i_32] [i_32] [i_32] [i_32] [i_32])))))) : (((((/* implicit */int) (short)-21718)) - ((+(arr_91 [i_32] [i_32] [i_32] [i_32 - 3] [i_32 + 3] [i_32])))))));
        var_54 += ((/* implicit */signed char) max(((-(((unsigned long long int) (short)-2849)))), (10470460923525947055ULL)));
    }
    var_55 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (min((max((((/* implicit */unsigned long long int) var_11)), (2802889491272794778ULL))), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_56 = ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (var_4)));
}
