/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166190
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(8228818801295492932ULL)))) ? (min(((-(((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) ((short) var_5)))));
                arr_6 [i_1] = ((/* implicit */int) ((((17632666514553734887ULL) << (((((/* implicit */int) (unsigned short)40644)) - (40596))))) << (((/* implicit */int) arr_2 [i_0]))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    var_13 = ((/* implicit */long long int) arr_5 [i_1]);
                    arr_11 [i_2] [i_1] [i_1] [i_2 + 1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_4 [i_0 - 2] [i_2 + 1]))));
                    var_14 = ((/* implicit */unsigned int) arr_0 [i_0]);
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 -= ((var_1) + (((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0 + 1])));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10750)) ? (arr_14 [i_0 - 2]) : (arr_14 [i_0 - 1])));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (arr_9 [i_1] [i_1] [i_4])));
                    }
                    var_17 += ((/* implicit */unsigned short) (short)20113);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (short i_8 = 2; i_8 < 24; i_8 += 3) 
                    {
                        {
                            arr_28 [i_5] [i_6] [i_5] [i_8] [i_8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4546485703817539063LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8] [i_8 - 2] [i_8] [i_8 + 1]))) : (var_1)))) ? ((-(((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_5] [i_6] [i_7] [i_7])) << (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 17632666514553734887ULL))))))))));
                            var_18 = ((/* implicit */int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (-(((/* implicit */int) (short)-20113)))))));
                            /* LoopSeq 4 */
                            for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 10217925272414058684ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12992589912879146299ULL))) >> (((((/* implicit */int) arr_31 [i_7] [i_6] [i_8] [i_8 + 1] [i_8 - 1])) - (25636)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3656831883U)) || (((/* implicit */_Bool) -1886559528)))))) < (arr_25 [i_9] [(unsigned short)2] [i_7] [i_5] [i_5] [i_5])))))))));
                                var_20 = ((/* implicit */short) ((unsigned short) ((-1168097822) == (((/* implicit */int) (signed char)127)))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >= ((~(((/* implicit */int) var_3))))));
                            }
                            for (signed char i_10 = 2; i_10 < 24; i_10 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_34 [i_5] [i_6]))));
                                var_23 = ((/* implicit */unsigned short) ((int) arr_29 [i_5]));
                                arr_35 [i_10] = ((/* implicit */short) arr_33 [i_5] [(unsigned char)6] [(signed char)7] [i_8] [i_10]);
                                var_24 ^= ((/* implicit */long long int) max((((unsigned long long int) (~(arr_33 [i_5] [i_6] [i_5] [i_8] [i_10 - 1])))), (((/* implicit */unsigned long long int) var_3))));
                                var_25 = var_4;
                            }
                            for (short i_11 = 2; i_11 < 23; i_11 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_22 [i_8 - 1] [i_8 - 2] [i_11 + 2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                                arr_38 [(short)14] [i_11] [24ULL] [i_5] [i_5] [i_6] [i_11 + 2] = ((/* implicit */long long int) arr_26 [i_5] [i_5] [16U] [i_5]);
                            }
                            /* vectorizable */
                            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                            {
                                var_27 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (arr_36 [i_5] [i_6] [i_5] [i_8] [i_8 - 2])));
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1])) % (((((/* implicit */_Bool) var_11)) ? (arr_32 [i_5] [5] [i_7] [i_8 - 2] [i_12] [5] [i_5]) : (1886559527))))))));
                                var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_8 - 2] [(unsigned char)3])) : (((/* implicit */int) arr_20 [i_6] [i_8]))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
                            {
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) -1589802494))));
                                arr_44 [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18900)))));
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_0))))) + (arr_37 [i_13] [i_6] [i_13] [i_13] [i_13] [i_13]))) : (((/* implicit */int) ((((int) arr_25 [i_5] [i_6] [i_7] [i_8] [i_5] [17U])) <= (((/* implicit */int) ((short) 4095ULL))))))));
                                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_41 [i_5] [i_5] [i_7] [i_8] [i_13]) != (arr_41 [17] [i_7] [i_5] [i_13] [i_7])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0ULL)))) * (((((/* implicit */unsigned long long int) 1914271907U)) / (10183455084550901430ULL))))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_14 = 1; i_14 < 23; i_14 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((min((var_1), (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6] [i_14] [i_6])))) + (((/* implicit */unsigned long long int) ((arr_23 [i_5] [i_5] [i_5] [i_5]) / (arr_23 [i_5] [i_5] [i_5] [i_5])))))))));
                    arr_47 [i_5] [i_14] [i_14] [i_14] = ((/* implicit */short) arr_40 [i_5] [i_14 - 1] [i_14 - 1] [i_5] [i_14] [i_6]);
                }
                for (long long int i_15 = 1; i_15 < 23; i_15 += 2) /* same iter space */
                {
                    arr_52 [i_15] [i_6] [i_6] [i_5] = ((/* implicit */long long int) (~(arr_49 [i_15] [i_15] [13] [13])));
                    arr_53 [i_15 + 1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_51 [i_15 - 1] [i_15 + 1] [i_15 - 1])) ? (((((/* implicit */_Bool) 1886559527)) ? (arr_51 [i_15] [i_6] [13ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (var_5))), (((/* implicit */unsigned int) var_11))));
                    var_34 = ((/* implicit */short) ((8824633952938157269LL) > (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_5] [i_6])))));
                }
                var_35 = ((/* implicit */unsigned char) var_8);
                /* LoopNest 3 */
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            {
                                arr_61 [i_5] [i_17] [i_16] [i_17] [i_18] = ((/* implicit */long long int) (+(max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (arr_22 [(unsigned char)10] [(short)22] [i_5]))), (((/* implicit */unsigned int) arr_39 [i_5] [i_6] [i_16] [i_17] [i_18]))))));
                                var_36 *= ((arr_18 [i_16]) < (((/* implicit */unsigned long long int) ((((arr_29 [i_5]) / (((/* implicit */long long int) arr_50 [i_5])))) / (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))))))));
                                var_37 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_49 [i_18] [3] [(unsigned short)12] [(signed char)20])))) : (((/* implicit */unsigned long long int) (+(arr_24 [i_16])))))));
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1906861752)) ? (((/* implicit */int) (signed char)67)) : (0)))) == (((((/* implicit */_Bool) (short)22730)) ? (((unsigned int) 268435455)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
                var_39 = ((/* implicit */long long int) 3817975474U);
            }
        } 
    } 
}
