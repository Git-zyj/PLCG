/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146274
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 663828402U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (var_14) : (((/* implicit */int) (short)-2694))))) : (arr_1 [i_0])));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (+(arr_5 [i_3 + 1] [i_3 - 1]));
                        arr_15 [i_0] [i_0] [(unsigned char)22] [i_2] [i_2] [i_3 + 1] = ((/* implicit */_Bool) ((unsigned int) arr_13 [i_3 + 1] [i_3 - 1] [i_3]));
                        arr_16 [i_2] = ((/* implicit */short) ((unsigned long long int) 16188823204647652083ULL));
                        var_18 = ((/* implicit */long long int) (signed char)(-127 - 1));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) 2257920869061899529ULL);
                    arr_25 [i_6] = ((/* implicit */unsigned int) (-((((_Bool)0) ? (((/* implicit */int) (short)-32738)) : (((/* implicit */int) (unsigned char)46))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                    {
                        var_20 |= ((/* implicit */unsigned long long int) ((16188823204647652096ULL) < (((2257920869061899524ULL) << (((((/* implicit */int) (unsigned char)84)) - (56)))))));
                        var_21 *= ((/* implicit */unsigned long long int) ((unsigned int) (short)-23963));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                    {
                        arr_31 [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2257920869061899528ULL) >> (((-9223372036854775801LL) - (-9223372036854775804LL)))))) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)171))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14489))) : (325249321U)));
                    }
                    for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        arr_34 [i_4] [i_5 - 1] [i_6] [i_5 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32764))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_39 [i_10] [i_9] [17ULL] [i_5] [i_4 + 2] = ((/* implicit */unsigned long long int) 1593809320);
                            arr_40 [i_4 + 1] [i_9] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((16188823204647652100ULL), (((/* implicit */unsigned long long int) ((16188823204647652087ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) ? (16188823204647652115ULL) : (((/* implicit */unsigned long long int) arr_9 [i_4] [i_9] [i_10]))));
                            var_23 = ((/* implicit */signed char) (!(((arr_21 [1ULL] [1ULL] [i_4 + 2]) > (((/* implicit */unsigned long long int) arr_5 [i_4 - 1] [i_5 + 2]))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            arr_44 [i_4] = ((/* implicit */unsigned short) min((((int) 13611443335192668815ULL)), ((~(((/* implicit */int) (unsigned short)5))))));
                            var_24 = min((((((/* implicit */_Bool) 8561593167788268643LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((signed char) 0U))))), (((/* implicit */int) arr_28 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [11U] [i_4 + 2])));
                            var_25 = ((/* implicit */unsigned char) max((arr_24 [i_4 - 1] [i_4 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9136365655656600634LL)) && (((/* implicit */_Bool) 1565247931)))))));
                        }
                        for (int i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            arr_48 [i_5] [i_6] = ((/* implicit */_Bool) var_4);
                            var_26 = ((/* implicit */signed char) 16188823204647652104ULL);
                            var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)89))))));
                            arr_49 [i_4] [i_5] [i_6] [i_9] [i_4] [i_9] [i_4 - 1] = ((/* implicit */unsigned long long int) max(((+(4294966272U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (short)-1837)) : (((/* implicit */int) (unsigned short)282)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_55 [i_4] [i_6] [i_14] = ((/* implicit */short) ((_Bool) (unsigned char)84));
                                arr_56 [9] [i_14] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 281474943156224LL)) > (arr_17 [i_5])));
                                var_28 = min((((/* implicit */unsigned long long int) 279223176896970752LL)), (2257920869061899519ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_57 [18ULL] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_4 + 2] [i_4 + 2])) ? (arr_5 [i_4 + 2] [i_4 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))))), (((/* implicit */long long int) 4294967293U))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 2; i_15 < 22; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                {
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */_Bool) 281054798U)) ? (0ULL) : (arr_33 [i_16] [i_15 - 2] [i_15 - 2] [i_4]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4114178043635804675LL)) ? (-9223372036854775792LL) : (((/* implicit */long long int) 627297439))))))))));
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 21; i_17 += 1) 
                    {
                        for (int i_18 = 0; i_18 < 23; i_18 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2631083970U)) & ((-(16188823204647652088ULL)))))) ? ((-(-3630980416650011005LL))) : (((/* implicit */long long int) ((int) (unsigned char)172)))));
                                arr_70 [i_4] [i_15] [i_16] [i_16] [i_18] = ((/* implicit */signed char) arr_22 [i_15 + 1] [i_15 + 1]);
                                var_31 += ((/* implicit */short) min(((~(((((/* implicit */_Bool) 3177144931U)) ? (18446744073709551614ULL) : (arr_26 [i_4] [i_4] [i_16] [i_15 - 2]))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31067))) - (arr_29 [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 1; i_19 < 22; i_19 += 2) 
                    {
                        for (long long int i_20 = 1; i_20 < 22; i_20 += 2) 
                        {
                            {
                                arr_75 [i_4] [i_15 + 1] [i_16] [i_19] [i_20 - 1] [i_4] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)61613))))), (arr_27 [i_19] [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1] [i_19 + 1]));
                                arr_76 [i_4 + 1] [i_19] [i_19] [i_19 - 1] [i_19 - 1] = ((/* implicit */unsigned int) -1914845311415769253LL);
                                var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_26 [i_4] [i_20 + 1] [i_16] [i_15 + 1]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((((/* implicit */_Bool) 8U)) && (((/* implicit */_Bool) 13LL)))))));
                                arr_77 [i_19] [i_15] [i_15] [i_19 - 1] [i_20] = ((/* implicit */signed char) max((min((4294967293U), (((/* implicit */unsigned int) (short)32767)))), ((~(arr_46 [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15 - 2] [i_19 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_21 = 2; i_21 < 19; i_21 += 4) 
    {
        arr_81 [i_21 - 2] [i_21 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_19 [i_21 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_21 - 2] [i_21 - 1]))) : (arr_26 [i_21 + 1] [i_21] [i_21] [i_21]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11663837994958344063ULL)))))));
        /* LoopNest 3 */
        for (unsigned char i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            for (long long int i_23 = 2; i_23 < 19; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                {
                    {
                        arr_89 [i_21 + 1] [i_22] [i_21 + 1] = ((/* implicit */unsigned short) ((((-506814612) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */unsigned long long int) -6)) : (0ULL))) - (18446744073709551610ULL)))));
                        var_33 -= ((/* implicit */int) var_12);
                    }
                } 
            } 
        } 
        arr_90 [(short)2] = ((/* implicit */unsigned long long int) min(((short)19170), ((short)-19171)));
        /* LoopNest 2 */
        for (unsigned int i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    arr_98 [11ULL] [i_21] = ((/* implicit */short) min((((/* implicit */long long int) ((arr_32 [i_21 - 2] [i_25] [i_21 - 2] [i_21 - 2]) % (((/* implicit */unsigned int) 506814619))))), (17592186044352LL)));
                    var_34 ^= ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)32737)));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_27 = 0; i_27 < 21; i_27 += 4) 
    {
        for (unsigned short i_28 = 0; i_28 < 21; i_28 += 1) 
        {
            {
                arr_106 [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17418725637223109001ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_27] [i_27] [i_27] [i_28])) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)103)), ((unsigned char)245))))))) : (((((/* implicit */_Bool) (-(3845358119139163621ULL)))) ? (((((/* implicit */_Bool) -8872583166262075194LL)) ? (arr_46 [i_27] [i_28] [i_28] [(signed char)4] [i_27] [i_28] [(unsigned short)22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (short)27194)) : (((/* implicit */int) (short)21345)))))))));
                /* LoopSeq 2 */
                for (long long int i_29 = 0; i_29 < 21; i_29 += 2) /* same iter space */
                {
                    arr_109 [13] [13] [i_29] = ((/* implicit */signed char) max((var_7), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_27])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (short)-17605))))) && (((/* implicit */_Bool) arr_20 [i_28]))))));
                    arr_110 [i_29] = ((/* implicit */short) min((((arr_54 [i_27] [i_27] [i_29] [i_29] [i_29]) & (arr_54 [i_27] [(signed char)8] [i_27] [i_29] [i_29]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_54 [i_27] [i_28] [i_27] [i_29] [i_29])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_30 = 0; i_30 < 21; i_30 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4128380178U)) ? (((22LL) | (7055060743824452971LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned short)63539)) : (((/* implicit */int) (short)-19171))))))))));
                        var_36 = ((/* implicit */short) 5865026508327447264LL);
                        var_37 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_102 [(short)9])) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) arr_71 [i_27] [i_27] [i_29] [i_27]))))));
                    }
                    for (short i_31 = 0; i_31 < 21; i_31 += 2) 
                    {
                        var_38 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) 12434929778963675372ULL)) ? (((/* implicit */unsigned long long int) 1803241056U)) : (arr_26 [i_27] [i_27] [i_27] [i_27]))) == (((/* implicit */unsigned long long int) max((arr_27 [17U] [i_28] [i_28] [i_29] [19LL] [17U]), (var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)14066)) : (((/* implicit */int) arr_68 [i_27] [i_27] [i_27]))))) < (arr_10 [i_27] [i_28] [i_29] [i_31]))))) : (min((((/* implicit */unsigned long long int) arr_74 [i_29])), (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (4817169454134937305ULL)))))));
                        arr_116 [i_28] [10U] &= ((/* implicit */unsigned char) ((min((((/* implicit */int) ((((/* implicit */_Bool) 288230376151580672LL)) && (((/* implicit */_Bool) 4U))))), (min((var_13), (((/* implicit */int) arr_52 [i_27] [0] [(short)4] [i_27] [i_27])))))) <= (((/* implicit */int) ((((((/* implicit */_Bool) arr_58 [i_27] [22ULL] [i_31])) ? (var_14) : (arr_50 [i_27] [i_27] [i_27] [i_31]))) < (((/* implicit */int) ((signed char) arr_115 [i_31] [i_31] [i_31] [i_31]))))))));
                    }
                }
                for (long long int i_32 = 0; i_32 < 21; i_32 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-30187)) / (((/* implicit */int) arr_117 [i_28])))) << (((arr_101 [i_32]) - (6739975383060554550LL)))));
                    arr_119 [i_27] [i_28] [i_32] = ((/* implicit */unsigned int) arr_59 [i_27]);
                    var_40 = ((/* implicit */unsigned int) ((long long int) max((((((/* implicit */_Bool) 17432744914084886558ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17335))) : (17269667299798826788ULL))), (((/* implicit */unsigned long long int) (signed char)3)))));
                }
            }
        } 
    } 
}
