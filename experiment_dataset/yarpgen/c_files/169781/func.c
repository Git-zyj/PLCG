/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169781
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
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) var_13);
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((3414957699765476313ULL), (((/* implicit */unsigned long long int) (signed char)127))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59243))) : (((long long int) var_5)))))));
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), ((~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-120)) + (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 524287ULL)) ? (var_7) : (1068737615520823262ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -29LL))))))))));
        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(0LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */int) arr_2 [i_0])))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (-26LL)));
    }
    for (int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) - ((((_Bool)0) ? (15553239112088417990ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33)))))))) ? (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (short)32760)))))) : (var_12)));
            var_21 *= (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2 - 1]))) : (var_12))));
            var_22 = ((/* implicit */long long int) max((var_22), (8589934591LL)));
        }
        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-127))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)111))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (936729858U))))))))));
                /* LoopSeq 4 */
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    arr_18 [i_2] [i_6] [i_6] [i_2 - 1] [i_2 - 1] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6])))))), (4260169264U)));
                    arr_19 [i_2 + 1] [i_2 + 1] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) (_Bool)0);
                    var_25 ^= ((/* implicit */int) var_10);
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_26 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)32754))))), (max((281474976710655ULL), (((/* implicit */unsigned long long int) -1LL))))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (+(-14LL))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_27 [i_4 - 1] [(unsigned char)5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) arr_12 [i_2 + 1]))) >= ((-(arr_20 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_2 + 1] [i_2 - 1])))));
                        arr_28 [i_2 + 1] [(_Bool)1] [i_2] [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) 1571460246U);
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0LL)) % (var_7))))));
                        var_29 -= ((/* implicit */unsigned int) min((((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (arr_5 [i_2 - 2])));
                        var_30 = var_7;
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_34 [i_7] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_8 [i_2] [i_2] [i_2 + 1])));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) 11U))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        var_32 = (_Bool)1;
                        var_33 = ((/* implicit */signed char) min((3361165662U), (((/* implicit */unsigned int) (unsigned char)163))));
                        arr_37 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1] = ((/* implicit */signed char) var_1);
                        arr_38 [i_2 - 2] = ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2]))));
                        arr_39 [i_2 - 2] = ((/* implicit */unsigned char) var_12);
                    }
                    var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) (signed char)7)) ? (5116953196274369844LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))))) : (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_7] [i_2])) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (unsigned short)28081))))))))));
                }
                for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    arr_43 [i_2] [(signed char)1] [i_4] [i_5] [i_4] [i_12] = ((/* implicit */_Bool) ((unsigned int) (+(((((/* implicit */_Bool) 1006632960)) ? (((/* implicit */unsigned long long int) 5116953196274369843LL)) : (var_5))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned int) (signed char)127);
                        var_36 = ((/* implicit */unsigned short) ((-5116953196274369853LL) % (((((/* implicit */_Bool) (short)4095)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) (+(3361165665U))))))));
                        var_37 = ((/* implicit */short) (((~(5116953196274369846LL))) % (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_38 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)-32761)))) * ((-(((/* implicit */int) ((short) 3043594498U)))))));
                    }
                    arr_46 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))) ? (arr_0 [i_4 - 1]) : (((/* implicit */long long int) 11U))))) : (((((/* implicit */unsigned long long int) var_15)) / (var_10))))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_51 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [11ULL] [i_2 - 1] [i_4 - 1] [11ULL] [0LL])) & (((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_40 = ((/* implicit */int) (~(((1202745914U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 4294967295U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31796)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) : (13224569637940918425ULL)));
                        arr_54 [i_2] [i_15] [i_14] [i_14] = ((/* implicit */long long int) var_11);
                    }
                }
            }
            var_42 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) max((var_11), ((_Bool)1)))), (((long long int) (_Bool)0))))));
        }
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            arr_57 [i_16] = ((_Bool) ((min((((/* implicit */unsigned long long int) arr_49 [i_16] [i_2] [i_2 - 1] [i_2])), (15867120852028057923ULL))) - (((/* implicit */unsigned long long int) 9223372036854775807LL))));
            arr_58 [i_2 - 1] [i_16] [i_16] = ((/* implicit */int) min((-5116953196274369868LL), (((/* implicit */long long int) -1649991113))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    {
                        var_43 += ((/* implicit */signed char) var_6);
                        var_44 *= ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
                        arr_67 [i_18] [i_17] [i_16] [i_17] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_60 [i_17])), (var_15))), (max((((/* implicit */unsigned int) var_1)), (arr_56 [i_18])))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        var_45 = 3361165642U;
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned char) (-(min((((unsigned long long int) arr_32 [i_16] [i_16] [i_16] [(short)7] [i_16] [i_16])), (((/* implicit */unsigned long long int) -4464371976060216214LL))))));
        }
        for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            var_47 += ((/* implicit */_Bool) ((((arr_53 [i_2] [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1] [10U]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2 + 1] [i_2] [i_2 - 1])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)-12)))))) % (((unsigned long long int) 18446744073709551590ULL)))) : ((((+(2013265920ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13224569637940918428ULL)) ? (9223372036854775807LL) : (arr_61 [i_19]))))))));
            arr_70 [i_19] = ((/* implicit */short) ((long long int) max((-5044904115117416184LL), (((/* implicit */long long int) var_4)))));
        }
        var_48 = ((/* implicit */unsigned char) (-(((unsigned int) arr_17 [i_2 + 1] [i_2]))));
    }
}
