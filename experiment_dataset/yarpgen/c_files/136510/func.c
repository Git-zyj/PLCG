/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136510
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
    var_13 = ((/* implicit */_Bool) max((var_13), ((!(((/* implicit */_Bool) ((unsigned short) var_12)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_1 [i_0 - 1])))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((((/* implicit */int) (signed char)-109)) ^ (((/* implicit */int) (signed char)113)))) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_3))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)113)) ? (((((/* implicit */_Bool) max(((signed char)-90), ((signed char)-117)))) ? (1073741696) : (((/* implicit */int) (signed char)113)))) : ((~(((/* implicit */int) var_2))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) (~(max((arr_11 [i_3 - 1] [i_1] [i_3]), (arr_11 [i_3 - 1] [i_2] [i_3])))));
                        var_15 -= ((/* implicit */long long int) (signed char)-109);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((int) var_10))));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-118))));
                            arr_18 [i_1] [(unsigned char)11] [i_1] [i_1] [i_1] = ((/* implicit */int) (short)-13591);
                            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (signed char)-101);
                        }
                        arr_20 [(unsigned char)8] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_10 [i_1] [i_1] [i_3] [i_4])))) ? (max((max((arr_10 [i_1] [i_2] [i_2] [i_4]), (((/* implicit */long long int) (signed char)-101)))), (((/* implicit */long long int) arr_7 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111)))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_2] [i_2 - 1] [i_3 - 1] [i_3 - 1]))) ? (max((((/* implicit */unsigned int) (signed char)100)), (arr_11 [i_1] [i_2 + 1] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) (signed char)-101))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) (signed char)106))))))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_25 [i_1] [i_1] [i_3 - 1] [i_6] = ((/* implicit */signed char) var_10);
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2054636624U)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)-107))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (arr_10 [i_2 - 2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_16 [i_1] [i_1] [i_3] [i_3] [i_1] [0LL] [i_6]))))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_9 [(signed char)12] [i_2] [i_2])))))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_13 [i_2 + 1] [i_2] [i_2] [i_3 - 1] [i_6]))) ? (((unsigned int) arr_14 [i_1])) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2261381434U)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)110)))), (((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-31891)))))))));
                        var_19 = ((/* implicit */signed char) (+((+(var_1)))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 12; i_7 += 4) 
                    {
                        arr_30 [i_1] [i_2 - 2] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_2 + 1] [i_3 - 1] [i_7 + 3]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-104)), (var_3)))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_1] [i_2] [i_1] [i_3] [i_2])), (-2001636528)))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_0 [i_2]))))) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((((~((+(((/* implicit */int) (signed char)106)))))) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-91)) ? (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)137)) >= (((/* implicit */int) (signed char)100)))))))) - (6759655656414501361ULL))))))));
                            arr_34 [i_7] [i_2] [i_3] [i_7] [i_1] [(short)12] [i_1] = ((/* implicit */unsigned short) ((long long int) ((signed char) arr_8 [i_1])));
                            arr_35 [i_2] [i_7] [i_7] [i_8] = ((((/* implicit */_Bool) ((arr_33 [i_3 - 1] [i_7 + 1] [i_7] [i_7] [i_8 - 1] [i_7]) / (((var_1) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70)))))))) ? (((long long int) arr_1 [i_1])) : (((/* implicit */long long int) max(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) 768U)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned char)181))))))));
                            arr_36 [i_7] [i_7] = ((/* implicit */unsigned char) ((3347491691U) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_9)), (var_7))))))));
                            arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (signed char)-113);
                        }
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (signed char)108)) != (((/* implicit */int) (unsigned char)12))))) : (max((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_2 - 2] [i_1] [i_3] [i_1])) : (((/* implicit */int) (signed char)112)))), (((/* implicit */int) (short)-31378)))))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_29 [(unsigned short)9] [(short)9] [i_1] [(short)9]), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (arr_32 [i_3] [i_7] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7 - 2] [i_2 - 2] [i_2 - 2] [i_3 - 1])) ? (arr_8 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13668)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7)))) ? (((/* implicit */unsigned long long int) var_8)) : (arr_6 [i_2 - 1])))));
                        var_23 ^= ((/* implicit */unsigned char) ((unsigned short) max((arr_21 [i_2 - 2] [i_2 - 1] [i_3] [i_3 - 1] [i_7 + 2]), (arr_21 [i_2 - 2] [i_2 - 1] [i_3] [i_3 - 1] [i_7 + 2]))));
                    }
                }
            } 
        } 
    } 
}
