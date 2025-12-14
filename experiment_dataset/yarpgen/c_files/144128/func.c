/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144128
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
    var_12 -= ((/* implicit */unsigned int) ((unsigned long long int) min((4282765398U), (((/* implicit */unsigned int) (_Bool)1)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (var_10)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned long long int) ((arr_3 [i_1 - 2] [(_Bool)1]) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)0])))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((arr_5 [i_1] [i_1 - 2] [i_1 + 1]) | (arr_5 [i_1] [i_1 - 2] [i_1 - 3]))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 4; i_3 < 9; i_3 += 2) 
                {
                    for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                            var_16 += ((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((arr_15 [i_1 + 1] [i_1 - 3]) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204)))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    var_18 += ((/* implicit */short) var_4);
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_6] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_1 - 3])) : (((/* implicit */int) var_8))))) ? (arr_9 [i_6] [i_1] [i_1] [i_6 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (var_2))))));
                }
                for (signed char i_7 = 3; i_7 < 8; i_7 += 2) 
                {
                    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_7 - 3] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_8 [i_7 + 2] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_8 [i_7 - 1] [i_7] [i_7] [i_7]))));
                    var_20 = ((/* implicit */short) ((arr_17 [i_1 - 3] [i_7 + 1] [i_7] [i_7]) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (_Bool)1))))) : (arr_1 [i_7 + 1])));
                    var_21 *= ((((/* implicit */_Bool) arr_5 [i_7 + 1] [i_1 - 2] [i_1 - 1])) ? (arr_5 [i_7 - 2] [i_1 + 1] [i_1 - 3]) : (arr_5 [i_7 + 1] [i_1 + 1] [i_1 + 1]));
                    arr_23 [i_0] [i_1] [i_5] [i_5] [i_7 + 1] [i_7 + 2] = ((/* implicit */unsigned long long int) ((((arr_13 [i_1 + 2]) + (9223372036854775807LL))) << (((((arr_13 [i_1 + 2]) + (788350240799215966LL))) - (39LL)))));
                    arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_6)))));
                }
            }
        }
        for (unsigned char i_8 = 3; i_8 < 8; i_8 += 2) /* same iter space */
        {
            var_22 -= ((/* implicit */long long int) ((unsigned char) var_5));
            var_23 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-1))))));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_8 + 2] [i_8 - 2])) ? (var_10) : (var_10))))));
                arr_30 [i_0] [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((unsigned char) (short)7852));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                {
                    arr_34 [i_10] [i_9] [i_8] [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned int) var_7)));
                    var_25 -= ((/* implicit */short) ((((arr_29 [i_8] [i_8] [i_8]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    arr_35 [i_10] [i_9] [i_8] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((2179180357U) >> (((((/* implicit */int) (unsigned short)65532)) - (65522))))) : (0U)));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8 - 2] [i_9] [i_8 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((+(4293034235U))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 3; i_11 < 8; i_11 += 2) /* same iter space */
                    {
                        var_27 += ((/* implicit */unsigned char) ((var_1) ? ((~(18446744073709551615ULL))) : (((var_9) & (((/* implicit */unsigned long long int) 1493195392U))))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_11 [i_0] [i_8] [i_9] [i_10] [0U]))));
                        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [5U] [i_0] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))));
                    }
                    for (unsigned short i_12 = 3; i_12 < 8; i_12 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 3989654969U)) ? (var_9) : (((/* implicit */unsigned long long int) 1416012172U)))) * (((/* implicit */unsigned long long int) var_0))));
                        var_31 = ((/* implicit */unsigned short) ((((arr_26 [i_0] [i_0]) ? (arr_37 [i_8 + 1] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0]))))) | (((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_38 [i_9]))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 9; i_13 += 2) 
                    {
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_4))) << (((/* implicit */int) arr_2 [i_13 + 1] [i_13]))));
                        var_34 |= ((/* implicit */signed char) var_4);
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                {
                    var_35 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)115))));
                    var_36 = ((/* implicit */unsigned long long int) ((arr_9 [i_8] [i_8] [i_9] [i_8 + 1]) == (((/* implicit */unsigned long long int) ((var_0) & (var_0))))));
                    var_37 = ((/* implicit */unsigned int) (~((~(var_9)))));
                }
                arr_45 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_8 - 1] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (910437078U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            }
        }
        for (unsigned char i_15 = 3; i_15 < 8; i_15 += 2) /* same iter space */
        {
            arr_48 [i_0] = ((/* implicit */unsigned int) ((short) var_8));
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((var_0) | (((/* implicit */long long int) arr_37 [i_0] [i_15 - 1])))))));
        }
        var_39 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (_Bool)0))) << (((((/* implicit */int) arr_47 [i_0])) - (32169)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                var_40 = ((/* implicit */signed char) var_1);
                arr_56 [i_16] [i_16] [i_16] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (889745412876909597LL))));
            }
            for (unsigned char i_18 = 2; i_18 < 9; i_18 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_18] [i_18 + 1] [i_18] [i_18] [i_18 - 2] [i_18] [i_18])) ? (arr_42 [i_0] [i_18 + 1] [0U] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18]) : (arr_42 [i_0] [i_18 - 1] [i_18] [i_0] [i_18 - 1] [5U] [i_18]))))));
                arr_59 [i_0] [i_16] [i_18] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)21628))))));
            }
            for (unsigned char i_19 = 2; i_19 < 9; i_19 += 2) /* same iter space */
            {
                var_42 = arr_49 [i_0] [i_16];
                var_43 |= ((/* implicit */int) var_9);
            }
            /* LoopSeq 3 */
            for (signed char i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_21 = 2; i_21 < 9; i_21 += 2) 
                {
                    var_44 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36399)) ? (((/* implicit */int) (signed char)28)) : (32704)));
                    var_45 = ((/* implicit */unsigned short) ((signed char) arr_31 [9ULL] [i_20] [i_20] [9ULL]));
                }
                arr_68 [i_0] [(unsigned char)6] [(signed char)3] [i_0] = ((/* implicit */short) ((2891989730U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_16] [i_16] [i_16] [i_20])))));
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((arr_64 [i_0] [i_16] [i_20] [(unsigned char)8]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)65))))) : (arr_42 [i_0] [i_16] [i_16] [i_16] [i_20] [i_20] [i_20]))))));
                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_16] [i_20]))) * (var_7))) : (((unsigned int) -914603487237857043LL))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_73 [i_0] [(unsigned char)9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 2; i_23 < 7; i_23 += 2) 
                {
                    var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_0] [i_0] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_7)))) : (((unsigned long long int) arr_37 [i_22] [i_22]))));
                    var_49 = ((/* implicit */unsigned int) max((var_49), (((unsigned int) arr_55 [i_0] [i_0] [i_0]))));
                    var_50 ^= ((/* implicit */signed char) ((((unsigned long long int) arr_20 [i_0] [i_16] [i_22] [i_16] [i_23 + 1])) != (((/* implicit */unsigned long long int) (((_Bool)1) ? (511) : (((/* implicit */int) arr_16 [i_23] [i_23] [i_23] [i_23 + 2] [i_23 - 1] [i_23])))))));
                    arr_78 [i_23] [0ULL] [i_16] [(short)5] [(short)5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_64 [(signed char)1] [(signed char)1] [i_22] [(signed char)1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_20 [i_23] [i_16] [i_22] [i_23] [i_16])));
                }
            }
            for (unsigned char i_24 = 0; i_24 < 10; i_24 += 2) 
            {
                arr_81 [(_Bool)1] = ((/* implicit */unsigned long long int) (~(arr_55 [i_24] [i_16] [i_0])));
                var_51 -= ((/* implicit */signed char) (-(2096220018739211042LL)));
                arr_82 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_54 [i_24] [(short)7] [i_16] [i_0])) : (((/* implicit */int) arr_54 [i_16] [i_16] [i_16] [i_16]))));
                /* LoopSeq 2 */
                for (long long int i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    var_52 = ((/* implicit */unsigned short) var_11);
                    var_53 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_16] [i_25])) : (((/* implicit */int) arr_50 [i_0] [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 0; i_26 < 10; i_26 += 2) 
                    {
                        var_54 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)61))));
                        arr_87 [i_0] [i_16] [i_24] [i_25] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_25])) ? (((/* implicit */int) arr_40 [i_26] [i_25] [i_24] [i_16] [i_16] [i_0])) : (((/* implicit */int) (unsigned char)14))))) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (692202239411339298LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_0] [i_16] [i_25])))));
                        arr_88 [i_0] [i_16] [i_24] [i_25] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_79 [i_24] [i_24]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned short) ((int) arr_5 [i_16] [i_25] [i_16]));
                        var_56 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_37 [i_0] [i_16]) << (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (~(2076637936012491737LL)))) : (arr_66 [i_25] [i_25] [i_25] [i_25])));
                        arr_91 [i_0] [i_0] [i_0] [2U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_1 [i_16])) ? (var_2) : (arr_13 [i_24]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                    }
                }
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    arr_95 [i_0] [(_Bool)1] [8U] [5U] = var_1;
                    var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_93 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_0]))) : (arr_61 [i_0] [(_Bool)1] [i_24])));
                    arr_96 [i_0] [i_0] &= ((unsigned int) (~(arr_9 [i_0] [i_16] [i_16] [i_28])));
                }
            }
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            var_58 = ((/* implicit */long long int) max((var_58), (((/* implicit */long long int) var_4))));
            var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) var_3))));
            var_60 *= ((/* implicit */signed char) ((arr_62 [i_29] [i_29] [i_29] [i_29]) * (((/* implicit */unsigned long long int) var_10))));
            var_61 ^= ((/* implicit */unsigned long long int) ((long long int) var_10));
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            arr_103 [i_30] = ((/* implicit */long long int) arr_79 [3ULL] [i_30]);
            arr_104 [(_Bool)1] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 144115188075855872ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) var_11)))));
            arr_105 [i_0] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) arr_50 [(short)7] [(short)9] [9ULL]))) : (((((/* implicit */int) var_1)) << (((/* implicit */int) arr_26 [i_0] [i_30]))))));
            arr_106 [i_0] [i_0] = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        var_62 = ((/* implicit */short) min((var_62), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (453401620U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440)))))))));
    }
    for (unsigned long long int i_31 = 0; i_31 < 18; i_31 += 2) 
    {
        var_63 += ((/* implicit */_Bool) (+(((arr_109 [i_31]) / (((/* implicit */int) arr_107 [i_31]))))));
        var_64 ^= ((/* implicit */_Bool) var_5);
        var_65 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) ((1240913172U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) var_5)))))) >= (((/* implicit */int) var_11))));
        var_66 = ((/* implicit */short) (unsigned char)70);
    }
    /* vectorizable */
    for (unsigned int i_32 = 3; i_32 < 14; i_32 += 2) 
    {
        arr_112 [i_32] [i_32] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (arr_109 [i_32])))) ? (var_3) : (((unsigned int) arr_107 [i_32]))));
        var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_110 [i_32] [i_32 + 1])) ? (((var_1) ? (arr_109 [i_32]) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_11))))));
        var_68 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) var_11)) - (15874)))))) ? (((/* implicit */int) ((-610141536) == (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)13137)) ? (((/* implicit */int) (unsigned short)61679)) : (var_10)))));
    }
    var_69 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)32751)), (4169980034U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-27868)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((var_9), (var_9)))))));
    var_70 = ((/* implicit */unsigned short) var_4);
}
