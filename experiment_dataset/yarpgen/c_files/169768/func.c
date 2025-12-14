/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169768
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
    var_14 = ((/* implicit */short) max((var_6), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-26413)))), (((/* implicit */int) ((((/* implicit */unsigned int) 839080984)) <= (var_4)))))))));
    var_15 = ((/* implicit */long long int) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((max(((-(var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [1U]))))))), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_8)), (var_11))))))));
        arr_3 [i_0] = (+(((/* implicit */int) arr_0 [i_0])));
        arr_4 [i_0] [(signed char)4] = ((/* implicit */signed char) 11713970681420309387ULL);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 - 1] = ((/* implicit */short) ((unsigned int) ((int) arr_7 [i_1 - 1])));
        arr_9 [i_1] [(unsigned char)16] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_1 - 1]))))), (max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) (unsigned short)36008))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            arr_13 [(short)20] [i_1 - 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)36008)))) : (((/* implicit */int) (short)-15033))))), (max((((((/* implicit */_Bool) arr_10 [i_1] [11LL])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((signed char) 6493503216474872082LL)))))));
            arr_14 [i_2] = ((/* implicit */unsigned char) var_5);
            arr_15 [13ULL] [22U] = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [(_Bool)1] [(short)5] [(_Bool)1])), ((unsigned short)36008))))) ^ (((((/* implicit */long long int) arr_11 [i_2] [16] [i_1])) / (var_6))))), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_10))), (((/* implicit */unsigned int) ((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
            {
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)36009);
                arr_21 [12LL] [i_4] [i_1] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)59)) ? (((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_3] [i_4]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))));
            }
            for (int i_5 = 2; i_5 < 23; i_5 += 3) 
            {
                arr_25 [0ULL] [(signed char)20] [4LL] = ((/* implicit */unsigned short) ((short) var_1));
                arr_26 [i_3] [i_3] = ((/* implicit */signed char) (((~(arr_19 [i_3] [i_1] [i_1]))) % (((arr_19 [i_3] [(short)13] [i_1 - 1]) / (arr_19 [i_3] [i_3] [i_3])))));
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_31 [i_1] [(unsigned char)18] [12ULL] [(_Bool)1] = ((/* implicit */long long int) max(((unsigned short)36015), ((unsigned short)29540)));
                arr_32 [(_Bool)1] [i_3] [(signed char)4] [(unsigned short)4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [14ULL] [(signed char)24] [i_6 + 1]))));
            }
            for (signed char i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                arr_35 [0] [(_Bool)1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36015)) ? (((/* implicit */int) (unsigned short)29513)) : (((/* implicit */int) (unsigned char)0))));
                arr_36 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
            arr_37 [i_3] = ((/* implicit */_Bool) var_2);
            /* LoopSeq 2 */
            for (signed char i_8 = 4; i_8 < 22; i_8 += 4) 
            {
                arr_40 [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-6378))) - (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3]))) : (var_6))), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))));
                arr_41 [(signed char)18] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65222), ((unsigned short)29540)))) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_3] [(_Bool)1]))))))));
            }
            /* vectorizable */
            for (unsigned short i_9 = 3; i_9 < 24; i_9 += 3) 
            {
                arr_45 [i_1] [14] [i_1] = ((/* implicit */unsigned short) ((short) arr_30 [i_1 - 1] [i_9 - 2]));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        {
                            arr_51 [8LL] [(signed char)23] [(signed char)23] [i_10] [i_3] = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_10)))));
                            arr_52 [i_3] [(short)9] [i_1 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65204))) : (arr_23 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) (-(arr_46 [i_1] [3U] [(short)15] [(short)15])))) : (((((/* implicit */_Bool) var_9)) ? (15817578293320502582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                            arr_53 [(signed char)17] [(unsigned short)13] [i_9] [i_3] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_1] [(short)19] [i_3]))) : (var_6))) == (((/* implicit */long long int) (-(((/* implicit */int) arr_49 [i_1] [(short)21] [i_10] [i_11] [i_11] [i_9 - 1] [i_10])))))));
                            arr_54 [i_11] [i_10] [i_9] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_48 [i_1 - 1] [i_1 - 1] [i_9 - 1] [(unsigned char)10] [(unsigned short)21] [i_9 + 1] [(unsigned char)18])) + (2147483647))) << (((arr_28 [i_1 - 1] [i_1 - 1]) - (3314166319U)))));
                        }
                    } 
                } 
                arr_55 [(signed char)10] [16ULL] [i_3] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) arr_33 [i_9] [i_9] [(signed char)2] [i_1])) : (((/* implicit */int) arr_27 [(unsigned short)12] [22] [i_3] [i_1 - 1]))))) ? (arr_30 [i_1 - 1] [i_3]) : (((/* implicit */unsigned long long int) 3764952094U))));
            }
            arr_56 [i_3] [21U] [i_3] = min((max((min((((/* implicit */unsigned short) var_8)), (var_5))), (((/* implicit */unsigned short) max((var_7), (var_7)))))), (((/* implicit */unsigned short) var_8)));
        }
        for (signed char i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_13 = 3; i_13 < 24; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_15 = 3; i_15 < 24; i_15 += 3) 
                    {
                        arr_67 [i_1] [i_1] [(unsigned short)12] [(unsigned short)12] [(short)7] [(short)11] &= ((/* implicit */unsigned short) ((short) arr_49 [i_14] [i_14] [i_15 - 3] [i_15] [i_15] [i_15] [i_14]));
                        arr_68 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (arr_19 [20U] [i_1 - 1] [i_13 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    }
                    arr_69 [i_12] [(unsigned short)24] [(unsigned short)21] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)36024))))))), ((+(max((((/* implicit */unsigned long long int) arr_47 [i_13])), (var_1)))))));
                }
                for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                {
                    arr_73 [i_1] [i_12] [8ULL] [15U] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_4)), (var_13))), (((/* implicit */unsigned long long int) arr_59 [i_1 - 1]))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [(signed char)20])) - (-298412465)))) * (((var_3) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 3) 
                    {
                        arr_76 [i_13] [(_Bool)1] [i_13] [i_13] [i_13] [(_Bool)1] [15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_13 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_33 [i_1 - 1] [i_13 - 3] [i_17 + 1] [i_17 + 2])) : (((/* implicit */int) arr_33 [i_1 - 1] [i_13 + 1] [i_17 + 2] [i_17 - 2]))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)35995), ((unsigned short)29527)))))));
                        arr_77 [i_13 - 3] [i_13 - 3] [i_13 - 3] [2ULL] [i_17] = ((/* implicit */signed char) max(((~(((/* implicit */int) max(((short)-4672), (((/* implicit */short) var_0))))))), (((((/* implicit */_Bool) max((arr_38 [(short)6] [(signed char)17] [i_12]), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) min((var_9), (var_8)))) : ((-(-1760176694)))))));
                        arr_78 [i_1] [(_Bool)1] [(unsigned short)23] [4ULL] [i_17] = var_7;
                        arr_79 [24U] [(short)13] [(short)24] [i_16] [3U] = ((/* implicit */unsigned short) max((1181610025068582771ULL), (((/* implicit */unsigned long long int) (unsigned short)36013))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        arr_84 [i_16] [8U] [2U] [i_16] [i_16] = var_12;
                        arr_85 [i_18] [i_16] [i_12] [i_12] [17U] = ((/* implicit */short) (+(((/* implicit */int) arr_66 [i_1 - 1] [(unsigned short)12] [(signed char)12] [8U] [(signed char)12]))));
                    }
                    for (signed char i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        arr_90 [i_1] [i_1] [i_12] [i_1] [i_12] [i_1] = min((((/* implicit */unsigned long long int) max((arr_7 [(unsigned short)18]), (((/* implicit */short) arr_44 [i_1 - 1] [i_12]))))), (max((((/* implicit */unsigned long long int) var_10)), (((var_13) | (arr_10 [i_1] [i_12]))))));
                        arr_91 [(unsigned char)6] [(unsigned char)6] [(short)5] [(unsigned short)21] [(unsigned short)21] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_5 [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_19 [(_Bool)1] [(_Bool)1] [(_Bool)1]))) : (var_1)))));
                    }
                }
                arr_92 [(unsigned short)10] = arr_7 [19];
                arr_93 [i_13] [i_12] [i_13] |= ((/* implicit */unsigned long long int) ((int) ((arr_43 [20ULL]) ? (((((/* implicit */int) arr_39 [i_1] [i_12] [(unsigned char)9])) & (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_9)))))));
                /* LoopSeq 3 */
                for (unsigned int i_20 = 2; i_20 < 24; i_20 += 3) 
                {
                    arr_98 [(signed char)3] [i_13] [(short)7] [i_12] [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
                    arr_99 [10U] [10U] [8ULL] [i_20] = ((/* implicit */_Bool) var_13);
                    arr_100 [i_13 - 1] [(unsigned char)7] [(short)19] [2LL] [i_12] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [(signed char)14] [i_13 - 2] [i_12] [(signed char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (var_10))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)29526)))))));
                }
                /* vectorizable */
                for (short i_21 = 3; i_21 < 23; i_21 += 3) /* same iter space */
                {
                    arr_103 [i_21] [i_12] [(unsigned short)13] [(short)6] = ((/* implicit */short) var_1);
                    arr_104 [(unsigned short)18] [2] [(short)12] [(unsigned char)0] [2] [i_1] = ((/* implicit */unsigned int) ((short) var_8));
                }
                /* vectorizable */
                for (short i_22 = 3; i_22 < 23; i_22 += 3) /* same iter space */
                {
                    arr_107 [2ULL] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1960483574665103903ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29517)) ? (((/* implicit */int) (unsigned short)35980)) : (((/* implicit */int) (short)27502))))) : (3764952094U)));
                    arr_108 [i_1 - 1] [(signed char)18] [(signed char)24] = ((/* implicit */unsigned short) arr_39 [i_12] [i_12] [i_22 - 3]);
                }
            }
            arr_109 [i_12] = ((/* implicit */signed char) arr_23 [2ULL] [i_12]);
        }
        for (int i_23 = 1; i_23 < 24; i_23 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                arr_115 [i_1] [i_24] [(short)20] = ((/* implicit */short) ((((unsigned long long int) -102507925)) - (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)6714)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (signed char)71))))) : (max((((/* implicit */long long int) arr_74 [(unsigned char)5] [(signed char)19] [(unsigned char)5])), (var_6))))))));
                arr_116 [i_23] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_59 [i_1 - 1]), (arr_59 [i_1 - 1])))), ((+(((/* implicit */int) arr_59 [i_1 - 1]))))));
            }
            arr_117 [i_23] = ((/* implicit */int) arr_50 [17] [i_1] [(short)17] [(unsigned short)13] [i_1] [17] [i_23 - 1]);
        }
        arr_118 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_71 [8LL] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) arr_71 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))), (min((((/* implicit */long long int) -102507916)), (5561825308992104887LL)))));
    }
    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 4) 
        {
            arr_124 [i_25] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)29512)), (265561271)))), (min((min((var_10), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_113 [(signed char)5] [i_25 - 1] [i_25])) + (85))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 1; i_27 < 24; i_27 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_28 = 0; i_28 < 25; i_28 += 3) 
                {
                    for (short i_29 = 2; i_29 < 24; i_29 += 3) 
                    {
                        {
                            arr_132 [i_26] = ((/* implicit */short) max((((/* implicit */signed char) ((_Bool) (~(530015205U))))), (arr_39 [i_25] [21LL] [i_27])));
                            arr_133 [i_26] [i_29] [i_29] [i_26] [i_26] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_0)), (var_10))) / (((unsigned int) var_2))))), (max((((/* implicit */unsigned long long int) arr_61 [i_25])), (((((/* implicit */_Bool) arr_19 [i_26] [i_26] [6LL])) ? (arr_83 [(short)22] [(short)22] [i_27 - 1] [(_Bool)1] [i_29]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_30 = 2; i_30 < 23; i_30 += 3) 
                {
                    for (signed char i_31 = 3; i_31 < 24; i_31 += 2) 
                    {
                        {
                            arr_139 [i_27] [i_25] [i_27] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) var_7)), (arr_18 [i_25] [i_25 - 1] [(unsigned short)21] [i_27 - 1])))) * (((((/* implicit */int) arr_18 [i_25] [i_25 - 1] [(unsigned short)23] [i_27 + 1])) - (((/* implicit */int) arr_18 [i_25] [i_25 - 1] [5U] [i_27 - 1]))))));
                            arr_140 [i_25] [i_26] [i_25] [i_25] [i_26] = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)77))))), (((((/* implicit */_Bool) var_13)) ? (arr_119 [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))))));
                        }
                    } 
                } 
            }
            arr_141 [i_25] [i_26] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((long long int) arr_18 [i_25] [(unsigned short)20] [(unsigned short)20] [(unsigned short)20]))) * (max((((/* implicit */unsigned long long int) arr_113 [i_25] [(signed char)10] [7ULL])), (var_13))))), (((/* implicit */unsigned long long int) arr_114 [i_25] [i_25] [i_25] [19U]))));
            arr_142 [i_26] = ((/* implicit */int) arr_121 [i_25]);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_32 = 1; i_32 < 24; i_32 += 1) 
        {
            for (unsigned short i_33 = 0; i_33 < 25; i_33 += 4) 
            {
                for (short i_34 = 0; i_34 < 25; i_34 += 4) 
                {
                    {
                        arr_152 [i_34] [i_33] [(unsigned char)8] [i_33] [i_25] = ((/* implicit */signed char) ((((14ULL) + (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_5))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)74)), (arr_146 [i_33] [i_33] [i_32 + 1])))))));
                        arr_153 [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_48 [i_34] [i_32 - 1] [i_33] [i_32 - 1] [i_25 - 1] [i_32 + 1] [i_34]))) % (((/* implicit */int) max(((signed char)-34), (arr_48 [i_25] [i_32] [i_33] [i_34] [i_25 - 1] [i_32 - 1] [2ULL]))))));
                    }
                } 
            } 
        } 
    }
}
