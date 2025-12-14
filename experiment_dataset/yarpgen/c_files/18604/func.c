/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18604
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (var_1)));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 1984358745U)) && (((/* implicit */_Bool) (short)3095))))) >> (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)42516)))) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1 - 2] [i_2] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_8 [i_1] [i_0] [i_1 + 2] [i_1 - 1] [i_1])), (var_6)))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [(unsigned short)7])) ? (11307803399775043639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [(short)1] [i_1 + 2] [i_1 + 2] [i_1])))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? ((~(((/* implicit */int) (unsigned short)23020)))) : (((/* implicit */int) (unsigned short)53732))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_1] [i_4])) && (((/* implicit */_Bool) arr_4 [i_1])))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_17)), (arr_11 [i_2] [i_2] [5U] [i_2] [i_2])))) ? (arr_1 [i_1 + 1] [i_4 - 3]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42515)) >> (((((/* implicit */int) (short)13317)) - (13311))))))))));
                            arr_15 [i_1] [i_3] [i_4 - 3] = ((((arr_3 [i_0] [i_4] [(short)5]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23019))))) & (((unsigned int) var_7)));
                            arr_16 [i_4] [i_4] [i_1] [i_4 - 1] [i_4 - 2] = ((/* implicit */unsigned char) max((min((((/* implicit */int) var_0)), (((((((/* implicit */int) (short)-13322)) + (2147483647))) >> (((((/* implicit */int) var_16)) - (19437))))))), (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [(short)1] [i_0] [i_0])))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)13334))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42522))) & (arr_7 [i_3])))))) ? (min((((/* implicit */long long int) min((var_18), (((/* implicit */unsigned int) var_6))))), (min((((/* implicit */long long int) (unsigned char)31)), (9223372036854775807LL))))) : (((/* implicit */long long int) ((/* implicit */int) (short)14784)))));
                        }
                        for (short i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((min((((/* implicit */unsigned int) (unsigned short)23029)), (arr_3 [i_1 + 1] [i_5 - 2] [i_5 - 3]))) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17694)) >> (((((/* implicit */int) (short)-418)) + (435)))))))))));
                            arr_19 [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (unsigned char)151)), (2147483632)))));
                            var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23013)) ? (-1867866855) : (2147483633)))), ((+(((unsigned long long int) var_1))))));
                            arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42516))))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) (short)13335);
                            var_25 = ((/* implicit */_Bool) var_7);
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_25 [i_0] [i_0] [i_2] [i_7] [i_1] = (short)13317;
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) 3270215980U))), (arr_7 [i_1 - 1])))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)235)))));
                        arr_26 [i_0] [i_0] [i_0] [i_1] [5U] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) % (arr_7 [i_0])))) ? (min((((/* implicit */unsigned int) var_6)), (arr_7 [(short)0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-14115)))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 3]))))))));
                        arr_27 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_17)))) + (2147483647))) >> (((min((var_7), (((/* implicit */unsigned int) 2147483632)))) - (2147483629U)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [7] [i_0] [i_8] [(unsigned short)2])) ? (var_12) : (var_7)))) / (9223372036854775779LL)))));
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_13 [i_8] [(short)0] [i_8] [i_1 - 2] [i_1] [(signed char)1] [i_1 + 1])))));
                    }
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((int) (unsigned char)2)))));
                }
                /* vectorizable */
                for (short i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                arr_37 [i_0] [0] [i_1] [i_9] [i_1] [0ULL] = ((/* implicit */signed char) ((arr_12 [i_1 - 2] [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13279)))));
                                var_30 -= ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-13318)) + (2147483647))) >> (((-2147483630) - (-2147483636)))))) ? (((/* implicit */int) arr_21 [i_9] [i_11] [i_10] [i_9 - 1] [i_9] [i_1] [i_9])) : (((/* implicit */int) ((short) var_14))));
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((long long int) 2147483630)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (short i_13 = 3; i_13 < 9; i_13 += 2) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((/* implicit */int) (short)15))));
                                var_33 = ((/* implicit */short) max((var_33), (var_1)));
                                arr_43 [i_0] [i_0] [i_12] [i_1] [9ULL] = 1024751330U;
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            {
                                arr_53 [i_1] = ((((/* implicit */_Bool) (~(14703324840527165956ULL)))) ? ((~(var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -2147483621)))));
                                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_0] [(unsigned short)7] [i_14] [i_14] [i_1] [i_16])) && (((/* implicit */_Bool) arr_31 [i_1] [i_14 - 1] [i_16]))));
                                arr_54 [i_16] [i_1] [i_15] &= ((/* implicit */unsigned short) 1994008515U);
                                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [(unsigned char)11])) >> (((((/* implicit */int) arr_33 [i_15] [i_15] [i_14 - 1] [i_15])) - (28630))))))));
                            }
                        } 
                    } 
                    arr_55 [i_0] &= ((/* implicit */_Bool) var_0);
                    arr_56 [i_1] [i_1] [i_14] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((var_9) >> (((arr_45 [i_1] [i_1] [i_1 + 3]) + (2650651555837042381LL)))))) : (((/* implicit */signed char) ((var_9) >> (((((arr_45 [i_1] [i_1] [i_1 + 3]) + (2650651555837042381LL))) - (455368639421349253LL))))));
                    var_36 = ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-45)) & (((/* implicit */int) (signed char)-38))))) : (((523289841U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))))));
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483629)) ? (2300958780U) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)8191), (((/* implicit */short) (signed char)45)))))) : (1024751316U))))))));
                    arr_59 [i_1] [i_1 - 2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((18446744073709551603ULL) >> (((var_15) - (5733432957825038589LL)))))))) ? (var_9) : (var_2)));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */_Bool) var_5);
    var_39 = ((/* implicit */unsigned int) ((short) min((var_1), (var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_18 = 4; i_18 < 16; i_18 += 3) 
    {
        arr_63 [(signed char)17] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_60 [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) : (var_10))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_18] [i_18 + 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)121), (((/* implicit */unsigned char) arr_60 [i_18 - 3] [i_18 - 4])))))) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)130))))))));
        arr_64 [i_18 - 3] [(unsigned short)16] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((max((var_12), (((/* implicit */unsigned int) (signed char)40)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_61 [i_18]))))))), (max((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) arr_61 [i_18])), (18446744073709551615ULL)))))));
    }
}
