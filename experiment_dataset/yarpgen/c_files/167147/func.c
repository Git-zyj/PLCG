/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167147
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */int) ((((((/* implicit */_Bool) 2177400509157280101LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (4691957287426105930LL))) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                var_12 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [11] [i_1] [(signed char)9]))) : (((long long int) arr_5 [i_0] [i_1] [i_1])))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_13 ^= (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)6557)) : (((/* implicit */int) (signed char)-1))))) == (((arr_3 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (((int) ((((/* implicit */_Bool) 474253543052017999ULL)) ? (-2177400509157280130LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35833)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) 0ULL)) ? (748509558963579394LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-23)), (2147483642)))), (4294967289U))));
                            arr_16 [12LL] [i_2] = ((/* implicit */unsigned short) ((((-2177400509157280134LL) + (9223372036854775807LL))) << (0U)));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2]))) != (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_2] [i_5])), (957940136U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)14356)) : (((/* implicit */int) (short)-14357))))) : (((2177400509157280136LL) / (var_8))))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    arr_21 [i_2] [(unsigned short)7] [(short)17] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_10 [i_2] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_10 [i_2] [i_6 - 2] [10]))))) + (2177400509157280129LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_29 [i_2] [i_3] [i_3] [i_6] [i_7] [i_2] = ((/* implicit */unsigned short) arr_28 [i_8] [i_8] [i_8 - 1] [i_2] [(unsigned short)19]);
                                arr_30 [i_2] [i_2] [i_6] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) (-(max((-2147483633), (-752357646)))));
                                arr_31 [i_2] [11LL] = ((/* implicit */int) -2177400509157280130LL);
                            }
                        } 
                    } 
                }
                for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((long long int) ((((/* implicit */_Bool) (unsigned short)4417)) ? (arr_20 [i_2] [i_2] [i_2] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)11955), (((/* implicit */unsigned short) arr_12 [i_2] [i_3] [19U] [i_9])))))))))));
                    var_18 = ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_8 [i_2] [i_2])))))))));
                }
                for (int i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        var_19 = ((/* implicit */int) ((2556729813U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (380952827)))))))));
                        arr_40 [i_2] [i_2] = ((/* implicit */_Bool) (~(2U)));
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_43 [i_2] [i_3] [i_12] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_3] [i_10 + 1] [i_10 - 1])) + (2147483647))) >> (((15076327697794140836ULL) - (15076327697794140823ULL)))));
                        arr_44 [i_10] [i_2] [i_2] [i_10] [i_10] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)58830)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_33 [17U] [i_3] [i_3] [i_3]))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2] [6LL] [6LL])) ? (((/* implicit */int) var_0)) : (((-1807342426) | (((/* implicit */int) (signed char)0))))));
                        var_21 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_10 - 1] [i_10 - 1] [i_10 + 1]))));
                        var_22 = 4205357608U;
                    }
                    arr_45 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_23 [i_2] [0] [i_3] [i_3] [i_3]) - (((/* implicit */int) ((unsigned short) arr_24 [i_2] [(unsigned short)15] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) arr_10 [i_2] [i_3] [i_10])) + (((((/* implicit */_Bool) var_5)) ? (arr_13 [(unsigned char)4]) : (((/* implicit */int) arr_22 [i_2] [i_3] [i_3] [(unsigned short)9]))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 3; i_13 < 22; i_13 += 1) 
                    {
                        for (int i_14 = 1; i_14 < 23; i_14 += 1) 
                        {
                            {
                                var_23 = arr_33 [i_2] [i_2] [i_2] [(_Bool)1];
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned short)65535))) ? (((/* implicit */long long int) 2344541120U)) : (((9223372036854775806LL) / (((/* implicit */long long int) var_9)))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) arr_15 [12U] [12U] [i_2] [i_16]);
                            arr_56 [15U] [i_2] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [18] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
                            {
                                arr_59 [i_2] [i_2] [11LL] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_2]))) - (17870283321406128128ULL)))) ? (((int) (short)16352)) : ((+(((/* implicit */int) arr_38 [i_2] [i_2] [1LL] [i_2] [i_2] [i_2]))))));
                                var_26 &= ((/* implicit */long long int) 2119153953);
                                arr_60 [i_2] = ((/* implicit */unsigned char) (+(8388604LL)));
                                var_27 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)57663)) & (arr_13 [i_2])));
                                arr_61 [i_15] [i_2] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]) % (((/* implicit */int) (unsigned short)65535))));
                            }
                            for (long long int i_18 = 4; i_18 < 22; i_18 += 3) 
                            {
                                arr_64 [i_18] [i_2] [i_18 + 1] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1767220375)), (2177400509157280134LL)))) ? ((~(arr_57 [i_18 - 4] [i_18 - 4] [i_2] [i_18 - 4] [i_18 - 4]))) : ((-(arr_57 [i_18 - 3] [i_18 - 2] [i_2] [i_18 + 2] [i_18 - 2])))));
                                arr_65 [i_16] [i_16] [i_16] [i_2] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_34 [i_2] [i_15] [i_16]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (arr_46 [i_15] [i_15] [i_15] [2] [2]))), (arr_62 [i_3] [i_15] [i_15] [i_16] [i_16] [i_18 - 1] [i_18 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((((/* implicit */_Bool) arr_15 [8LL] [i_3] [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_32 [i_2] [i_2] [i_16] [i_18]))))))) : (((((/* implicit */_Bool) ((long long int) arr_54 [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((arr_12 [(unsigned short)11] [i_15] [i_15] [i_15]) ? (((/* implicit */int) (signed char)2)) : (2147483647)))) : (((unsigned long long int) (unsigned short)0))))));
                                var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */long long int) ((unsigned int) (_Bool)1))) / (((((/* implicit */_Bool) arr_9 [(signed char)3])) ? (3652684194587392553LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(signed char)12] [i_3] [5U] [(signed char)12]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)47143))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
