/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156071
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2945175607502881044LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3841))));
                        var_16 = ((/* implicit */_Bool) var_13);
                        arr_15 [i_3] [i_4] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((4294967295U) << (4U))));
                        var_17 = ((/* implicit */unsigned char) ((9223372036854775807LL) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_10 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)0)))))));
                        arr_16 [i_1] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)13781)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2413085328U))))) : (((/* implicit */int) var_11))));
                    }
                    for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0]))))) + (((/* implicit */int) arr_18 [i_2] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 3]))));
                        arr_19 [i_0] [i_0] [i_3] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (25U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26856)))));
                        arr_20 [i_3] [i_3] = ((/* implicit */unsigned int) arr_17 [i_5] [i_3] [i_2] [i_1] [i_0]);
                        arr_21 [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) arr_8 [i_5 + 1]));
                        var_19 = (i_3 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) arr_11 [(unsigned char)9] [i_3] [i_3] [i_5 + 3] [i_3] [i_5 + 1])) << (((var_12) - (3814325923U)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [(unsigned char)9] [i_3] [i_3] [i_5 + 3] [i_3] [i_5 + 1])) << (((((var_12) - (3814325923U))) - (1U))))));
                    }
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((_Bool) (short)-26849)))));
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((((1477332361U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))))) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171)))))));
                        var_22 = ((/* implicit */unsigned long long int) ((arr_9 [i_3 - 2] [i_3] [i_3]) || (arr_9 [i_3 - 3] [i_3 - 3] [1LL])));
                    }
                    for (short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_7] [i_7] [i_2] [i_2] [(_Bool)1] [(unsigned char)5] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((13364411203103137344ULL) - (13364411203103137335ULL)))))) ? (5082332870606414282ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_1] [i_1] [i_3 + 2]))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(-4467301159696251062LL))))));
                        arr_28 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_3] [i_3] [i_3 + 2] [i_3 - 1]))) - (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0] [9LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) != (arr_32 [i_0] [i_0] [i_0])));
                        var_25 = ((/* implicit */unsigned char) ((arr_14 [i_0] [i_3 - 1] [i_2] [i_3 - 1] [i_8] [i_1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))));
                        arr_33 [i_3] [i_3] [i_2] [i_3 - 3] [i_3] = ((arr_30 [i_1] [i_3] [i_2] [17ULL] [i_3 + 1] [i_8] [i_8]) < (arr_30 [i_0] [i_3] [i_3] [(_Bool)1] [i_3 + 1] [i_8] [i_8]));
                        var_26 = ((/* implicit */long long int) ((arr_2 [i_3 + 2] [i_3 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U))))));
                        var_27 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)26844))));
                    }
                    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_36 [i_3] [5ULL] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */short) ((arr_9 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_9 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_9 [i_3 - 3] [i_1] [i_2]))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
                    }
                }
                for (unsigned char i_10 = 3; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 2) 
                    {
                        arr_41 [i_1] [i_1] [i_2] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3546))) != (13364411203103137333ULL)));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_29 [(_Bool)1] [i_1] [i_2] [i_10]))));
                    }
                    arr_42 [(_Bool)1] [i_10] [i_2] [i_10] = ((/* implicit */_Bool) var_10);
                    var_30 *= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_22 [i_10] [(short)8] [i_10 - 1] [i_10 - 2])) ? (arr_22 [i_10] [i_10 - 2] [i_10] [i_10 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))))));
                    var_31 = ((/* implicit */_Bool) max(((+(6630470954721355281ULL))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)26669))) >= (-2632120992271789290LL)))))));
                    var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(2632120992271789315LL)))) ? (min((((/* implicit */unsigned int) var_14)), (3404698852U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-26856), ((short)(-32767 - 1)))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8))))) <= (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_1)))))))))));
                }
                for (unsigned int i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 2; i_13 < 17; i_13 += 4) 
                    {
                        arr_47 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2357654700U)) ? (4946969712911467107LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_44 [i_0] [i_12]) >= (((/* implicit */unsigned long long int) var_4))))))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((unsigned int) arr_38 [i_0] [i_1] [i_2] [i_12 + 1] [i_13] [i_12])) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3))))));
                        var_34 = ((/* implicit */short) ((((unsigned int) var_14)) >> (((((/* implicit */int) arr_17 [i_13 + 1] [i_13] [i_13] [i_13] [i_13 - 1])) - (83)))));
                        arr_48 [i_13] [i_12] [i_12] [i_12] [i_1] [i_0] = ((/* implicit */short) (-(((unsigned long long int) (_Bool)1))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */long long int) (_Bool)1);
                        var_36 = ((/* implicit */_Bool) var_10);
                        arr_51 [i_12] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (13364411203103137308ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_22 [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    for (short i_15 = 1; i_15 < 15; i_15 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((long long int) max((9223372036854775807LL), (((/* implicit */long long int) ((unsigned char) 4813359234368334101LL)))))))));
                        arr_56 [i_0] [i_12] [i_2] [i_12] [i_12] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) 13364411203103137344ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) : (11816273118988196355ULL)))));
                    }
                    for (long long int i_16 = 3; i_16 < 17; i_16 += 4) 
                    {
                        arr_61 [i_12] [i_2] [i_16 - 1] = ((unsigned long long int) (~(((/* implicit */int) (short)-20891))));
                        var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                        var_39 -= ((/* implicit */unsigned long long int) arr_26 [i_12] [i_12] [i_1]);
                    }
                    var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                    arr_62 [i_0] [i_1] [i_2] [(unsigned char)2] [(unsigned char)2] &= ((/* implicit */short) (-((+(((/* implicit */int) arr_11 [i_12] [i_1] [i_12 - 1] [i_12 - 1] [(unsigned char)8] [i_1]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_66 [i_0] [i_0] [i_12] [i_0] = ((4813359234368334117LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207))));
                        arr_67 [i_17] [i_12] [i_2] [(unsigned char)7] [i_12] [i_0] = ((/* implicit */_Bool) var_7);
                        arr_68 [i_12] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) (((_Bool)1) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) | (((long long int) 2601956187081710685LL)))));
                        arr_69 [i_12] [i_0] [i_0] [i_12 - 1] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 5082332870606414257ULL)) ? (4294967281U) : (220244763U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)15219)))))))) && (((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9))))) < (((/* implicit */int) ((short) var_9)))))));
                        var_41 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_52 [i_17] [i_12 - 1] [i_2] [i_1] [i_0]))) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_11)))));
                    }
                }
                var_42 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_1))))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)61))) - (2632120992271789290LL)))));
                arr_70 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_1] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_46 [i_0])) : (((/* implicit */int) ((short) var_5)))))) ? (max((((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) : (18446744073709551610ULL))), (((/* implicit */unsigned long long int) arr_23 [i_2] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((arr_29 [i_0] [i_1] [i_0] [i_1]) + (8223595001110603861LL)))))) ? (((-4813359234368334119LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))))) : (arr_31 [i_2] [i_2] [(unsigned char)6] [i_2] [i_2] [i_2]))))));
                arr_71 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (_Bool)1)), (-2632120992271789290LL))), (((/* implicit */long long int) ((((/* implicit */int) ((0ULL) == (5082332870606414268ULL)))) <= (((/* implicit */int) arr_58 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1])))))));
            }
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
            {
                arr_74 [i_0] [(short)9] [12U] [i_0] = ((/* implicit */_Bool) arr_43 [i_18] [i_1] [i_0] [i_18]);
                var_43 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [(unsigned char)0] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0]))) : (arr_26 [i_1] [i_1] [i_18]))) : (((((/* implicit */_Bool) (unsigned char)111)) ? (8743345066973778564LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_77 [i_19] [i_1] [i_19] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_72 [i_0] [i_0] [i_1] [i_19])) + (((/* implicit */int) arr_64 [i_0] [i_19] [i_19] [i_0] [i_0] [i_1] [i_19]))))) && (((/* implicit */_Bool) (-(arr_52 [i_0] [i_1] [i_1] [i_1] [i_1])))))));
                var_44 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) max((5082332870606414276ULL), (((/* implicit */unsigned long long int) var_11))))))));
                arr_78 [i_0] [i_1] [i_19] [i_19] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            }
            for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
            {
                var_45 = ((/* implicit */long long int) max((var_45), ((-(2717792603135343944LL)))));
                arr_83 [i_0] [i_0] [i_1] [i_0] = (!(((((/* implicit */_Bool) 4294967285U)) && (((/* implicit */_Bool) 4294967282U)))));
                arr_84 [i_0] [i_1] [i_0] [i_20] = ((/* implicit */unsigned char) var_6);
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))), (var_3)))) < (((arr_45 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))));
            }
            var_47 = ((/* implicit */unsigned char) var_11);
            var_48 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -2638907742303745269LL))))) ? (max((2598902625U), (((/* implicit */unsigned int) (short)-21451)))) : (var_4))), (((/* implicit */unsigned int) ((unsigned char) (-(7151239640188104477LL)))))));
        }
        arr_85 [i_0] [i_0] = ((/* implicit */unsigned int) min((arr_45 [i_0]), (((4522749898931277996ULL) != (((/* implicit */unsigned long long int) 7U))))));
        arr_86 [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)6191))))));
        arr_87 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)31938)) || (((/* implicit */_Bool) 14U)))))));
    }
    var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) var_6))));
    var_50 &= ((/* implicit */_Bool) var_14);
    var_51 = (~(var_12));
}
