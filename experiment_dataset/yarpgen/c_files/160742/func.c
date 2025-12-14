/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160742
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        var_11 = (((!(((/* implicit */_Bool) arr_4 [i_0 + 1])))) ? (10826949419572422694ULL) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (10826949419572422694ULL))));
                        var_12 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) max((var_2), (arr_8 [i_3])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_12 [(_Bool)1] [i_3] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_11 [i_3 - 2] [i_3] [i_3 + 1] [i_3 - 1]), (arr_11 [i_3 - 2] [i_3] [i_3 + 1] [i_3])))), (((unsigned long long int) arr_11 [i_3 - 2] [i_3] [i_3 + 1] [i_3]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 4; i_4 < 19; i_4 += 2) 
                    {
                        var_13 ^= ((short) ((unsigned int) ((unsigned long long int) (_Bool)0)));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), ((-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 182825522U)) : (7619794654137128920ULL)))))));
                            var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_17 [i_0] [i_1] [i_2] [i_0 + 2] [i_5])))), (0ULL)));
                            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((15837135108800181004ULL) / (((/* implicit */unsigned long long int) var_0)))) * (((/* implicit */unsigned long long int) arr_17 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_4 - 3] [5ULL]))))) ? ((+(((/* implicit */int) arr_0 [i_0 + 1])))) : ((+(((/* implicit */int) var_1))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 *= ((/* implicit */long long int) (_Bool)1);
                            arr_21 [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (~(4112141773U)));
                            arr_22 [i_0] [i_0 + 1] [13LL] [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4 - 3] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_2])))))))) ? (((((/* implicit */unsigned long long int) arr_6 [(unsigned char)1] [i_4 - 2] [i_4 + 1] [i_4 - 1])) * (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 + 1] [i_4 - 3]))))))));
                            arr_23 [i_0] [i_1] [i_2] [i_2] [8LL] [i_6] [(unsigned char)4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_4)))) ? (max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0 + 1])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_27 [i_0] [5LL] [4LL] [i_0] [i_0] [12LL] = ((/* implicit */_Bool) min(((-(var_7))), (((/* implicit */unsigned long long int) ((((unsigned int) arr_4 [i_4])) - (arr_7 [i_0 + 2] [i_4 + 1] [i_2]))))));
                            var_18 *= ((/* implicit */signed char) min((((((long long int) var_1)) & (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), (arr_8 [i_0])));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_19 -= ((/* implicit */_Bool) (((+(((((/* implicit */int) arr_24 [(_Bool)1] [i_2] [i_1] [i_0 + 2] [i_0])) ^ (((/* implicit */int) (unsigned short)64)))))) - (max((max((((/* implicit */int) (_Bool)0)), (arr_13 [i_8] [i_2] [i_2] [i_1] [i_1] [i_0]))), (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0 + 2])) != (arr_17 [i_8 - 1] [i_2] [i_1] [i_0] [i_0]))))))));
                        var_20 = max(((((_Bool)0) ? (((((/* implicit */_Bool) (unsigned short)45568)) ? (12966825390211880804ULL) : (((/* implicit */unsigned long long int) var_10)))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_4 [i_0 + 2])) >> (((var_0) - (3619575983U)))))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        arr_33 [i_9] [(unsigned short)16] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-20)))) - (min((((((/* implicit */_Bool) 2802552816U)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) arr_28 [i_0 + 1] [i_0 + 2])))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59954))) - (max((((/* implicit */unsigned long long int) ((arr_7 [i_0 + 1] [i_0] [17U]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-20620)))))), ((+(var_9))))))))));
                    }
                    for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) (+((((+(arr_1 [i_0]))) - (max((117382780U), (((/* implicit */unsigned int) (signed char)-19))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_23 -= ((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_10 + 2]);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_28 [i_1] [i_11])))) ? (arr_19 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -3273751535696120681LL)))))))));
                            var_25 += ((/* implicit */short) arr_34 [i_1] [1U] [i_10]);
                            arr_39 [i_0 + 1] [i_1] [i_10] [i_2] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_5 [i_1] [(short)3]);
                        }
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            arr_44 [i_10] [i_1] [i_10] [i_12] = var_1;
                            var_26 = ((/* implicit */unsigned short) min((((long long int) (-(1815173077U)))), (((/* implicit */long long int) arr_31 [i_10 + 2] [i_1]))));
                            var_27 ^= ((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) (unsigned short)65520))));
                        }
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_42 [i_10 + 2] [i_10] [i_10 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_4 [i_0])))) : (((/* implicit */int) var_5)))))))));
                        var_29 = ((/* implicit */unsigned int) arr_29 [i_0] [i_1] [i_1] [i_2] [i_10 + 1]);
                    }
                }
            } 
        } 
    } 
    var_30 |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59954))) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_5))))) : (((-8157327529516745276LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) % (((/* implicit */long long int) ((((((/* implicit */long long int) 2147483640)) != (-8091492374624759829LL))) ? ((-(((/* implicit */int) (short)24459)))) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (signed char i_13 = 2; i_13 < 16; i_13 += 1) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                var_31 += ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_14 [i_13] [i_13] [i_14])), (max((((long long int) arr_40 [12ULL] [i_14] [i_14])), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                arr_49 [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_17 = 3; i_17 < 14; i_17 += 1) 
                {
                    for (signed char i_18 = 0; i_18 < 16; i_18 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_19 = 3; i_19 < 15; i_19 += 2) 
                            {
                                var_32 = ((/* implicit */_Bool) ((unsigned short) min((arr_3 [i_19]), (((/* implicit */unsigned long long int) arr_16 [i_15] [(short)20] [i_15])))));
                                arr_63 [i_15] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */unsigned long long int) (short)-20598);
                                arr_64 [(signed char)6] [i_16] [(_Bool)1] [i_18] [i_19 - 1] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_43 [i_16] [i_19] [i_17] [i_18] [i_15] [i_17] [i_19]))))), (var_9)))));
                                arr_65 [i_15] [6ULL] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_17] [i_17 + 1] [i_17 - 2] [i_17 - 1] [(_Bool)1] [i_17] [i_17 + 2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)11)), (arr_15 [i_17] [i_17 + 1] [i_17] [i_17 - 1] [i_17 + 1] [i_17] [i_17 + 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_17] [i_17 + 1] [i_17] [i_17 - 1] [i_17])), (arr_15 [i_17] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17] [i_17]))))));
                                var_33 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((10826949419572422700ULL), (((/* implicit */unsigned long long int) arr_43 [i_18] [(unsigned short)2] [i_16] [i_17] [i_18] [i_19] [i_19]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 7619794654137128921ULL)) || (((/* implicit */_Bool) arr_36 [i_19 - 1] [i_19 + 1] [i_19] [i_19 - 2] [i_16]))))) : ((+(arr_2 [i_17 - 1])))));
                            }
                            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 2) 
                            {
                                var_34 *= ((/* implicit */unsigned char) 4734497389624554971ULL);
                                var_35 = arr_41 [i_15] [i_16] [i_17] [i_18];
                                var_36 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                                var_37 = ((/* implicit */unsigned short) ((unsigned long long int) (short)31506));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_21 = 3; i_21 < 13; i_21 += 2) 
                            {
                                var_38 = ((/* implicit */short) ((var_0) * ((+(arr_54 [i_21] [i_21])))));
                                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_17 + 2]))) : (arr_66 [i_16] [i_17 - 2] [i_17] [i_17 + 1] [i_17 + 2] [i_21 - 2]))))));
                            }
                            for (unsigned short i_22 = 0; i_22 < 16; i_22 += 2) 
                            {
                                arr_73 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_9 [(_Bool)1] [i_17 - 3] [i_15])))) || (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_18])), (arr_20 [i_15])))) || (((/* implicit */_Bool) max((arr_15 [i_22] [i_18] [i_17] [i_16] [21LL] [i_15] [(_Bool)1]), (((/* implicit */unsigned short) var_8)))))))));
                                arr_74 [i_22] [7ULL] [i_17] [i_16] [i_16] [i_16] [i_15] = ((/* implicit */_Bool) arr_26 [i_15] [i_16]);
                            }
                            arr_75 [i_15] [i_16] = ((/* implicit */signed char) ((unsigned long long int) arr_5 [10U] [i_15]));
                            var_40 *= ((/* implicit */signed char) min((((/* implicit */long long int) arr_71 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])), (max((((/* implicit */long long int) ((var_9) < (((/* implicit */unsigned long long int) arr_7 [i_15] [i_16] [i_17]))))), (arr_8 [21ULL])))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */long long int) (~(((unsigned long long int) 1731555584))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 16; i_23 += 2) 
                {
                    for (long long int i_24 = 1; i_24 < 15; i_24 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) var_10))));
                            arr_80 [i_16] [i_16] [i_16] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20302)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) : (((min((((/* implicit */unsigned int) (unsigned char)46)), (1815173074U))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7771)))))));
                            var_43 += ((/* implicit */unsigned int) (short)-31532);
                        }
                    } 
                } 
            }
        } 
    } 
    var_44 = ((/* implicit */long long int) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((1673166722) ^ (((/* implicit */int) (unsigned char)172))))))) : (min(((-(var_7))), (((/* implicit */unsigned long long int) var_0))))));
}
