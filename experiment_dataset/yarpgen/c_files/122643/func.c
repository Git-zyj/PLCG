/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122643
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (var_3)));
        arr_4 [i_0] = ((/* implicit */short) var_11);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_15 = ((/* implicit */_Bool) var_7);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_11);
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) var_13);
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (arr_1 [i_0])))))));
                        }
                    } 
                } 
            }
            for (short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned long long int) var_5);
                            var_19 = (_Bool)0;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned char) ((_Bool) 6731906456320264157ULL));
                            var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_0])), ((+(((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((short) arr_18 [i_9] [i_1])), (arr_22 [i_9] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_37 [i_0] [i_0] [i_5] [i_0] [i_1] &= max(((_Bool)1), ((_Bool)1));
                            var_23 = ((/* implicit */long long int) (_Bool)1);
                            var_24 = (((~(((/* implicit */int) max((arr_2 [i_5]), ((unsigned short)25876)))))) - (((((/* implicit */int) min((((/* implicit */short) arr_35 [i_0] [i_1] [i_0] [i_0] [i_1])), (var_5)))) & (((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_5] [i_10] [i_11] [i_0])) : (((/* implicit */int) var_11)))))));
                            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */int) min((arr_23 [i_0] [i_0] [i_1] [i_5] [i_10] [i_11]), (((/* implicit */unsigned short) arr_29 [i_0] [i_1] [i_5] [i_1] [i_5] [i_5]))))) ^ (((arr_29 [i_0] [i_1] [i_0] [i_0] [i_5] [i_11]) ? (((/* implicit */int) arr_23 [i_11] [i_1] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_10] [i_10] [i_10]))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_12 = 4; i_12 < 10; i_12 += 2) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_6)))) | (max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (arr_5 [i_0])))))) && (((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) 2311092294U))))))))));
            var_27 = ((/* implicit */unsigned int) min((var_27), ((((!(((/* implicit */_Bool) arr_8 [i_0] [i_12 - 3] [i_12] [i_12 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) (short)-24782)) > ((-(var_6))))))) : (min((var_3), (((/* implicit */unsigned int) arr_3 [i_12]))))))));
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_0))));
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_44 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_13] [i_14] [i_13] [i_14])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_13] [i_14] [i_13] [i_14])), (var_10)))) : (arr_1 [i_14])));
            var_29 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (long long int i_17 = 4; i_17 < 8; i_17 += 4) 
                    {
                        {
                            var_30 *= ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_17]))))), (((((/* implicit */int) (unsigned char)200)) + (((/* implicit */int) (short)23269))))))), (((((/* implicit */_Bool) max((arr_2 [i_15]), ((unsigned short)51668)))) ? (((var_3) * (var_3))) : (max((2311092294U), (((/* implicit */unsigned int) var_5))))))));
                            arr_55 [i_14] [(_Bool)1] [i_15] [i_15] [(_Bool)1] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                        }
                    } 
                } 
            } 
            var_31 += arr_40 [i_13];
            /* LoopSeq 1 */
            for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    for (unsigned short i_20 = 4; i_20 < 10; i_20 += 4) 
                    {
                        {
                            var_32 = var_13;
                            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (8388607U) : (2102998726U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((+(arr_6 [i_20 - 1] [i_18] [i_18])))));
                            var_34 *= ((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1580814251U))))));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_36 [i_13] [i_13] [i_13])))))));
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (min((max((arr_12 [i_13] [i_14] [i_14] [i_14] [i_20] [i_19] [i_20 - 4]), (((/* implicit */unsigned long long int) 3247402820U)))), (min((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_13] [i_14] [i_18] [i_14] [i_18] [i_18] [i_19])))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        var_37 = (+(8388580U));
                        var_38 = ((/* implicit */short) ((arr_10 [i_14]) ^ (arr_10 [i_14])));
                    }
                    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 4) 
                    {
                        arr_71 [(short)0] [i_14] [i_18] [i_21] [(short)6] [i_23] [(_Bool)1] &= ((/* implicit */short) var_11);
                        var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_8) >= (var_13))))));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 2) 
                    {
                        arr_75 [i_24] [i_14] [i_18] [i_14] [i_13] = ((/* implicit */long long int) (_Bool)0);
                        var_40 -= ((/* implicit */unsigned char) var_3);
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) ((_Bool) arr_47 [i_13] [i_14] [i_18] [i_21]));
                        var_42 = ((/* implicit */long long int) (+(1015808U)));
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_52 [i_21] [i_14] [i_18] [i_25]))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                    {
                        arr_83 [(unsigned short)6] [i_21] [i_18] [i_14] = ((/* implicit */unsigned int) ((arr_42 [i_13] [i_14] [i_14]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [(_Bool)1] [i_14] [i_14] [i_14] [i_26])))));
                        var_44 &= ((/* implicit */long long int) (+(var_3)));
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        var_45 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_13] [i_14] [i_18] [i_21])) * (((/* implicit */int) arr_0 [i_14] [i_21]))));
                        var_46 = ((/* implicit */unsigned int) arr_79 [i_13] [i_13] [i_18] [i_21] [i_14]);
                        var_47 = ((/* implicit */unsigned short) ((2968664443U) - (1983875011U)));
                        arr_86 [i_14] [i_21] |= arr_57 [(_Bool)1] [i_21] [i_27];
                    }
                    for (long long int i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                        var_49 = ((/* implicit */unsigned short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) arr_34 [i_13] [i_14] [i_13] [i_21])) : (((/* implicit */int) (unsigned short)56016)))));
                    }
                    arr_89 [i_14] [5ULL] = arr_33 [i_13] [i_14] [i_18] [i_21] [i_18] [i_18] [i_13];
                }
                for (short i_29 = 1; i_29 < 10; i_29 += 1) 
                {
                    var_50 = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_13 [i_29 - 1] [(unsigned short)7] [3U] [i_29] [i_29])))));
                    var_51 &= ((/* implicit */unsigned short) (-(((/* implicit */int) min((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)63276)))), (((((/* implicit */_Bool) arr_73 [i_14] [i_14] [i_18] [i_29 + 1] [(unsigned short)10])) && ((_Bool)1))))))));
                    var_52 = ((/* implicit */unsigned short) arr_67 [i_14] [i_13]);
                }
                for (unsigned char i_30 = 1; i_30 < 10; i_30 += 2) 
                {
                    var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) var_2))));
                    arr_94 [i_18] [i_13] [i_14] [i_14] [i_14] |= ((/* implicit */unsigned char) max(((~(max((((/* implicit */unsigned int) (unsigned short)63276)), (3247402819U))))), (((/* implicit */unsigned int) ((short) arr_80 [i_30] [i_30 - 1] [i_30] [i_18] [i_30 + 1])))));
                    var_54 = ((/* implicit */unsigned short) (~(-34408123)));
                    /* LoopSeq 3 */
                    for (short i_31 = 0; i_31 < 12; i_31 += 4) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_31 [i_30 + 1] [i_14]))))));
                        arr_97 [i_14] [i_14] [i_18] [i_31] [i_18] [(_Bool)1] [i_31] = ((/* implicit */unsigned short) ((((var_6) % (var_8))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17268))) & (((1370157U) >> (((/* implicit */int) (_Bool)1))))))));
                        var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((short) arr_41 [i_30 + 2])))));
                        arr_98 [i_13] [i_14] [i_14] [i_30] [i_30 + 2] [i_14] [(_Bool)1] = ((/* implicit */short) min((((((((/* implicit */_Bool) arr_18 [i_30] [i_31])) ? (3247402819U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [(unsigned short)2]))))) & (((/* implicit */unsigned int) arr_16 [i_13] [i_14] [i_14] [i_14])))), (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_11), (((/* implicit */unsigned char) arr_3 [i_14]))))))))));
                    }
                    for (short i_32 = 0; i_32 < 12; i_32 += 4) /* same iter space */
                    {
                        arr_103 [i_13] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                        var_57 = ((/* implicit */_Bool) (unsigned short)45562);
                        var_58 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_66 [i_13] [i_30] [i_13] [i_14] [i_13]))))), (min((arr_59 [i_13] [i_14] [i_13]), (((/* implicit */short) var_4))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)44240), (((/* implicit */unsigned short) var_4))))) ? (((((/* implicit */_Bool) 1664978809U)) ? (((/* implicit */int) (short)29920)) : (((/* implicit */int) (unsigned short)9520)))) : (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)20357))))))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_74 [i_13] [i_14] [(unsigned short)11] [i_30] [i_32])) + (((/* implicit */int) arr_99 [i_14]))))) ^ (arr_19 [i_14])))));
                        var_59 += ((/* implicit */unsigned char) -1322881056554767903LL);
                    }
                    for (short i_33 = 0; i_33 < 12; i_33 += 4) /* same iter space */
                    {
                        var_60 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (signed char)-68)), ((short)-27085)))) + (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (_Bool)0))));
                        var_61 = ((/* implicit */_Bool) (~(-816455593506583199LL)));
                    }
                }
                for (short i_34 = 0; i_34 < 12; i_34 += 2) 
                {
                    var_62 *= ((/* implicit */long long int) ((_Bool) arr_23 [i_13] [i_13] [i_34] [i_18] [i_18] [i_34]));
                    arr_108 [i_13] [i_14] [i_34] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)195)), ((unsigned short)65460)))) ? (816455593506583187LL) : (((/* implicit */long long int) (+(((/* implicit */int) arr_76 [i_14] [i_34])))))));
                }
            }
        }
        arr_109 [i_13] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15979386113850480765ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_49 [i_13] [i_13] [i_13])))) ? (arr_50 [i_13]) : (((/* implicit */int) max(((unsigned char)51), (((/* implicit */unsigned char) (_Bool)1))))))) / (((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [i_13]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_35 = 2; i_35 < 10; i_35 += 3) 
        {
            arr_112 [i_13] = ((/* implicit */unsigned long long int) (+(var_13)));
            /* LoopSeq 3 */
            for (short i_36 = 0; i_36 < 12; i_36 += 2) 
            {
                var_63 -= ((/* implicit */short) var_10);
                /* LoopNest 2 */
                for (unsigned short i_37 = 0; i_37 < 12; i_37 += 2) 
                {
                    for (_Bool i_38 = 1; i_38 < 1; i_38 += 1) 
                    {
                        {
                            var_64 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_76 [i_37] [i_36])) / (((/* implicit */int) var_2))))) ^ (((unsigned int) var_9))));
                            var_65 |= ((/* implicit */_Bool) arr_72 [i_13] [i_35] [i_36] [i_37] [i_35] [i_37]);
                        }
                    } 
                } 
            }
            for (short i_39 = 0; i_39 < 12; i_39 += 4) 
            {
                arr_124 [i_13] [i_13] [i_39] = ((/* implicit */long long int) (~(1763152133U)));
                var_66 &= ((arr_52 [i_39] [i_35 - 2] [i_39] [i_13]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_39] [i_35 - 2] [i_39] [i_13]))));
            }
            for (int i_40 = 0; i_40 < 12; i_40 += 4) 
            {
                var_67 = ((/* implicit */unsigned char) arr_122 [i_13] [i_35 - 1]);
                var_68 = ((/* implicit */unsigned short) (!((_Bool)1)));
            }
            /* LoopSeq 1 */
            for (signed char i_41 = 2; i_41 < 10; i_41 += 4) 
            {
                var_69 = ((/* implicit */short) ((unsigned int) arr_52 [i_41] [i_41 - 1] [i_41 - 1] [i_41]));
                /* LoopNest 2 */
                for (short i_42 = 0; i_42 < 12; i_42 += 2) 
                {
                    for (unsigned short i_43 = 0; i_43 < 12; i_43 += 1) 
                    {
                        {
                            var_70 = (-((~(((/* implicit */int) var_5)))));
                            arr_137 [i_43] [i_43] [i_41] [i_43] [i_43] [i_41 + 1] = ((/* implicit */_Bool) arr_110 [i_42]);
                        }
                    } 
                } 
            }
            arr_138 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [(unsigned short)4] [(unsigned short)4] [i_13] [(unsigned short)4] [(unsigned short)4])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_13] [4U] [i_13] [i_13]))) : (arr_104 [i_13] [i_35]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_35 + 2] [i_35 - 2] [i_35 + 2])))));
        }
    }
    for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) /* same iter space */
    {
        arr_141 [i_44] |= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_4)))));
        arr_142 [i_44] [i_44] = ((/* implicit */_Bool) var_0);
    }
    var_71 = (-(((((/* implicit */_Bool) ((unsigned long long int) 1047564477U))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)60870)))));
}
