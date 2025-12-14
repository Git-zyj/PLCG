/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179957
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)39423))))), (max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) (signed char)0))))))) || (((/* implicit */_Bool) arr_0 [i_1] [i_2]))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) 524287);
                }
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_4] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))));
                        arr_16 [i_0] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) (((-(-524288))) >> (((524277) - (524269)))));
                        arr_17 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_3] [i_4]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (short)20765))))) && ((!(((/* implicit */_Bool) arr_5 [i_1] [i_5]))))));
                        var_13 = ((/* implicit */unsigned long long int) (unsigned char)4);
                        arr_20 [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((11558962637220050760ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_3] [i_5]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (unsigned short)1)))))))));
                            var_14 *= ((/* implicit */unsigned char) arr_2 [i_0]);
                            arr_24 [i_0] [i_1] [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_4 [20ULL] [20ULL]))) - ((-(((/* implicit */int) arr_6 [i_0]))))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -524287)) ? (((/* implicit */int) arr_3 [i_7 + 2] [i_7 - 1])) : (((/* implicit */int) arr_3 [i_7 - 2] [i_7 - 1]))))));
                        arr_28 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */int) (((!(((((/* implicit */_Bool) (signed char)42)) || (((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_3] [i_3] [i_7])))))) ? (((((11762993764672159775ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(_Bool)1] [i_1] [i_1] [i_1] [(_Bool)1]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_7 + 1] [i_7 - 3])), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_7 + 1])) ? (arr_27 [i_0] [i_1] [i_3] [i_0] [i_0] [(signed char)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))))));
                        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_0]), (arr_19 [i_0] [i_0] [i_0] [1ULL])))))))));
                        var_17 = ((/* implicit */long long int) (((+(((/* implicit */int) ((17067487428323624515ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))))))) + (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)142)))) || (((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1] [i_1] [i_3] [i_7] [i_1])))))));
                    }
                    for (short i_8 = 3; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        var_18 = ((unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)4))))));
                        var_19 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_3] [i_8]);
                        arr_31 [i_0] [i_0] [i_0] [i_3] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_3] [(signed char)15] [i_3] [(signed char)15] [i_3])))))))), (arr_13 [i_8])));
                    }
                    arr_32 [i_3] [i_1] [i_1] [(short)6] |= ((/* implicit */int) ((unsigned long long int) arr_8 [i_1]));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) (signed char)-110))))) / (((/* implicit */int) arr_25 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) ((arr_35 [i_9] [i_1] [i_0]) ? (((/* implicit */int) arr_35 [i_9] [i_9] [i_9])) : (((/* implicit */int) (signed char)113))));
                            var_22 = ((/* implicit */int) (~((+(arr_33 [i_11] [(short)9] [(short)5] [i_0])))));
                        }
                        var_23 ^= ((/* implicit */unsigned long long int) ((int) (unsigned short)0));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((unsigned char) arr_38 [i_9] [i_9] [i_9] [i_9] [i_9]);
                        var_25 = ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((1692776550) == (((/* implicit */int) (_Bool)0))))) : (-524288));
                    }
                    var_26 += ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */int) arr_25 [18])) - (((/* implicit */int) (short)20765)))) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) >> (((/* implicit */int) arr_35 [i_0] [i_1] [i_13]))))));
                        arr_48 [i_0] [i_1] [i_1] [i_14] [i_14] = ((/* implicit */short) (+((~(((/* implicit */int) (unsigned char)172))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65522)) <= (((/* implicit */int) arr_47 [i_0] [i_0] [i_13] [3LL])))))));
                        arr_52 [i_0] [i_1] [i_13] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((((/* implicit */int) (signed char)0)), (arr_2 [i_0])))) ? ((-(((/* implicit */int) (unsigned char)246)))) : (((((/* implicit */int) arr_35 [i_0] [i_1] [i_13])) / (((/* implicit */int) (signed char)-34))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 4) 
                        {
                            var_29 = ((/* implicit */long long int) (_Bool)1);
                            arr_55 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((arr_39 [i_0] [i_1] [(_Bool)1]), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_15] [i_0])) ? (3ULL) : (576460752303423487ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_16]))))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6310080673317312590LL)) ? (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) < (-4224400204502644125LL)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_25 [i_16 - 1])))))));
                        }
                        for (short i_17 = 0; i_17 < 22; i_17 += 3) 
                        {
                            var_31 += ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_51 [i_0] [i_0] [i_0] [i_0]))) > ((~(((/* implicit */int) (unsigned char)89))))));
                            var_32 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_0] [i_1])) ^ (((/* implicit */int) arr_26 [i_0] [i_1] [i_13] [i_15] [i_17])))) >> (((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_17])), (arr_51 [i_0] [i_13] [i_15] [i_15]))) - (15992173680285987106ULL)))));
                            var_33 = ((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_35 [i_1] [i_15] [i_15])))) ^ (arr_4 [i_1] [i_13]))) + (9223372036854775807LL))) >> ((((+((~(((/* implicit */int) (_Bool)1)))))) + (25)))));
                            var_34 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) (+(arr_33 [i_0] [i_0] [i_0] [i_17])))) == ((-(arr_57 [i_17] [i_15] [i_13] [i_1] [i_0]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) (+(arr_40 [i_0] [i_1] [i_13] [i_18])));
                            arr_60 [i_18] [i_1] [i_13] [i_15] [i_13] [i_18] = ((/* implicit */int) (((-(arr_54 [i_0] [i_1] [i_1] [(_Bool)1] [i_15] [i_15] [i_18]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)52))) <= (arr_43 [(unsigned short)5] [i_18])))))));
                        }
                        arr_61 [i_15] [i_13] [11ULL] [i_1] [(_Bool)1] = arr_33 [i_0] [i_0] [i_13] [i_0];
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) 
                        {
                            {
                                var_36 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((9223372036854775807LL) | (((/* implicit */long long int) arr_64 [i_0] [i_1] [i_13] [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) ((unsigned char) 9223372036854775795LL)))))));
                                arr_67 [i_0] [i_1] [i_0] [i_19] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_20])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_19])))))));
                                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)32379)), (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196)))))))) ? (((((((((/* implicit */_Bool) (short)6601)) ? (arr_33 [i_0] [i_0] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (9223372036854775807LL))) >> (((((12388549042197364885ULL) - (17160958557363873991ULL))) - (13674334558543042499ULL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)6615)) : (((/* implicit */int) (short)-16807)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)0))))));
                        var_39 = ((/* implicit */unsigned long long int) min((min((arr_8 [i_1]), ((signed char)15))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (1402118563)))) && (((/* implicit */_Bool) arr_21 [i_21] [i_13] [i_1] [i_13] [i_1] [i_1] [i_0])))))));
                        var_40 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_27 [i_21] [i_1] [i_13] [i_1] [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_13] [i_21] [i_21] [(signed char)14] [i_0])), ((unsigned short)65535))))))), (arr_65 [i_21])));
                        var_41 = ((_Bool) (~(min((arr_40 [i_0] [i_0] [i_0] [(unsigned char)17]), (((/* implicit */unsigned long long int) (unsigned char)255))))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_73 [i_0] [i_0] = ((arr_72 [i_0] [i_0] [i_0] [i_13] [i_22]) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0]))) - (((((/* implicit */_Bool) arr_57 [2LL] [(signed char)7] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_13]))) : (18446744073709551588ULL))))));
                        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [11ULL] [i_22]))));
                    }
                }
                arr_74 [i_0] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (signed char)-92)), (((6ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))))))) == (arr_72 [i_0] [i_0] [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (long long int i_23 = 1; i_23 < 21; i_23 += 4) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_43 ^= max((arr_56 [i_0] [(signed char)6] [i_23] [i_24] [(unsigned short)6]), ((+(arr_51 [i_23] [i_23] [i_23] [i_23 + 1]))));
                            arr_82 [(unsigned char)0] [(unsigned char)0] = ((((/* implicit */_Bool) (+(arr_7 [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23 + 1])))) && (((/* implicit */_Bool) max((arr_7 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_24]), (arr_7 [i_23 - 1] [i_23 + 1] [i_23 + 1] [i_23 + 1])))));
                            /* LoopSeq 3 */
                            for (signed char i_25 = 0; i_25 < 22; i_25 += 4) /* same iter space */
                            {
                                arr_85 [i_0] [i_1] [15ULL] [15ULL] [i_24] [i_24] [15ULL] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_23 + 1] [i_0] [7ULL] [7ULL])) ? (((/* implicit */int) arr_41 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) - (9223372036854775807LL))) >= ((-(((arr_12 [(signed char)21] [i_23] [(signed char)21] [i_24]) & (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_23] [i_24])))))))));
                                var_44 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                                var_45 = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (10969510900916811839ULL)))));
                            }
                            for (signed char i_26 = 0; i_26 < 22; i_26 += 4) /* same iter space */
                            {
                                var_46 *= ((/* implicit */short) 2728825942672551086ULL);
                                var_47 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_81 [i_23 - 1] [i_23 + 1] [i_23 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_81 [i_23 - 1] [i_23 + 1] [i_23 + 1]))))) | (min((((((/* implicit */_Bool) arr_33 [i_0] [15] [i_24] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0]))) : (18446744073709551607ULL))), (((/* implicit */unsigned long long int) arr_35 [i_1] [7] [i_1]))))));
                            }
                            for (signed char i_27 = 0; i_27 < 22; i_27 += 4) /* same iter space */
                            {
                                arr_92 [i_0] [i_0] [i_23] [i_24] [i_24] |= ((/* implicit */_Bool) (signed char)85);
                                var_48 -= ((/* implicit */_Bool) (((((+(arr_50 [i_0] [i_1] [18ULL]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))))) >> (((arr_72 [i_23] [i_23 - 1] [i_23 - 1] [i_23 + 1] [i_23]) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-4351973096512325874LL))))))));
                                arr_93 [i_0] [18ULL] [i_23] [i_24] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-6601))))) ? (((((((/* implicit */int) arr_6 [i_0])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_42 [(short)20] [i_23] [i_23 - 1] [i_24]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)6615)) <= (((/* implicit */int) arr_42 [i_0] [i_0] [i_24] [i_0]))))) : (((/* implicit */int) (_Bool)0))));
                                var_49 *= ((/* implicit */short) min((max((((/* implicit */int) (signed char)76)), (1457483679))), (((/* implicit */int) (((-(arr_78 [i_23] [i_24] [i_24]))) != ((-(15728061426000692289ULL))))))));
                            }
                        }
                    } 
                } 
                var_50 *= ((/* implicit */short) arr_86 [i_1] [i_1] [i_1] [16LL] [i_0]);
            }
        } 
    } 
    var_51 -= ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_2))));
}
