/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111508
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_4 [(short)9] [i_0 + 1] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_10))))));
        var_19 -= ((/* implicit */unsigned int) var_14);
        var_20 = ((/* implicit */short) (-(((/* implicit */int) max((var_6), (((/* implicit */short) arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_21 -= ((/* implicit */long long int) ((((/* implicit */int) var_8)) / (var_7)));
        /* LoopSeq 4 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_0 [(unsigned char)5] [(signed char)2])) : (var_0))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)212)) : (((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)46))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) var_1);
            /* LoopSeq 3 */
            for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                var_25 |= ((/* implicit */unsigned long long int) var_0);
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_26 = ((/* implicit */signed char) ((int) var_12));
                    var_27 = ((/* implicit */signed char) var_2);
                    var_28 = ((/* implicit */short) var_17);
                }
                arr_19 [i_1] [i_1] [i_4] [i_1 - 1] = (~(((/* implicit */int) arr_5 [i_4] [i_1])));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_29 ^= ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1] [i_3 - 1])) != (((/* implicit */int) arr_0 [i_1 + 1] [i_3 - 1]))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_3 [i_6] [i_7])) - (((/* implicit */int) (unsigned char)209))))));
                            var_31 = ((/* implicit */signed char) (-(-750364952)));
                            var_32 = ((/* implicit */_Bool) ((short) (signed char)-1));
                            var_33 = ((/* implicit */int) (+(-2692966197925245045LL)));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_3 - 1] [0U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (var_17)))));
                        }
                    } 
                } 
            }
            for (int i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                var_35 -= (~(((/* implicit */int) arr_2 [i_1 + 1])));
                /* LoopSeq 1 */
                for (short i_10 = 3; i_10 < 9; i_10 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1] [i_3 - 1] [i_3 - 1] [i_9] [i_10 + 1])) || (((/* implicit */_Bool) arr_18 [(short)8] [6] [i_9] [i_3 - 1] [i_1]))));
                    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)4357))));
                    arr_31 [10ULL] [i_10] [i_9] [i_9] [(unsigned short)0] [10ULL] = (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_9 + 3] [i_3])))));
                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) var_15))));
                }
            }
            var_39 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_3 - 1]))));
        }
        for (unsigned int i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
        {
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_11] [i_11 - 1])))))));
            var_41 = (~(((/* implicit */int) arr_9 [6ULL] [i_1 + 1])));
            var_42 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_16 [(signed char)8] [(signed char)8] [i_11] [i_11])))) > (((/* implicit */int) arr_23 [i_11] [i_11] [i_11 - 1] [i_11 + 1]))));
        }
        for (unsigned int i_12 = 2; i_12 < 10; i_12 += 3) /* same iter space */
        {
            var_43 = ((/* implicit */short) var_9);
            arr_38 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 2])) * (((/* implicit */int) arr_32 [i_12 + 1] [i_12 - 1] [i_12 + 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            arr_48 [10U] [i_15] [i_12 - 2] [i_13] [i_14] [(_Bool)1] [4] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_13 - 1] [i_13 - 1]))));
                            var_44 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1277955583)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) arr_40 [i_1 + 1] [i_1] [i_15] [i_1])))))));
                            var_45 = ((/* implicit */short) arr_7 [i_1]);
                            arr_49 [i_1 - 1] [i_12] [i_12 + 1] [(signed char)4] [(signed char)4] [i_15] = ((/* implicit */unsigned short) arr_27 [i_1] [i_1] [i_1]);
                            var_46 = ((/* implicit */unsigned short) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1 + 1]);
                        }
                    } 
                } 
                arr_50 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_35 [i_13 + 1] [i_12])));
            }
            var_47 = (-(var_0));
        }
        arr_51 [2] [2] = ((((/* implicit */int) ((_Bool) var_11))) + ((+(((/* implicit */int) var_12)))));
        /* LoopNest 3 */
        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (unsigned char i_17 = 1; i_17 < 7; i_17 += 4) 
            {
                for (unsigned short i_18 = 2; i_18 < 9; i_18 += 3) 
                {
                    {
                        var_48 = ((/* implicit */short) (+((~(((/* implicit */int) (unsigned char)47))))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            var_49 -= ((/* implicit */unsigned long long int) arr_41 [i_1] [i_16] [i_18] [i_19]);
                            var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1277955583)) - (257333390U)));
                            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                            arr_66 [i_1] [i_1] [i_1] [(unsigned short)9] [i_1 - 1] [i_1 - 1] [2] = ((/* implicit */_Bool) ((unsigned long long int) var_2));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_20 = 1; i_20 < 10; i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            for (short i_22 = 0; i_22 < 11; i_22 += 1) 
            {
                {
                    var_52 = ((/* implicit */unsigned short) arr_60 [i_22]);
                    var_53 = ((/* implicit */unsigned short) arr_34 [(short)4]);
                    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)47)) ? (arr_34 [i_21]) : (((/* implicit */int) ((arr_73 [i_20] [i_20] [i_20]) && (((/* implicit */_Bool) arr_67 [i_22])))))));
                    /* LoopSeq 1 */
                    for (int i_23 = 2; i_23 < 10; i_23 += 1) 
                    {
                        var_55 *= ((/* implicit */unsigned short) arr_52 [6ULL]);
                        /* LoopSeq 1 */
                        for (short i_24 = 2; i_24 < 9; i_24 += 1) 
                        {
                            arr_79 [i_20 - 1] [i_20] [i_22] [i_20] [i_24 - 2] = ((/* implicit */signed char) (-(arr_44 [i_20 - 1] [i_23 - 1] [i_24 - 1] [i_24] [i_24])));
                            arr_80 [(signed char)6] [(signed char)6] [i_20] [i_23 - 2] [i_24] [i_21] [i_21] = arr_74 [i_20] [1] [i_22] [i_23 - 1] [i_24 - 1];
                        }
                        var_56 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_63 [i_23 - 2] [i_23] [i_23] [i_20 + 1] [i_23] [i_20] [i_20 + 1]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_25 = 1; i_25 < 8; i_25 += 1) 
        {
            for (short i_26 = 2; i_26 < 10; i_26 += 2) 
            {
                {
                    var_57 = ((arr_70 [i_26 - 2] [i_26 - 2] [i_26]) & (((/* implicit */int) arr_16 [1LL] [i_25 + 1] [i_26] [i_20 + 1])));
                    arr_85 [i_20] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)-22211)) ? (arr_44 [i_20] [i_20] [i_20] [i_20] [i_20]) : (((/* implicit */int) arr_47 [i_20] [i_20])))) + (2147483647))) << (((((/* implicit */int) ((short) (unsigned short)7168))) - (7168)))));
                }
            } 
        } 
    }
    for (long long int i_27 = 1; i_27 < 10; i_27 += 1) /* same iter space */
    {
        var_58 = ((/* implicit */long long int) (~(var_3)));
        arr_88 [i_27] [i_27] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_27 - 1] [i_27]))));
        arr_89 [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (arr_60 [i_27])))) ? (((((/* implicit */int) var_9)) & (-1943136187))) : (((/* implicit */int) arr_11 [i_27] [i_27] [i_27]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */int) arr_18 [i_27 - 1] [10ULL] [10ULL] [i_27 - 1] [i_27 + 1])) ^ ((+(((/* implicit */int) arr_6 [i_27]))))))));
        arr_90 [i_27 - 1] [i_27] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((short) (short)-28116))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_27] [i_27])) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (unsigned short)24421))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        /* LoopNest 2 */
        for (short i_29 = 3; i_29 < 10; i_29 += 3) 
        {
            for (unsigned long long int i_30 = 3; i_30 < 11; i_30 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_31 = 0; i_31 < 12; i_31 += 2) 
                    {
                        for (signed char i_32 = 4; i_32 < 10; i_32 += 3) 
                        {
                            {
                                arr_104 [i_28] [i_30] [i_28] [(short)2] [i_28] [i_28] [i_28] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-1)))))));
                                var_59 *= ((/* implicit */unsigned char) (+(arr_96 [5U])));
                                arr_105 [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_17))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_33 = 0; i_33 < 12; i_33 += 4) 
                    {
                        for (unsigned short i_34 = 2; i_34 < 10; i_34 += 2) 
                        {
                            {
                                var_60 = ((/* implicit */unsigned int) var_12);
                                arr_111 [i_28] [(unsigned short)4] [i_30] [i_30] [i_33] [i_34] [i_30] = ((/* implicit */short) (+(((/* implicit */int) max((arr_99 [i_30 + 1]), (arr_99 [i_30 + 1]))))));
                                arr_112 [i_30] [i_29 - 3] [i_30] = ((/* implicit */unsigned short) var_15);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_35 = 1; i_35 < 10; i_35 += 3) 
                    {
                        for (unsigned short i_36 = 0; i_36 < 12; i_36 += 4) 
                        {
                            {
                                arr_119 [i_30] [i_35 - 1] [i_30 + 1] [i_30] = ((/* implicit */unsigned char) ((short) var_4));
                                arr_120 [i_28] [i_28] [i_29 + 2] [i_30] [i_30] [4U] [i_36] = ((/* implicit */unsigned int) max((arr_106 [i_28] [i_29] [i_30] [i_35]), (((/* implicit */long long int) (-(((/* implicit */int) arr_114 [i_28] [i_28])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_121 [0ULL] = ((/* implicit */short) var_5);
        var_61 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)46)))) >= ((~(((/* implicit */int) arr_103 [i_28] [i_28] [i_28]))))));
        var_62 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_101 [i_28] [i_28] [(short)10] [i_28] [(short)10] [i_28] [i_28])))), (arr_94 [i_28] [i_28] [5ULL])));
    }
    for (int i_37 = 3; i_37 < 17; i_37 += 1) 
    {
        var_63 = ((/* implicit */unsigned short) min((var_63), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_123 [i_37 - 2])) ? (((/* implicit */int) min((arr_122 [i_37 + 1] [i_37]), (((/* implicit */short) var_5))))) : (min((arr_123 [i_37 - 2]), (((/* implicit */int) var_13)))))))))));
        /* LoopNest 2 */
        for (short i_38 = 3; i_38 < 16; i_38 += 3) 
        {
            for (short i_39 = 0; i_39 < 18; i_39 += 3) 
            {
                {
                    arr_130 [4] [i_39] [i_39] [14ULL] = ((/* implicit */int) arr_128 [i_38] [i_39]);
                    var_64 *= ((/* implicit */signed char) arr_129 [8ULL] [i_38] [(signed char)6]);
                }
            } 
        } 
        var_65 = (((~(((/* implicit */int) var_6)))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_125 [i_37] [i_37])) || (((/* implicit */_Bool) var_0)))))))));
        /* LoopNest 2 */
        for (int i_40 = 0; i_40 < 18; i_40 += 4) 
        {
            for (short i_41 = 0; i_41 < 18; i_41 += 1) 
            {
                {
                    var_66 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_12), (var_12)))))) != (-1943136187)));
                    var_67 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
                    var_68 = ((/* implicit */unsigned short) (~(max((var_0), (((/* implicit */int) arr_124 [i_37 + 1]))))));
                    var_69 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_5))) & (arr_126 [i_37] [i_40] [i_41]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_42 = 0; i_42 < 11; i_42 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_43 = 0; i_43 < 11; i_43 += 2) 
        {
            var_70 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_109 [i_42] [i_43] [i_43] [i_43] [i_43])) && (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
            var_71 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_4))));
        }
        for (signed char i_44 = 0; i_44 < 11; i_44 += 3) 
        {
            var_72 = ((int) var_18);
            /* LoopSeq 1 */
            for (unsigned int i_45 = 3; i_45 < 10; i_45 += 3) 
            {
                arr_145 [(short)6] [i_44] [i_44] [i_44] = ((/* implicit */signed char) (((-(var_7))) != (((((/* implicit */int) var_13)) - (var_0)))));
                var_73 = ((/* implicit */short) arr_68 [i_42]);
                var_74 = ((/* implicit */short) (~((-(((/* implicit */int) arr_91 [i_45] [4]))))));
                arr_146 [i_44] [i_44] = ((/* implicit */unsigned int) (~(arr_59 [i_45 - 1] [i_45 + 1] [i_45 - 2] [i_45 - 3])));
                arr_147 [i_42] [(short)10] [i_44] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
            }
        }
        var_75 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (unsigned char)210))));
    }
}
