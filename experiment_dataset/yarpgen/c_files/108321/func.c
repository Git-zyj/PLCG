/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108321
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned char)213))))) / (6656644289945460822ULL)))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))) == (((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [1ULL])) * (((/* implicit */int) arr_1 [i_0 + 2]))))) * (min((((/* implicit */unsigned int) arr_1 [i_0])), (1505280505U)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) ((_Bool) ((arr_3 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 7; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_16 [i_2 + 1]))));
                    arr_19 [i_3] [i_3] [i_4] = ((/* implicit */short) arr_16 [i_4]);
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_24 [i_2 - 2] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_4]))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_11 [i_3]))) || (((/* implicit */_Bool) 2830365508U)))))));
                        var_20 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_29 [2LL] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) arr_11 [i_2 - 1]);
                            var_21 = ((/* implicit */unsigned char) var_2);
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_32 [i_2] [i_3] [i_2] [i_5] [i_3] [i_7 - 1] [i_3] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                            var_22 = ((((/* implicit */_Bool) ((long long int) 4148121674934010349LL))) ? (0U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */short) ((((1048568) * (((/* implicit */int) (signed char)124)))) / (((/* implicit */int) (signed char)-124))));
                        }
                    }
                    for (signed char i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        var_24 *= ((/* implicit */signed char) ((unsigned int) (unsigned short)32357));
                        arr_36 [i_2 + 1] [i_2 + 1] [i_4] [i_3] = ((/* implicit */unsigned char) ((((unsigned int) arr_5 [i_4] [i_8 - 3])) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7)))))));
                        arr_37 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (arr_0 [i_2 - 2])));
                        arr_38 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) var_15)))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (-1048568)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : ((+(arr_20 [i_2] [i_3] [i_3] [i_8 + 1] [i_8 + 1] [i_2 - 2])))));
                    }
                    arr_39 [i_2 - 2] [i_3] [(signed char)5] [i_3] = ((/* implicit */unsigned long long int) (+(arr_27 [i_2 - 2])));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_2 - 1] [i_2] [i_2] [i_2 + 3] [i_2] [i_2 + 2]))));
        arr_40 [i_2 + 1] = ((/* implicit */short) var_3);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) ((arr_6 [i_10]) / (((/* implicit */unsigned long long int) var_5))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 2; i_11 < 21; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    {
                        arr_52 [i_11] [i_10] [i_12] = var_5;
                        arr_53 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) << (((((/* implicit */int) var_6)) - (96))))) ^ (((/* implicit */int) arr_5 [i_10] [i_10]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_28 = ((/* implicit */unsigned int) ((arr_48 [i_13] [i_10] [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_9] [i_10]))) : (arr_54 [i_9] [i_9] [i_10] [i_13])));
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        arr_62 [i_10] [i_10] [i_13] [i_10] [i_10] = ((/* implicit */int) 0LL);
                        var_29 += ((/* implicit */_Bool) (+(arr_58 [i_14])));
                        var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_14])) ? (((/* implicit */int) arr_48 [(_Bool)1] [i_10] [i_10])) : (((/* implicit */int) var_10))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_4 [i_9] [i_9]);
                        var_32 = ((/* implicit */unsigned short) arr_46 [i_10]);
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) : (arr_64 [i_10] [i_10])))) ? (((/* implicit */int) arr_51 [i_10] [i_10] [i_13] [i_14] [i_10])) : (((/* implicit */int) ((_Bool) 2485628809U)))));
                    }
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                        var_35 &= ((6610917776235858296ULL) < (((/* implicit */unsigned long long int) arr_43 [i_9])));
                        var_36 = ((/* implicit */_Bool) -5926629816451027404LL);
                        arr_69 [i_10] = ((/* implicit */unsigned int) arr_45 [i_9] [i_10]);
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_14)))) ? (((arr_56 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) / (((/* implicit */unsigned int) arr_42 [i_13] [i_9])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_46 [i_10])))));
                    }
                    for (signed char i_18 = 3; i_18 < 20; i_18 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_13))))) ^ (arr_61 [i_18 - 1] [i_18] [i_18 - 2] [i_14] [i_18 + 2] [i_18]))))));
                        var_39 = ((/* implicit */unsigned short) arr_70 [i_9] [i_10] [i_13] [i_14] [i_14]);
                    }
                    var_40 *= ((/* implicit */signed char) (~(arr_57 [i_14] [i_13] [i_10] [6])));
                }
            }
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                arr_78 [i_10] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 0LL)))) ? (((/* implicit */int) arr_50 [i_9] [i_10] [i_9] [i_9])) : (((/* implicit */int) arr_47 [i_9]))));
                var_41 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_60 [i_9] [i_19] [i_19] [i_10] [i_19] [i_9] [i_9]))));
                /* LoopSeq 2 */
                for (unsigned char i_20 = 3; i_20 < 20; i_20 += 3) 
                {
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_55 [i_9] [i_10] [i_10] [i_20]))) ? (arr_42 [i_9] [i_10]) : (((/* implicit */int) var_4))));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) (signed char)-124)))) : (((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */int) arr_45 [i_9] [i_10]))))));
                }
                for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_74 [i_19] [i_9])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 4; i_22 < 21; i_22 += 1) 
                    {
                        var_45 += ((((((/* implicit */_Bool) arr_79 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [(_Bool)1] [i_19] [(_Bool)1] [i_19]))) : (4294967286U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                        var_46 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_61 [i_22 - 3] [i_22 - 4] [i_10] [i_10] [i_22 + 1] [i_22 - 4])) | (arr_54 [i_22 + 1] [i_22 - 4] [i_22] [i_19])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 3; i_23 < 21; i_23 += 4) 
                    {
                        arr_90 [i_23] [i_21] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */signed char) 5304198873394877654ULL);
                        arr_91 [12LL] [3U] [i_19] [i_21] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) (unsigned char)0))));
                    }
                    arr_92 [i_10] [i_10] = ((/* implicit */unsigned char) 0LL);
                }
            }
            arr_93 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_9]))) != (arr_75 [i_10])));
        }
        /* LoopSeq 1 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_47 -= ((/* implicit */unsigned short) (-(arr_94 [7ULL])));
            /* LoopSeq 3 */
            for (unsigned long long int i_25 = 0; i_25 < 22; i_25 += 4) 
            {
                arr_98 [i_25] [i_9] [i_24] [i_9] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-28878)))) ? ((-(var_15))) : (((/* implicit */int) arr_96 [i_9] [i_24] [i_24]))));
                arr_99 [i_9] [i_24] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_76 [i_9] [i_24] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_66 [i_9] [i_9] [i_9] [i_24] [i_25])));
                /* LoopSeq 3 */
                for (unsigned int i_26 = 0; i_26 < 22; i_26 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((/* implicit */int) arr_67 [i_25] [i_25] [i_9])) / (((/* implicit */int) arr_67 [i_9] [i_25] [i_9])))))));
                        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_50 *= ((/* implicit */unsigned long long int) ((((_Bool) (signed char)9)) ? (arr_46 [i_25]) : (arr_103 [i_25] [i_25])));
                        var_51 -= ((/* implicit */long long int) arr_66 [i_9] [i_9] [i_25] [i_9] [i_25]);
                        arr_107 [i_9] [i_28] [i_26] [(_Bool)1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_25] [18] [i_25] [i_26] [i_26]))) == (var_0)));
                        arr_108 [i_9] = ((/* implicit */_Bool) 0U);
                    }
                    for (unsigned short i_29 = 2; i_29 < 21; i_29 += 4) 
                    {
                        var_52 = ((arr_75 [i_29]) * (arr_75 [i_25]));
                        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_106 [i_29 - 2] [i_26] [i_25] [i_24] [i_9])) ? (((/* implicit */int) var_10)) : (var_1)))))));
                    }
                    arr_113 [i_25] [i_25] [i_25] [i_25] [14U] [i_25] = ((/* implicit */int) arr_111 [i_26] [i_25] [i_9] [i_24] [i_9]);
                    var_54 += (+(arr_43 [i_9]));
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 2; i_30 < 21; i_30 += 4) 
                    {
                        arr_116 [i_9] [i_24] [i_25] [i_26] [i_26] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_59 [i_25])))))));
                        var_55 = var_1;
                        var_56 -= ((/* implicit */_Bool) var_6);
                    }
                }
                for (signed char i_31 = 3; i_31 < 19; i_31 += 4) 
                {
                    var_57 ^= ((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)0))))));
                    var_58 = ((/* implicit */short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((((/* implicit */int) arr_85 [i_9] [i_9])) < (((/* implicit */int) var_12)))))));
                    var_59 = ((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_120 [i_9] [i_31] [i_25] [i_9] [i_31] = var_5;
                }
                for (unsigned short i_32 = 0; i_32 < 22; i_32 += 2) 
                {
                    var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_24] [i_25])) ? (((/* implicit */int) arr_41 [i_9] [i_9])) : (((/* implicit */int) (unsigned short)11789)))))));
                    arr_123 [i_9] [i_24] [i_9] [i_32] = ((/* implicit */unsigned int) (~((~(274877906943LL)))));
                }
            }
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
            {
                arr_127 [i_9] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_74 [i_33] [i_33])))) ? (((/* implicit */int) arr_125 [(unsigned short)17] [i_9] [i_9] [i_33])) : (((/* implicit */int) (unsigned short)0))));
                var_61 = ((/* implicit */int) ((signed char) arr_46 [18U]));
                var_62 = ((/* implicit */signed char) 281337537757184ULL);
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
            {
                var_63 = ((/* implicit */unsigned long long int) ((short) arr_88 [i_34] [i_34] [20U] [i_9] [20U] [i_9] [i_9]));
                var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) ((int) arr_126 [i_9] [i_9] [i_9] [i_9])))));
                var_65 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33178))) / (var_2)))) ? (((((/* implicit */_Bool) arr_84 [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_109 [i_9] [i_24] [i_9] [i_34] [i_34]))));
                var_66 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_97 [i_9])) ? (arr_42 [i_9] [i_24]) : (arr_124 [i_9] [i_9] [i_24] [i_34])));
            }
        }
        var_67 -= ((/* implicit */unsigned char) ((unsigned int) var_4));
    }
    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) /* same iter space */
    {
        var_68 = ((/* implicit */unsigned int) (_Bool)1);
        arr_133 [i_35] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_130 [i_35])) ? (((/* implicit */unsigned long long int) arr_104 [(unsigned char)8])) : (max((arr_119 [i_35] [i_35] [i_35] [i_35] [i_35] [i_35]), (((/* implicit */unsigned long long int) ((long long int) arr_131 [i_35])))))));
        var_69 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_86 [(_Bool)1] [i_35] [i_35] [i_35] [i_35] [i_35] [i_35])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_70 [i_35] [16ULL] [i_35] [i_35] [i_35]))))), (min((((/* implicit */unsigned long long int) var_8)), (arr_86 [18ULL] [i_35] [i_35] [i_35] [i_35] [i_35] [18ULL]))));
    }
    var_70 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_0)));
    var_71 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)65535)), (var_1)))) ^ (max((((/* implicit */unsigned int) var_8)), (4294967295U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
