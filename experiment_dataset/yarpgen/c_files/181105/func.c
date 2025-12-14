/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181105
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) ((18446744073709551615ULL) << (1ULL)));
            var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -1729622705)), (1ULL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) /* same iter space */
            {
                var_14 |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_2 [i_0 - 1]))) > (12548313)));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) min(((~(arr_5 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_2 - 3])) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0 - 1])) < (arr_5 [i_3] [i_2] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) ((unsigned short) var_11))))))));
                            arr_12 [i_4] [i_3] [i_2] [8LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_2 + 1])), (4294967295U)))) || (((/* implicit */_Bool) (-(arr_0 [i_2 - 1]))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */long long int) arr_16 [2U] [i_1] [i_1]);
                arr_17 [i_5] [i_5] [1U] = ((/* implicit */unsigned int) max((max((-111777530554945576LL), (((/* implicit */long long int) 1729622704)))), (((/* implicit */long long int) arr_4 [i_0] [i_0]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_5 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_5 + 3] [i_0 - 1])) : (((/* implicit */int) var_8))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (unsigned short)40224)) : (((/* implicit */int) (unsigned char)0)));
                        var_19 = (-(((/* implicit */int) arr_9 [i_5 + 2] [i_0 + 1])));
                    }
                    for (int i_8 = 2; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                        arr_24 [i_0] [i_6] [i_5 + 2] [i_0] [i_8] [(unsigned short)20] [i_1] = ((/* implicit */signed char) ((var_5) % (((/* implicit */unsigned int) arr_0 [i_0 - 1]))));
                        arr_25 [i_8] [i_6] [20LL] [8U] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) -2830392554639917825LL)) ? (((/* implicit */unsigned int) 12548306)) : (3544244041U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8 + 1] [i_0 + 1])))));
                    }
                    for (int i_9 = 2; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [(unsigned char)7]);
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0 + 1] [i_5 + 4]))));
                        var_23 |= ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_5] [i_5] [i_9]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_31 [i_10] [19ULL] [i_5] [15] [i_10] = ((/* implicit */long long int) ((arr_0 [i_0 + 1]) | (arr_0 [i_0 + 1])));
                        var_24 = ((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        var_25 = ((/* implicit */int) arr_8 [3LL] [i_0] [1U] [i_0] [i_6] [i_10]);
                    }
                }
                for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 4294967291U)) ? (arr_32 [i_11] [i_11 - 1] [i_5 - 1] [i_5] [19] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11 + 2] [i_11 - 1] [i_5 + 2] [i_5] [i_5] [i_5])) ? (12548301) : (((/* implicit */int) var_9)))))));
                    var_27 = ((/* implicit */unsigned int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-32))))) < (var_5)))))));
                    arr_34 [i_5 + 3] [i_5 + 3] [i_5] [i_11] [i_0] [i_0] = ((/* implicit */short) arr_14 [i_5 + 2] [i_0 - 1]);
                }
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    arr_39 [3ULL] [12] [i_5 + 4] [i_12] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) var_9)))));
                    var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [(unsigned char)5] [3] [i_5] [i_12])) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1])))))))), (((13124354250171329169ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
                    arr_40 [i_0] [i_1] [i_0] [i_0] [i_12] [4] = min(((-(((/* implicit */int) (unsigned short)256)))), (((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */int) arr_29 [i_1]))))));
                }
            }
            arr_41 [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) (unsigned char)178))))))), (21ULL)));
        }
        for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 2) 
        {
            arr_46 [16ULL] [10ULL] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2051856740407345146LL)) ? (1729622705) : (-905810584)))));
            var_29 = ((/* implicit */unsigned short) var_7);
            arr_47 [13] [i_13] = ((/* implicit */short) (+(((/* implicit */int) (short)6144))));
        }
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)30)) % (12548313))))));
    }
    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            for (short i_16 = 4; i_16 < 21; i_16 += 2) 
            {
                for (short i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    {
                        arr_61 [i_16] [i_16] [11ULL] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_59 [i_14] [i_16] [i_15])) : (((/* implicit */int) var_11)))) + (min((arr_54 [i_14] [i_15] [i_15]), (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)24)) == (((/* implicit */int) var_7)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_55 [i_14] [i_14] [i_16] [i_17])) != (var_0))))))) : (((((/* implicit */_Bool) arr_53 [i_14])) ? (((((/* implicit */_Bool) var_1)) ? (arr_52 [i_17]) : (((/* implicit */long long int) arr_55 [i_14] [i_15] [i_16] [i_15])))) : (max((281474976710655LL), (((/* implicit */long long int) arr_54 [i_17] [i_16] [14]))))))));
                        arr_62 [i_17] [i_16] = ((/* implicit */signed char) ((arr_49 [i_16 - 4]) > (((/* implicit */unsigned long long int) ((arr_55 [i_16 - 2] [i_16 - 3] [2] [i_16]) / (((/* implicit */int) ((955185929581308732LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65505)))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_66 [i_18] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_56 [i_18]))))));
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                for (int i_20 = 3; i_20 < 20; i_20 += 1) 
                {
                    {
                        var_31 = ((((/* implicit */_Bool) min((((/* implicit */long long int) 472658234)), (7881329170439431945LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)-127)))))))) : ((+((-9223372036854775807LL - 1LL)))));
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_32 = ((/* implicit */int) max(((~(((long long int) arr_67 [i_14] [i_14])))), (((/* implicit */long long int) ((arr_58 [i_20] [i_20 + 2] [7U] [i_20 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                            arr_75 [i_18] [i_18] [16ULL] [i_21] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_51 [i_21] [i_20] [i_14])))))))));
                            arr_76 [i_14] [i_18] [i_19] [i_14] [i_18] [i_18] [i_18] = ((/* implicit */signed char) min((max((arr_60 [i_14] [i_20 - 3] [i_19] [i_14]), (((/* implicit */unsigned int) arr_71 [(unsigned short)21] [i_20 - 3] [i_18] [i_20])))), (((/* implicit */unsigned int) ((arr_71 [i_14] [i_20 - 3] [i_18] [i_18]) < (arr_71 [i_14] [i_20 - 3] [i_18] [i_14]))))));
                            var_33 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_48 [i_19])), (((unsigned long long int) arr_74 [i_20 - 1] [i_18] [i_19] [i_20] [i_18]))));
                            var_34 = ((/* implicit */int) ((unsigned int) arr_69 [i_14] [i_14] [i_14] [i_14]));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_22 = 1; i_22 < 19; i_22 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_23 = 2; i_23 < 18; i_23 += 1) 
            {
                for (unsigned int i_24 = 1; i_24 < 21; i_24 += 2) 
                {
                    {
                        arr_85 [i_24 + 1] [i_23] [i_22] [i_22] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-125)) > (12548313))))) == (((long long int) (+(arr_64 [i_22] [(unsigned short)0]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_25 = 0; i_25 < 22; i_25 += 4) 
                        {
                            arr_89 [i_14] [i_22 + 1] [i_23 + 4] [i_24] [i_22] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_14] [i_14] [i_22]))) | (max((((/* implicit */unsigned long long int) var_2)), (arr_80 [i_22 - 1] [i_23 + 1])))));
                            var_35 = ((/* implicit */short) min((arr_71 [i_14] [20LL] [i_22] [i_25]), (((/* implicit */int) min((arr_59 [i_22 - 1] [i_22 + 3] [i_23 + 3]), (arr_59 [i_22 + 3] [i_22 + 3] [i_23 - 2]))))));
                            arr_90 [i_14] [i_22] [i_23] [13LL] [i_14] = (~(((((/* implicit */_Bool) arr_65 [i_23 + 2] [i_22] [i_22 - 1])) ? (arr_65 [i_23 + 4] [i_22] [i_22 - 1]) : (arr_65 [i_23 + 2] [i_22] [i_22 - 1]))));
                            var_36 = ((/* implicit */int) ((unsigned short) -1729622712));
                        }
                    }
                } 
            } 
            arr_91 [i_22] [i_22] [i_22] = ((/* implicit */short) var_10);
        }
        var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_84 [i_14] [i_14])))));
    }
    for (int i_26 = 0; i_26 < 17; i_26 += 4) 
    {
        arr_94 [(unsigned short)8] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_26] [i_26] [i_26])) ? (arr_83 [i_26] [i_26] [i_26]) : (((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1819084470998338483ULL)) || (((/* implicit */_Bool) arr_37 [i_26] [i_26]))))) : (((/* implicit */int) max((arr_37 [i_26] [(short)3]), (arr_37 [i_26] [i_26]))))));
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-127)), (18446744073709551612ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_68 [i_26] [i_26] [i_26] [i_26]) : (arr_68 [i_26] [i_26] [i_26] [i_26]))) : ((-(arr_68 [i_26] [i_26] [i_26] [i_26])))));
        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_72 [14LL] [i_26] [i_26])) ? (arr_68 [i_26] [i_26] [i_26] [i_26]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_27 = 0; i_27 < 17; i_27 += 2) 
        {
            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */long long int) ((arr_60 [1ULL] [i_26] [(unsigned short)3] [i_27]) % (((/* implicit */unsigned int) -12548301))))) : (-886780028282956020LL)));
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8989487969465075605ULL) : (((/* implicit */unsigned long long int) var_10))));
        }
        for (long long int i_28 = 0; i_28 < 17; i_28 += 2) 
        {
            var_42 = ((/* implicit */unsigned char) (+(16515072)));
            arr_102 [i_28] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_11)) ? (var_5) : (var_5))))) << (((max((((/* implicit */unsigned int) -1729622681)), (max((var_5), (((/* implicit */unsigned int) -1699362624)))))) - (2595604644U)))));
            arr_103 [i_26] [i_26] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL))));
        }
    }
    var_43 = ((/* implicit */unsigned long long int) var_6);
    var_44 = ((/* implicit */unsigned char) var_4);
}
