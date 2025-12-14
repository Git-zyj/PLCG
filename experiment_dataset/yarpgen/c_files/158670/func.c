/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158670
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((min((max((((/* implicit */long long int) var_11)), (var_3))), (((/* implicit */long long int) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))), (((/* implicit */long long int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((var_5) >= (min((((/* implicit */long long int) ((((/* implicit */_Bool) -4969764972672575507LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_11)))), (min((((/* implicit */long long int) var_1)), (var_3)))))));
        arr_5 [i_0] &= ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)96)) + (((/* implicit */int) (signed char)0))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_13 = ((/* implicit */int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)4] [i_1]))) : (3396527276U)))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (arr_6 [i_1])))))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) 4969764972672575519LL))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (long long int i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((arr_18 [i_5 - 1] [0] [i_4]) / (4969764972672575506LL))))));
                        var_16 = ((/* implicit */unsigned int) (-(var_12)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 2) 
                    {
                        {
                            arr_33 [i_9] [i_9 - 1] [i_9] [i_9 - 1] [(unsigned short)3] [i_9] [i_9 - 1] = ((/* implicit */unsigned int) -4969764972672575533LL);
                            arr_34 [i_2] [i_2] [i_2] [(short)16] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_3);
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_8] [(signed char)13]))));
                            arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [14U] [(signed char)4])) - (arr_11 [i_7] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))))) : (var_3)));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_9))));
                        }
                    } 
                } 
            } 
            var_19 ^= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)3))));
        }
        var_20 = ((/* implicit */unsigned int) min((var_20), (((unsigned int) var_3))));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            arr_38 [i_2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_11)))) && (((/* implicit */_Bool) (+(4969764972672575506LL))))));
            arr_39 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52601)) ? (arr_31 [i_10 + 1] [i_2] [7U] [i_10 + 1] [7U]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10 + 1] [i_2] [(signed char)4] [(unsigned short)3])))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned char) arr_19 [16U] [16U] [i_10 - 1] [i_10])))));
            var_22 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-1))));
        }
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                arr_45 [i_11] [i_11] [18] [i_2] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_12] [i_2]))));
                /* LoopSeq 1 */
                for (signed char i_13 = 2; i_13 < 18; i_13 += 2) 
                {
                    arr_50 [i_13] [i_12] [i_11] [(short)1] = ((/* implicit */unsigned char) (~(var_3)));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_30 [18U] [i_2] [i_2] [i_13 + 2])) : (arr_18 [i_13 - 1] [i_13 + 1] [i_13 - 2])));
                    var_24 = ((/* implicit */short) (~(var_3)));
                    var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */long long int) 17U)) : ((~(var_3)))));
                }
                var_26 ^= var_2;
            }
            var_27 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (short)-14446))))));
            arr_51 [i_2] = ((/* implicit */unsigned short) arr_14 [i_11]);
        }
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 17; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 323034271U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17212))) : ((-(var_8)))));
                        /* LoopSeq 2 */
                        for (long long int i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
                        {
                            arr_63 [i_2] [i_14] [(short)17] [(short)17] [i_16] [(short)13] [(short)17] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_47 [18ULL] [i_14] [i_14] [i_14] [i_14 - 1]))));
                            var_29 += ((/* implicit */long long int) ((var_12) / (((/* implicit */unsigned long long int) 323034271U))));
                        }
                        for (long long int i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                        {
                            var_30 -= var_4;
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_26 [i_2] [i_14 - 1] [7U] [i_16]))));
                        }
                    }
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_20 = 2; i_20 < 18; i_20 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(var_4)))) & (((var_3) % (((/* implicit */long long int) var_1))))));
                            arr_73 [(signed char)7] [(signed char)7] = ((((/* implicit */_Bool) arr_14 [i_20 + 2])) ? (arr_62 [i_2] [i_20 + 1] [i_15] [i_19] [i_20]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)26))))));
                        }
                        for (long long int i_21 = 0; i_21 < 20; i_21 += 2) 
                        {
                            var_33 = ((/* implicit */int) (((~(var_5))) & (arr_40 [i_14] [i_14 - 1] [i_14 - 1])));
                            var_34 |= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)26037))));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_15] [i_15] [i_15])) ? (var_8) : (var_11))))));
                            var_36 ^= ((/* implicit */long long int) var_12);
                        }
                        var_37 &= arr_42 [6U];
                        arr_81 [i_2] = ((/* implicit */unsigned int) arr_37 [i_15]);
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 1224658195U))));
                    }
                    var_39 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) -4969764972672575520LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_2] [i_2]))) : (var_6)))));
                    var_40 -= ((/* implicit */signed char) (-(var_5)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_23 = 0; i_23 < 10; i_23 += 2) 
    {
        for (unsigned int i_24 = 1; i_24 < 9; i_24 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) min((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_23] [i_23] [i_23]))) - (arr_28 [i_23] [i_24] [i_25]))), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)104))))))))))));
                    var_42 |= ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7125))) : (var_3))))) < (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                }
                var_43 -= ((/* implicit */unsigned int) (~(min((-4969764972672575506LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)38)))))))));
                /* LoopSeq 3 */
                for (unsigned short i_26 = 0; i_26 < 10; i_26 += 2) 
                {
                    var_44 |= ((/* implicit */short) (+(max((((((/* implicit */int) arr_42 [i_23])) + (((/* implicit */int) arr_74 [i_23] [i_23] [i_23] [i_23] [i_23])))), ((~(((/* implicit */int) var_0))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4969764972672575506LL)) ? (var_11) : (323034271U)))) || (((/* implicit */_Bool) ((unsigned short) var_9))))))));
                        var_46 ^= (-((~(4207252925U))));
                        var_47 = ((/* implicit */long long int) ((unsigned int) var_2));
                    }
                    for (signed char i_28 = 0; i_28 < 10; i_28 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_29 = 2; i_29 < 6; i_29 += 2) 
                        {
                            arr_99 [i_23] [i_24] [i_26] [i_26] [i_28] [i_28] [i_26] = ((/* implicit */int) (+((-(arr_76 [i_29] [i_29] [i_29 - 1] [i_29] [i_29 + 4])))));
                            arr_100 [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((4294967295U) * (var_11)))))) ? (var_4) : (((var_7) + (var_1)))));
                        }
                        for (unsigned int i_30 = 0; i_30 < 10; i_30 += 2) /* same iter space */
                        {
                            arr_104 [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_84 [i_24 + 1] [i_24 + 1])), (var_2)))) ? (max((min((864419609U), (((/* implicit */unsigned int) (signed char)-38)))), (var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)104)))))));
                            var_48 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) var_6)))) ? ((~(var_7))) : (arr_26 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]))), ((+(min((((/* implicit */unsigned int) (unsigned char)11)), (arr_92 [i_23] [6LL] [i_26] [i_28])))))));
                            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61))))) >= (arr_89 [i_24]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_31 = 0; i_31 < 10; i_31 += 2) /* same iter space */
                        {
                            var_50 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)12089))))) ? (((long long int) arr_11 [i_24 + 1] [i_31])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_9)) : (var_11))))));
                            arr_107 [i_23] [i_23] [i_26] [i_28] [i_31] [i_31] = ((/* implicit */unsigned short) var_5);
                        }
                        var_51 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-21519)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)21306))) & (((unsigned int) arr_60 [i_23] [i_23]))))));
                        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) var_7))));
                        var_53 ^= ((/* implicit */signed char) (unsigned short)61832);
                        arr_108 [i_23] = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((var_7) * (arr_97 [i_23] [5] [i_23] [i_24 + 1])))) ? (min((var_5), (((/* implicit */long long int) arr_9 [(short)5])))) : (((/* implicit */long long int) 4113387161U)))) : (((/* implicit */long long int) (~(arr_71 [i_28] [i_26] [i_26] [i_24 + 1] [i_23] [i_23])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_32 = 0; i_32 < 10; i_32 += 2) 
                    {
                        var_54 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_26 [i_23] [(unsigned short)1] [i_26] [i_32])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17202))) : (arr_88 [i_23] [i_24 - 1] [(unsigned short)2]))) <= (var_12)));
                        var_55 = ((/* implicit */unsigned int) arr_20 [i_23] [i_23] [9] [i_23] [(short)5] [i_23]);
                        var_56 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)62872))));
                        arr_111 [i_23] [i_24] [i_23] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_91 [i_24 + 1] [i_24 - 1] [i_24 - 1]))) > (arr_21 [(signed char)4] [i_24 - 1] [i_26] [i_32])));
                    }
                    var_57 = ((/* implicit */signed char) var_3);
                    /* LoopSeq 2 */
                    for (unsigned int i_33 = 0; i_33 < 10; i_33 += 2) 
                    {
                        var_58 -= min((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_105 [2U] [i_24 + 1] [i_33] [i_33] [0LL] [i_24 + 1])) ? ((+(var_7))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17201))))))));
                        arr_114 [i_23] [i_24] [i_26] [i_33] = ((/* implicit */long long int) var_12);
                        var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (var_12))))))));
                        var_60 = ((/* implicit */short) (+(var_1)));
                    }
                    for (long long int i_34 = 0; i_34 < 10; i_34 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_35 = 0; i_35 < 10; i_35 += 2) 
                        {
                            arr_122 [i_34] [i_34] [i_34] [i_34] [i_34] = ((/* implicit */unsigned long long int) var_1);
                            var_61 = ((/* implicit */unsigned short) var_12);
                        }
                        var_62 -= ((/* implicit */unsigned short) ((((unsigned int) (!(((/* implicit */_Bool) var_8))))) >> (((arr_96 [i_23] [i_24 - 1] [(short)3]) + (1583102407)))));
                        var_63 &= ((/* implicit */short) arr_19 [12LL] [i_24 + 1] [i_24] [i_24]);
                    }
                }
                for (long long int i_36 = 0; i_36 < 10; i_36 += 2) 
                {
                    var_64 = ((/* implicit */unsigned int) arr_61 [i_23] [i_23] [i_36] [i_36] [i_24]);
                    /* LoopNest 2 */
                    for (short i_37 = 1; i_37 < 9; i_37 += 2) 
                    {
                        for (unsigned char i_38 = 0; i_38 < 10; i_38 += 2) 
                        {
                            {
                                var_65 -= ((/* implicit */short) (~(min((((((/* implicit */_Bool) (unsigned short)18034)) ? (((/* implicit */int) arr_125 [i_23] [i_38])) : (((/* implicit */int) (signed char)-123)))), (1237053829)))));
                                var_66 |= ((/* implicit */long long int) min(((~(((/* implicit */int) ((signed char) (unsigned char)16))))), (((((/* implicit */int) ((short) arr_13 [i_23] [i_23] [i_23]))) % (((/* implicit */int) (unsigned short)3704))))));
                                var_67 = ((/* implicit */unsigned short) max((var_67), (((/* implicit */unsigned short) (+(var_11))))));
                            }
                        } 
                    } 
                    var_68 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(var_12))))))));
                    var_69 = ((/* implicit */signed char) max((var_69), (((/* implicit */signed char) max((var_1), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (arr_28 [i_36] [i_24] [i_23]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) arr_47 [i_23] [i_23] [i_24 + 1] [i_23] [i_36]))))))))))));
                    var_70 = ((/* implicit */long long int) 12U);
                }
                for (int i_39 = 0; i_39 < 10; i_39 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_40 = 1; i_40 < 9; i_40 += 2) 
                    {
                        var_71 = ((/* implicit */unsigned int) min((((long long int) ((((/* implicit */_Bool) (signed char)-19)) ? (arr_70 [i_23] [i_24] [i_40 + 1]) : (((/* implicit */unsigned long long int) var_9))))), (((var_2) | (((/* implicit */long long int) min((var_11), (arr_17 [i_23] [i_24 + 1] [i_39] [(signed char)11]))))))));
                        var_72 = ((/* implicit */signed char) arr_67 [i_23] [i_23] [i_23] [i_23]);
                    }
                    /* vectorizable */
                    for (signed char i_41 = 0; i_41 < 10; i_41 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_42 = 0; i_42 < 10; i_42 += 2) 
                        {
                            var_73 = ((/* implicit */unsigned long long int) (~(4294967295U)));
                            var_74 = ((/* implicit */signed char) max((var_74), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_48 [i_24] [i_39] [1LL])) : (arr_31 [i_23] [i_24] [i_39] [i_41] [i_42])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_112 [i_42] [i_41] [i_39] [i_24] [i_23] [i_23]) : (((/* implicit */int) (unsigned short)3704))))) : (arr_48 [i_24 - 1] [i_24 - 1] [i_24 + 1]))))));
                        }
                        var_75 = ((/* implicit */short) max((var_75), (((/* implicit */short) var_1))));
                        arr_138 [i_24] [i_24] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_80 [(signed char)2] [(signed char)18] [11LL]))));
                    }
                    var_76 = ((/* implicit */unsigned short) arr_0 [(unsigned short)6]);
                    var_77 = ((/* implicit */unsigned int) (signed char)38);
                    var_78 = ((/* implicit */unsigned int) min((var_78), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [i_24 - 1] [i_24 + 1] [i_24 - 1])) ^ (((/* implicit */int) arr_54 [i_24 - 1] [i_24 + 1] [i_24 - 1]))))), (((((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) (short)-1)) + (2)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)16))))) : ((~(17U)))))))));
                }
                var_79 = ((/* implicit */signed char) min((var_79), ((signed char)52)));
            }
        } 
    } 
}
