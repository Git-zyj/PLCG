/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179056
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
    var_11 = ((/* implicit */signed char) (+(((1628295492) - ((~(var_0)))))));
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */int) arr_1 [i_2]);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) (+(3497534000173106777LL)))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 1734647016);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3497534000173106777LL)) ? (2147483647) : (-59464309)));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_5 [i_4] [i_4] [i_4])))))), (min((min((var_7), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)16383))))))))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 379458354))));
                            arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((((/* implicit */int) (short)-6201)) + (2147483647))) >> (((var_0) - (32347771))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (var_4))))))) || (((/* implicit */_Bool) 3497534000173106780LL))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) -8265236949239525768LL);
                            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)56397))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) arr_14 [i_6] [i_3] [i_2] [i_0] [i_0])) - (18425))))))));
                            var_16 = (+(-777948815));
                            arr_26 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_6] [i_3] [i_0] [i_0] [i_0] [i_0])) ? (-8265236949239525752LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_3] [i_6] [i_6])))));
                            arr_27 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 8265236949239525767LL)) : (var_3))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        arr_31 [i_0] = ((/* implicit */signed char) min((1567021359U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
                        var_18 = max(((~(var_0))), (((((/* implicit */int) arr_2 [i_7] [i_1])) | (((/* implicit */int) arr_2 [i_0] [i_0])))));
                    }
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_8] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2001330033247325735LL) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_8]))))))) : ((((!(((/* implicit */_Bool) 15962985836885467980ULL)))) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (18446744073709551615ULL)))));
                        /* LoopSeq 4 */
                        for (short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(var_9))))));
                            arr_37 [i_1] [i_8] [i_2] [i_8] [i_9] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (!(((/* implicit */_Bool) 16777215)))))))) ? (((((/* implicit */_Bool) 1ULL)) ? (8ULL) : (((/* implicit */unsigned long long int) -1193604307)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))));
                        }
                        for (short i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)63)) ^ (-2147483641))) != ((-(((/* implicit */int) (unsigned char)255)))))))));
                            var_21 = ((/* implicit */unsigned char) var_1);
                            arr_40 [i_8] [i_8] = ((/* implicit */unsigned int) (((-(1ULL))) / (((/* implicit */unsigned long long int) var_8))));
                        }
                        for (int i_11 = 2; i_11 < 20; i_11 += 1) 
                        {
                            arr_43 [i_0] [i_8] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9922)) ? (((/* implicit */int) (signed char)-57)) : (-933702465)))) ? (var_3) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_8] [i_0] [i_8]))) : (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5836742852607768474LL)) ? (((/* implicit */unsigned long long int) -2037221709)) : (var_9)))) ? ((~(((/* implicit */int) (signed char)122)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (signed char)115)))))))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))) : (1ULL))))))))));
                            var_23 ^= ((/* implicit */unsigned long long int) ((17546921172552294583ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6202)))));
                        }
                        for (int i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_12] &= 0ULL;
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((10ULL) != (((/* implicit */unsigned long long int) var_7)))))) + (max((((((/* implicit */_Bool) (short)-6188)) ? (((/* implicit */unsigned long long int) 933702477)) : (16ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47891))))))))));
                            var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */long long int) 0)) : (-1LL)));
                            var_26 = ((/* implicit */int) (((!(((/* implicit */_Bool) (+(arr_4 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -942818067)) / (3312948374U)))) : ((+(((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))))))));
                            var_27 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 942818067)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_8] [i_0] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_12] [i_8] [i_12])))));
                        }
                    }
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)43)) ? (min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24180)) - (((/* implicit */int) (signed char)-123)))))));
                        var_29 = ((/* implicit */long long int) var_2);
                        arr_52 [i_13] [i_0] = ((/* implicit */unsigned short) var_5);
                        arr_53 [i_0] [i_13] [i_0] = ((/* implicit */unsigned long long int) (+(146335962)));
                        var_30 = ((/* implicit */long long int) (+((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_13] [i_1] [i_2] [i_13] [i_2] [i_2] [i_13]))) + (var_5)))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) min((var_8), (((((/* implicit */_Bool) var_6)) ? (min((var_8), (var_5))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_0)) : (6U)))))));
}
