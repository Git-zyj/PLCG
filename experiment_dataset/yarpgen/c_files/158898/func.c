/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158898
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) 18446744073709551615ULL);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0 + 2]))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) min((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */short) (unsigned char)203)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            var_18 -= ((/* implicit */unsigned int) arr_5 [i_1] [i_0]);
            arr_7 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])) >= (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))));
            arr_8 [i_0] = ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */long long int) arr_3 [i_0 - 1])) : (arr_6 [i_0] [i_0 + 1]));
        }
    }
    /* LoopSeq 4 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)3969), (((/* implicit */unsigned short) (_Bool)1)))))));
        var_20 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_5 [i_2 - 1] [i_2 - 1])), (((((unsigned long long int) var_11)) + (((/* implicit */unsigned long long int) ((int) (short)-898)))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_19 [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)203)) | (((/* implicit */int) arr_4 [i_3]))));
            var_21 -= ((/* implicit */unsigned long long int) arr_5 [i_3] [i_4]);
            arr_20 [i_4] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1286798110U))));
        }
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))) + (((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))))));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    arr_32 [i_8] [i_7] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) arr_0 [i_7]))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-5944))) == (arr_16 [i_5] [i_8])));
                        arr_37 [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_5])) || (((/* implicit */_Bool) arr_28 [i_7] [i_8] [i_9]))));
                    }
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        arr_41 [i_5] [(unsigned char)6] [i_7] [i_8] [i_10] [i_8] [i_10] &= ((/* implicit */_Bool) (+(((arr_24 [i_6] [i_7] [i_10]) + (((/* implicit */int) var_14))))));
                        arr_42 [i_5] [i_6] [i_7] [i_7] [i_7] = ((((/* implicit */int) (!((_Bool)1)))) >> (((((/* implicit */int) (unsigned char)75)) - (51))));
                    }
                }
                for (signed char i_11 = 3; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    arr_46 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */long long int) arr_31 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 2] [(_Bool)1] [i_11]);
                    var_24 -= ((/* implicit */short) ((arr_23 [i_11 - 1]) ? (((/* implicit */int) arr_23 [i_11 - 3])) : (((/* implicit */int) arr_23 [i_11 - 2]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) - (((unsigned long long int) arr_17 [i_5]))));
                        var_26 = ((/* implicit */unsigned int) var_13);
                    }
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_51 [i_5] [i_6] [i_7] [i_5] [i_7] = ((/* implicit */unsigned char) var_13);
                        var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (14145802785717378841ULL) : (((/* implicit */unsigned long long int) 2855220883U))));
                        var_28 = (-(((/* implicit */int) arr_30 [i_7] [i_11 - 3] [i_11 + 1])));
                    }
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_5] [(signed char)0] [(short)9])))))) ? (((/* implicit */int) (short)-30358)) : (((/* implicit */int) (signed char)1))));
                    var_30 -= ((/* implicit */unsigned long long int) var_4);
                }
                for (signed char i_14 = 3; i_14 < 10; i_14 += 1) /* same iter space */
                {
                    arr_55 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)8)) == (((/* implicit */int) arr_31 [i_14 - 1] [i_14 - 1] [i_5] [(unsigned char)1] [i_5] [(short)1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        arr_59 [i_7] [i_7] [i_14] [i_15] = ((/* implicit */unsigned char) (short)-19518);
                        var_31 = ((/* implicit */_Bool) 9223372036854775807LL);
                    }
                }
                var_32 = ((/* implicit */unsigned int) ((unsigned short) arr_23 [i_7]));
                arr_60 [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-121))))) ? (((36028797018963968ULL) << (((var_11) - (887006735002033454ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6]))) + (var_12)))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 3; i_16 < 9; i_16 += 1) 
                {
                    var_33 &= ((/* implicit */short) ((_Bool) 1252238220876042917ULL));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 2; i_17 < 9; i_17 += 4) 
                    {
                        arr_65 [i_6] [i_6] [(signed char)1] [i_16 + 1] [i_7] [i_16 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) * (((/* implicit */int) (_Bool)0))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_6] [i_16 - 2] [i_16 - 2] [i_17 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))));
                        var_35 = ((/* implicit */_Bool) ((long long int) arr_61 [i_16 + 2] [i_16] [i_16 + 1] [i_7] [i_16 - 2] [i_16 + 2]));
                    }
                    var_36 += ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [i_16 + 1] [i_5] [i_7] [(_Bool)1] [i_6]))))) == (var_8));
                    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_16 + 1] [i_7] [i_5] [i_16 + 2] [i_6] [i_16])) && (((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_7] [i_7]))))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    {
                        var_38 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_34 [i_5] [i_5]) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (38437)))))) ? (var_6) : (((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)5986)) : (arr_27 [i_5] [i_5]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_20 = 4; i_20 < 8; i_20 += 1) 
                        {
                            var_39 = ((/* implicit */short) ((unsigned int) var_13));
                            var_40 -= ((/* implicit */int) ((unsigned short) (_Bool)0));
                            var_41 = ((/* implicit */unsigned short) arr_16 [i_5] [i_5]);
                        }
                        for (long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                        {
                            arr_77 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((int) arr_56 [i_5] [i_6] [i_21] [i_19] [i_6] [i_19] [i_18]));
                            arr_78 [i_5] [i_6] [i_18] [i_18] [i_21] [i_21] = ((/* implicit */unsigned long long int) var_6);
                            arr_79 [i_5] [i_19] [i_6] [i_5] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_71 [i_5] [i_6])) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (arr_9 [i_5]) : (((/* implicit */int) (short)-5922))))), (((((/* implicit */_Bool) 14951889773532153428ULL)) ? (arr_75 [i_5] [i_6] [i_19] [i_6]) : (((/* implicit */unsigned int) arr_24 [i_5] [i_5] [i_5]))))))));
                            arr_80 [i_5] [i_5] [i_18] [i_5] = ((/* implicit */int) arr_63 [i_5] [i_6] [i_18]);
                        }
                    }
                } 
            } 
            arr_81 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_6])) ? (arr_24 [i_6] [i_5] [i_5]) : (((/* implicit */int) arr_18 [i_6])))) / (((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (var_3)))));
            var_42 = ((/* implicit */long long int) (!((_Bool)0)));
            var_43 ^= ((/* implicit */short) arr_54 [i_5] [i_6] [i_6] [i_6]);
        }
        /* vectorizable */
        for (long long int i_22 = 1; i_22 < 10; i_22 += 4) 
        {
            var_44 = arr_23 [i_22 - 1];
            /* LoopSeq 3 */
            for (short i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    var_45 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_66 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_22 - 1] [i_23])))));
                    arr_89 [i_5] [i_5] [i_22] [i_5] [i_5] [i_24] = ((/* implicit */long long int) (+(arr_63 [i_22 + 1] [i_22 + 1] [i_22 - 1])));
                    arr_90 [8ULL] [i_22 - 1] [i_24] &= ((/* implicit */unsigned long long int) ((arr_49 [i_22 - 1] [i_5] [i_22 + 1] [i_22] [i_22 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_22 - 1] [i_22] [i_22 + 1])))));
                }
                for (long long int i_25 = 0; i_25 < 11; i_25 += 1) 
                {
                    var_46 = ((/* implicit */int) ((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    var_47 += ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_22 - 1]))));
                    arr_95 [i_5] |= arr_21 [i_5] [i_5];
                    var_48 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_22 + 1] [i_22 + 1] [i_22] [i_22]))) >= (arr_76 [i_25] [i_5] [i_25] [i_25] [i_22 - 1] [i_5] [i_22 - 1])));
                }
                for (unsigned int i_26 = 1; i_26 < 10; i_26 += 2) /* same iter space */
                {
                    var_49 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_88 [i_5] [i_26 + 1] [i_26 - 1] [i_26 + 1] [i_22])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_84 [i_5])) - (((/* implicit */int) var_1))))) : (((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
                    arr_99 [i_26] [i_26 + 1] [i_23] [i_22 + 1] [(_Bool)1] [i_26] = ((/* implicit */unsigned short) -875023681);
                }
                for (unsigned int i_27 = 1; i_27 < 10; i_27 += 2) /* same iter space */
                {
                    arr_102 [i_27 - 1] [i_27] [i_27] [i_27 - 1] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (arr_63 [i_22 + 1] [i_27 + 1] [i_22 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-4588))))));
                    arr_103 [i_5] [i_27] [i_23] [i_5] = (-(((/* implicit */int) var_5)));
                    var_50 = ((/* implicit */unsigned int) -9LL);
                }
                arr_104 [i_5] [i_22] [i_23] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (var_7) : (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_22 - 1] [i_22 - 1])))));
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */long long int) 11631212969347525408ULL);
                var_52 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                arr_107 [i_5] = ((unsigned long long int) arr_56 [i_22 - 1] [i_22 - 1] [i_22 - 1] [i_22 - 1] [(signed char)6] [i_22 + 1] [i_5]);
                arr_108 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (+(-3191917141619903403LL)));
            }
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
            {
                var_53 = ((/* implicit */unsigned long long int) arr_26 [i_22 - 1]);
                arr_112 [i_29] [i_22 + 1] [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)7060)) ? (((/* implicit */int) arr_54 [i_5] [i_22 - 1] [i_29] [i_5])) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_29])))) + (((/* implicit */int) arr_14 [8LL] [8LL]))));
                var_54 = var_12;
                var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_31 [i_29] [i_22] [i_22 + 1] [i_22 - 1] [i_22] [i_22 - 1])) : (((/* implicit */int) arr_28 [i_22 - 1] [i_22] [i_22 + 1]))));
            }
        }
        arr_113 [i_5] = ((/* implicit */signed char) var_7);
        arr_114 [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) -9LL));
        arr_115 [(signed char)9] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1158649234) << (((arr_49 [i_5] [i_5] [i_5] [i_5] [0LL]) - (12864314187691580439ULL)))))) ? (((/* implicit */long long int) 294954486U)) : (((long long int) arr_74 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) ((short) var_15))) : (((/* implicit */int) (short)-26534))))) : (((((9223090561878065152ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) ? (min((var_12), (((/* implicit */unsigned long long int) var_9)))) : (arr_82 [i_5])))));
        var_56 = ((/* implicit */unsigned int) ((unsigned char) max((arr_30 [i_5] [i_5] [i_5]), (arr_30 [i_5] [i_5] [i_5]))));
    }
    for (unsigned int i_30 = 3; i_30 < 17; i_30 += 1) 
    {
        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11631212969347525393ULL)) ? (((/* implicit */int) (short)4094)) : (((/* implicit */int) (short)2771))));
        arr_119 [i_30] = ((/* implicit */signed char) (((((_Bool)1) ? (18446744073709551612ULL) : (7949675372156899680ULL))) - (var_7)));
        arr_120 [i_30 - 1] [i_30] = ((/* implicit */unsigned int) ((max((arr_4 [i_30]), (((((/* implicit */int) var_4)) == (((/* implicit */int) arr_118 [i_30] [i_30])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)38671)) / (((/* implicit */int) (_Bool)1))))) ? (1ULL) : (((/* implicit */unsigned long long int) -4554590720342702443LL)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -3182000718687853364LL)) ? (((/* implicit */int) (short)5944)) : (((/* implicit */int) arr_117 [i_30 + 2])))), ((-(((/* implicit */int) (_Bool)1)))))))));
    }
    var_58 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((3193809395042162968ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) (+(min((-169149246), (((/* implicit */int) var_9)))))))));
}
