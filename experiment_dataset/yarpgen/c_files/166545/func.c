/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166545
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0 - 1] |= ((/* implicit */unsigned char) var_16);
        arr_3 [i_0] = ((/* implicit */signed char) min((min((2147483628), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (max((((/* implicit */int) var_5)), (var_10)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~((+(((/* implicit */int) arr_4 [i_1] [i_1]))))))), (min((((((/* implicit */_Bool) (signed char)-125)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1])))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] [i_1 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) : (var_16)))))))));
                            var_17 -= ((/* implicit */_Bool) ((0ULL) / (max((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_4))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) : (22ULL)))))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) 3330065597464781392ULL);
                            arr_23 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)47))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) 22LL)), (1048574ULL))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] |= ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_4 [i_4] [i_7])))), (((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) (unsigned char)52))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_0)))) ? (((var_13) ? (arr_22 [i_1] [i_2]) : (2061814132U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 15728640U)))));
                            arr_28 [i_1] [i_4] [i_1] = max((((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */signed char) arr_14 [i_4] [i_2] [i_4])), ((signed char)-120)))), ((+(arr_15 [i_7] [i_4] [i_4] [i_4] [i_1] [i_1])))))), (((((/* implicit */_Bool) var_16)) ? (((40ULL) + (10319109820580095514ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))));
                            arr_29 [i_3] [i_2] [i_2] [i_2] [i_7] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-20165)), ((+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_3] [i_2] [i_1]))) : (var_9)))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)47)) || ((_Bool)1))))));
                            var_20 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) min((arr_5 [i_1 - 2]), (((/* implicit */long long int) var_12))))), (var_8))));
                        }
                        arr_33 [i_1] [i_1] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)113))))), (((((arr_25 [i_1] [i_2] [i_2] [i_2] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_1] [i_1] [i_3]), (((/* implicit */signed char) arr_1 [i_1]))))))))));
                        arr_34 [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))) == (min((((/* implicit */long long int) arr_8 [i_1] [i_1 + 1] [i_1 - 1])), (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_21 = ((/* implicit */short) var_6);
        arr_38 [i_9] [i_9] = ((/* implicit */long long int) ((32767LL) <= (((/* implicit */long long int) 2021789446U))));
        arr_39 [i_9] = ((/* implicit */unsigned long long int) ((((arr_37 [i_9]) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) var_5)))) + (((/* implicit */int) arr_1 [i_9]))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (max((((((/* implicit */unsigned int) ((/* implicit */int) min(((short)-9), (((/* implicit */short) (unsigned char)131)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_16))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))), (((347018299U) % (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))))));
    /* LoopNest 2 */
    for (long long int i_10 = 1; i_10 < 18; i_10 += 4) 
    {
        for (unsigned char i_11 = 1; i_11 < 19; i_11 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        {
                            var_23 ^= ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_37 [i_10])), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_10 - 1]))) : (var_8))) <= (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_41 [i_12])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61440)))))))));
                            arr_54 [i_11] [i_12] [i_11] [i_11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_49 [i_10 - 1] [i_10 - 1] [i_11 + 1])), (((738512467534658227ULL) / (arr_53 [i_10] [i_11] [i_11] [i_10 + 2])))));
                            arr_55 [i_11] [i_13] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (max((var_9), (((/* implicit */long long int) (unsigned char)0)))))));
                            arr_56 [i_10] [i_11] = ((/* implicit */unsigned short) (signed char)42);
                        }
                    } 
                } 
                arr_57 [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_41 [i_10 + 1])) ? (var_16) : (arr_41 [i_10 - 1]))), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)0)))));
            }
        } 
    } 
    var_24 *= ((/* implicit */unsigned short) ((int) var_7));
    var_25 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) min((var_3), (var_15)))), (max((var_16), (((/* implicit */unsigned int) var_5))))))));
}
