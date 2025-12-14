/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17031
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
    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)78))))), (((((/* implicit */int) (short)-1837)) / (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (-2036160950394992011LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1836)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0]));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((unsigned short) (short)1837))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) (~((((!(((/* implicit */_Bool) (short)1836)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) var_6)), (var_1)))))));
                                arr_19 [i_4] [i_2] [16ULL] [21LL] [i_2] = var_4;
                                var_17 = ((/* implicit */unsigned short) min(((+(arr_12 [i_4] [i_2] [i_3 + 1]))), (arr_12 [i_1] [i_2] [i_3 + 1])));
                                arr_20 [0LL] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_16 [i_1] [i_2] [i_3] [i_1] [i_2] [(unsigned char)4]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3528229810U)))) : (arr_16 [i_3 + 1] [i_2] [i_2] [i_3 + 1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)1839)), ((~(((/* implicit */int) arr_9 [4LL])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                arr_26 [i_1] [18ULL] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (arr_23 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) & (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_2] [19ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1839)))))));
                                arr_27 [(unsigned short)13] [i_1] [i_2] [i_2] [(short)13] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_16 [i_3 + 1] [i_6] [i_6] [(unsigned short)5] [i_2] [i_6]), (((/* implicit */unsigned long long int) (signed char)115))))) ? (((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1] [i_3])) ? (arr_8 [i_3 + 1] [i_3 + 1] [i_3]) : (((/* implicit */unsigned long long int) -1612477340)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (short)1836)))))) ? (arr_22 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [(unsigned char)17] [i_3 + 1])) || ((_Bool)1)))))));
                                var_19 = ((/* implicit */unsigned char) (unsigned short)58049);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_6) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) (~(arr_5 [i_3] [i_2])))) : (((unsigned long long int) arr_21 [i_1] [3LL] [i_2])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_2])) && (((/* implicit */_Bool) (unsigned short)58049))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 2; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((arr_25 [i_3 + 1] [i_8 + 2] [i_8 - 1]) <= ((-(arr_25 [i_3 + 1] [i_8 + 2] [i_8 - 1])))));
                        arr_30 [i_2] [(unsigned char)12] [i_3] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30081))) != (arr_8 [i_1] [i_1] [i_1])))), (max((((/* implicit */unsigned long long int) var_8)), (17597941463504814771ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24)))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) % (arr_8 [i_1] [i_3] [i_9 - 1])));
                        var_22 = ((/* implicit */unsigned short) 560272293U);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_10 [i_9 - 2])) && (((/* implicit */_Bool) (unsigned short)0)))))))));
                        arr_35 [i_1] [i_2] [i_3] [i_9] [i_1] [i_2] |= ((/* implicit */short) min((((((/* implicit */_Bool) ((int) arr_33 [i_1] [i_1] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (short)-1838))))) : ((~(-2546987398096055808LL))))), (9223372036854775807LL)));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 2; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_2] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1831))) : (15873968386794955276ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_2] [i_2] [i_3] [i_10]))) : (((((/* implicit */_Bool) 8190977817285534170LL)) ? (arr_5 [i_10] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_24 += (!(((/* implicit */_Bool) arr_22 [20ULL] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1])));
                    }
                }
            } 
        } 
        arr_39 [i_1] = ((/* implicit */_Bool) ((long long int) (~(arr_1 [i_1] [i_1]))));
        var_25 = ((/* implicit */_Bool) arr_1 [i_1] [i_1]);
    }
}
