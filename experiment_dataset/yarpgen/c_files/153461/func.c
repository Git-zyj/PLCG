/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153461
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
    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((var_2) == (((/* implicit */long long int) var_12))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551615ULL))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(16ULL))))));
            var_18 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4177893838U)) ? (var_7) : (var_2)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_12)) ^ ((-(var_2)))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
                arr_11 [7] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_20 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_3]);
                    arr_19 [i_3] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */int) ((signed char) var_5));
                    arr_20 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(((arr_14 [i_0] [i_1] [i_0] [i_4]) << (((arr_1 [13LL]) - (25405897165061018LL)))))));
                    arr_21 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4291566277105007305LL)) ? (12538554862176640685ULL) : (((/* implicit */unsigned long long int) 91791836))));
                }
                arr_22 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) var_1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned int i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_21 ^= ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) (~(var_13)))) : ((+(18446744073709551615ULL))));
                            arr_28 [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((int) (~(arr_14 [i_6 + 1] [i_5] [i_3] [i_0]))));
                            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)9350)) ? (((/* implicit */int) arr_3 [(unsigned short)19])) : (var_1)))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_23 [i_0] [i_0] [i_0] [i_0]);
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    arr_32 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) var_2);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned short) (((~(var_13))) << (((((((/* implicit */_Bool) var_0)) ? (var_15) : (18446744073709551610ULL))) - (2279680893564898694ULL)))));
                        arr_35 [i_1] [i_8] [i_7] [i_3] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) var_13);
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_4 [i_0])))));
                        var_26 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0])))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 21; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_9 - 4])) ? (((6ULL) / (((/* implicit */unsigned long long int) 4288539163U)))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        var_28 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_12) <= (((/* implicit */unsigned int) var_14)))))));
                        arr_38 [i_1] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((int) var_0))) : (((unsigned long long int) var_4))));
                        var_29 = ((/* implicit */unsigned long long int) 1614190169);
                    }
                    arr_39 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((long long int) arr_6 [8ULL] [8ULL])) * (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1])))));
                    arr_40 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (short)-6780))));
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    var_30 = ((((/* implicit */_Bool) 16515072U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_1] [i_1] [0] [i_3] [i_10]))));
                    var_31 += ((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_3] [i_0] [i_3])))));
                }
                for (signed char i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                {
                    arr_45 [i_0] [i_1] [i_3] [i_11] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 0U)) ? (var_1) : (((/* implicit */int) var_11)))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1ULL)))) ? (((((/* implicit */_Bool) -2490683378776735698LL)) ? (var_2) : (((/* implicit */long long int) -351675174)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -891566766758791147LL)) ? (-690279493) : (2117694011)))))))));
                    arr_46 [i_0] [i_1] [i_11] [i_0] |= ((unsigned long long int) ((long long int) var_5));
                }
                for (signed char i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1275039346))));
                    arr_50 [i_12] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) var_8)))));
                    arr_51 [i_1] [i_1] [(signed char)9] [i_1] = ((/* implicit */unsigned short) -9223372036854775807LL);
                }
            }
        }
        var_34 += ((/* implicit */long long int) var_12);
    }
    for (int i_13 = 1; i_13 < 9; i_13 += 1) 
    {
        arr_54 [i_13] = ((/* implicit */signed char) ((11009536353605162818ULL) == (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        arr_55 [0] &= ((/* implicit */signed char) ((_Bool) ((short) var_13)));
        var_35 += ((/* implicit */_Bool) ((unsigned int) var_4));
        arr_56 [i_13] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((int) ((_Bool) var_8)))), (((((/* implicit */_Bool) ((unsigned long long int) 427422855U))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 8191)), (var_5)))) : (((unsigned long long int) arr_41 [i_13]))))));
    }
}
