/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157516
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1640646250)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1360)))));
        var_13 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((1640646247) >> (((((/* implicit */int) arr_0 [i_0])) - (214)))))) : (((/* implicit */unsigned int) ((1640646247) >> (((((((/* implicit */int) arr_0 [i_0])) - (214))) + (174))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)96)) ^ (686568857)));
                    var_15 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)153)) >> (((arr_3 [i_2] [i_1] [i_2 + 1]) - (12175077266502787239ULL)))));
                    var_16 = ((/* implicit */short) ((26ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                var_17 = ((((/* implicit */_Bool) (-(1486296120U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64)))))) : (var_9));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned int) -1234103267094232665LL);
                            arr_17 [i_0] [i_0] [i_4] [0] [i_0] [i_0] [i_0] = 1640646247;
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 - 1] [i_6 + 4] [i_6] [i_6 + 1] [i_6 + 3]))) | (var_2)));
                        }
                    } 
                } 
                var_20 *= (short)508;
            }
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_3] [i_3] [i_0] [i_0] [i_0]))));
        }
        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) min((var_22), (var_0)));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) 249742309U);
                            var_24 = ((/* implicit */int) ((18446744073709551600ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))));
                            var_25 = ((/* implicit */_Bool) ((arr_13 [i_0] [(short)3] [i_7 - 1] [i_7 + 1]) | (((/* implicit */int) var_11))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(var_8))))));
                            arr_27 [i_7] [i_7 - 1] [3LL] [i_0] [i_7] [i_7 + 1] [3LL] = ((/* implicit */unsigned char) ((unsigned int) (-(-1640646248))));
                        }
                    } 
                } 
            }
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
            {
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((var_1) - (3933633115U))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 13; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        {
                            var_27 = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_28 [i_7 + 1] [i_12 - 1] [i_11])) : (((/* implicit */int) (unsigned char)216)));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_14 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_0])) : (((/* implicit */int) arr_14 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_0]))));
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_14] [i_0] [i_7] [i_0]))))) : (18446744073709551614ULL)));
                }
                arr_38 [(short)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_8) > (var_9)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_7] [i_11] [i_11])))))));
            }
            for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)95)))))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 4; i_16 < 14; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) (-(15593860442236163980ULL)));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) % (13070912153701777203ULL)));
                            var_34 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74))))));
                            var_35 += ((/* implicit */short) -1640646259);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_18 = 3; i_18 < 14; i_18 += 2) 
                {
                    var_36 = ((/* implicit */unsigned char) (signed char)107);
                    arr_51 [(short)4] [(short)4] [i_0] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) (-(8388592U)));
                    var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_6)) | (arr_5 [i_7 + 1] [0LL] [i_18 - 3] [(_Bool)1]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 2) 
                    {
                        arr_54 [i_0] [i_0] [i_15] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-13306);
                        var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)20))));
                    }
                    for (signed char i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33035)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)69))))) ? (4045224987U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9905)))));
                    }
                    for (short i_21 = 0; i_21 < 15; i_21 += 2) 
                    {
                        var_41 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44004))) == (((18446744073709551615ULL) << (((arr_26 [i_21]) + (5409509369964025334LL))))));
                        var_42 = ((/* implicit */unsigned long long int) -1003208684830354725LL);
                    }
                }
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 15; i_23 += 2) 
                    {
                        arr_65 [i_22 - 1] [i_22 - 1] [(unsigned short)5] [(unsigned short)5] [i_22] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)152))));
                        arr_66 [10U] [i_0] [i_15] [i_23] [i_15] [i_7 + 1] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-90))));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((var_0) + (333600335038561171LL)))));
                    }
                    arr_67 [i_0] [(unsigned char)6] &= (~(((/* implicit */int) (_Bool)1)));
                    var_44 = ((/* implicit */unsigned char) (~(1605791215)));
                    arr_68 [i_0] [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (signed char)90)) ? (var_5) : (var_2)))));
                }
                var_45 = ((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 15; i_24 += 2) 
                {
                    for (short i_25 = 0; i_25 < 15; i_25 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */short) ((((/* implicit */int) arr_47 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1])) < (((/* implicit */int) (signed char)42))));
                            arr_73 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= (((((/* implicit */_Bool) 18446744073709551579ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))));
                        }
                    } 
                } 
            }
            arr_74 [i_0] [i_7] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
            arr_75 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_5)))));
        }
    }
    var_47 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-36))));
}
