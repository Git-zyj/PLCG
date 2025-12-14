/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115757
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
    var_10 *= ((/* implicit */short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */_Bool) (unsigned char)119)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -8LL)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_5)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_4] [8] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (var_7))) : (((/* implicit */long long int) ((arr_12 [i_0] [i_1] [i_2] [i_3] [1U] [(unsigned char)1]) ? (var_2) : (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)7] [i_3] [i_4])))))))) ? ((-(3430626780U))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -3234180842691969549LL)) ? (var_5) : (((/* implicit */int) var_9)))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(7LL))))));
                                arr_16 [(short)0] [i_1] [i_3] [i_3] = ((/* implicit */short) (~(min((((/* implicit */long long int) 1308612567U)), (((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_1] [(signed char)8] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_0)))))));
                                arr_17 [i_0] [(signed char)12] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_3] [1] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (unsigned short)8453)) : (((/* implicit */int) (unsigned char)77)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0])), (var_8)))))), (min((1009581705), (((/* implicit */int) (short)32766))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_26 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_9 [i_0] [(unsigned char)4] [i_5 - 2] [i_1] [(signed char)10] [i_1]))))) ? (max((((/* implicit */unsigned int) arr_8 [i_0] [4] [i_1] [i_1] [i_1] [i_6])), (1151346639U))) : (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_5 - 1] [i_6])) : (((/* implicit */int) arr_10 [1LL] [i_5 - 1] [7ULL] [i_0] [i_0])))))))));
                            /* LoopSeq 2 */
                            for (signed char i_7 = 3; i_7 < 12; i_7 += 2) 
                            {
                                arr_29 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [(unsigned char)8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32765))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_1))), (((/* implicit */unsigned int) (signed char)127))))) ? (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [(unsigned short)9] [i_5 + 1] [(signed char)10] [i_5]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_28 [i_0] [(_Bool)1] [(unsigned short)0] [i_0]) : (((/* implicit */int) var_9))))) ? (min((var_0), (((/* implicit */long long int) arr_14 [4] [(unsigned char)8] [i_6] [i_6] [i_1] [(unsigned char)0])))) : ((~(var_7)))))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                            {
                                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_12 [i_5] [i_5] [i_5] [i_8] [i_5 - 1] [4]), (arr_12 [2LL] [4] [2LL] [i_6] [i_5 - 2] [i_6]))))));
                                var_14 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_2))))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3234180842691969552LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [0U] [(signed char)6] [i_6] [i_0] [i_0]))) : (arr_21 [(signed char)3] [(signed char)3])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_5]))))) ? ((+(arr_28 [i_0] [(unsigned short)2] [(signed char)11] [i_6]))) : (((/* implicit */int) (signed char)82))))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (9223372036854775807LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                            }
                            arr_32 [i_0] [1] [i_1] [i_1] [i_5 - 1] [6ULL] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)32767)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [10LL] [i_5] [i_1] [i_1] [(unsigned char)10] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) (unsigned char)255))))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_7 [i_6] [i_1] [2ULL] [i_6])))), ((!(arr_3 [i_1]))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [11] [(signed char)1]))) : (6972481706811221388ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)16)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (var_0) : (var_0))) : (((var_3) ? (((/* implicit */long long int) arr_6 [i_0])) : (3234180842691969549LL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_33 [i_9])), (987417261)))))) : (((var_3) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-100)))))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (3022761622U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (max((arr_40 [i_9] [i_9] [i_9] [i_9]), (1289577531))) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26277))))) : ((~((-(((/* implicit */int) arr_36 [i_11] [i_11]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) (unsigned char)91)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14984))) : (2550280561U))) : (((((/* implicit */_Bool) (signed char)127)) ? (var_1) : (var_1)))))));
                        arr_43 [i_9] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_42 [i_10 - 2] [i_10 - 1] [i_10 + 1] [(unsigned short)0])), ((+(((/* implicit */int) (unsigned char)242)))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
                    {
                        var_20 = (~((~(var_2))));
                        var_21 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_33 [i_10 - 2])) : (((/* implicit */int) var_6))))) ? (min((2147483642), (((/* implicit */int) (unsigned char)28)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (-378592828)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_9] [13LL] [i_11] [i_13] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_34 [(unsigned char)12])), (var_4))))) : ((-(var_1)))))));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9] [i_9]))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) : (-4376740208439011035LL)))) ? (((/* implicit */int) (short)-19533)) : (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((2LL), (((/* implicit */long long int) var_2)))))))), ((-(((((/* implicit */_Bool) (signed char)83)) ? (var_5) : (((/* implicit */int) var_8))))))));
}
