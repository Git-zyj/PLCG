/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178593
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] [i_2] [(short)1] = arr_3 [i_0] [i_0] [i_2];
                    arr_9 [i_2] [i_1] [i_1] [i_0] |= ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [i_2 + 1])))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1]))));
                }
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_12);
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_3] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_3])))) : ((~(((/* implicit */int) (unsigned short)2585))))));
                    arr_14 [i_0] [i_0] [i_0] [i_3] = ((int) ((min((0ULL), (((/* implicit */unsigned long long int) (signed char)0)))) == (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_5)) : (18446744073709551613ULL)))));
                    arr_15 [i_3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 12128448934840135169ULL)) ? (((/* implicit */unsigned long long int) -2114970985492125021LL)) : (0ULL))) - (max((((18446744073709551615ULL) | (2566558818219255349ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_1)) : (arr_12 [7ULL] [i_1] [7ULL]))))))));
                    var_18 -= ((/* implicit */long long int) arr_1 [i_0]);
                }
                for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_20 [i_0] [i_0] [(unsigned char)2] = ((/* implicit */short) (+((-(((arr_5 [4U]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_4] [10ULL])))))))));
                    arr_21 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [4U]))))), (max((((/* implicit */unsigned long long int) -3643112464173173583LL)), (1ULL)))))));
                    arr_22 [(short)11] [(short)0] [i_4] [i_4] = ((((/* implicit */_Bool) -180162679)) ? ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_4])))) : ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_4])))));
                    arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(16ULL))) | (((/* implicit */unsigned long long int) 4294967295U))));
                }
                for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_5] [i_5] [i_7])) ? (arr_30 [i_0] [i_7] [i_5] [i_0] [i_5]) : (var_9))))))));
                                arr_32 [i_0] [i_1] [i_7] [i_6] = ((/* implicit */unsigned int) arr_2 [i_1] [i_5 + 1]);
                                arr_33 [i_7] = ((/* implicit */unsigned long long int) 4294967287U);
                                var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-12))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((unsigned long long int) (-2147483647 - 1))) : (((max((((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_5] [i_5] [i_1])), (arr_31 [i_5] [i_1]))) << (((arr_0 [i_5 + 1]) - (16011577789097127287ULL))))))))));
                }
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_5 [i_0])) >= (max((((unsigned long long int) -427663051)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) var_4)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_1);
}
