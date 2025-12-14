/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162706
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
    var_16 *= ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 1] [i_2]);
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)28273)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_0 + 2] [i_1 + 2]))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_1 - 1] [i_1] [i_3] = ((/* implicit */signed char) (-(18446744073709551615ULL)));
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    var_19 = (i_0 % 2 == 0) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_1 + 1])) ? (((((((/* implicit */unsigned long long int) var_10)) * (0ULL))) << (((((((/* implicit */_Bool) arr_9 [16LL] [i_3] [13LL])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (signed char)47)))) + (116))))) : (min(((~(arr_5 [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-47)) | (((/* implicit */int) var_1))))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_1 + 1])) ? (((((((/* implicit */unsigned long long int) var_10)) * (0ULL))) << (((((((((/* implicit */_Bool) arr_9 [16LL] [i_3] [13LL])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (signed char)47)))) + (116))) - (193))))) : (min(((~(arr_5 [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-47)) | (((/* implicit */int) var_1)))))))));
                }
                for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    arr_16 [i_0 - 3] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (signed char)-35))))) ? (((/* implicit */unsigned long long int) -1088492534)) : (arr_11 [9ULL] [i_0 - 2] [i_4])))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14358305978863728979ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)98)))) : (min((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) var_2);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [i_0])))));
                                var_23 += ((/* implicit */short) max(((signed char)3), (var_0)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) (unsigned char)64);
                                arr_29 [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_25 [i_0 + 1] [i_4 - 2] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709551615ULL)));
                                var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((((/* implicit */_Bool) min((63050394783186944ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (var_6) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((signed char) (signed char)-35)))))));
                                var_26 = ((unsigned char) min((((/* implicit */int) (signed char)35)), (arr_13 [i_4 - 2] [i_4] [(_Bool)1])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) (signed char)81);
                }
                var_28 = ((/* implicit */long long int) max((var_28), (min((((long long int) ((signed char) var_6))), (((/* implicit */long long int) ((signed char) (unsigned char)105)))))));
                arr_30 [i_0] [i_1 - 1] = max((((unsigned long long int) ((signed char) var_2))), (((/* implicit */unsigned long long int) 1443561618U)));
                /* LoopNest 3 */
                for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_39 [i_9] [i_1 + 1] [i_1] [(signed char)0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) (signed char)81);
                                arr_40 [i_0] [i_9] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-75)) ? (min((18446744073709551606ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_0] [i_1]))) : (8666372879239951179LL)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-82)))))));
                                var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_34 [i_11 + 3] [i_1 + 1])), (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (5256806364934150202ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_14)), (var_8))), (((/* implicit */unsigned long long int) ((short) 1073741568)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((long long int) 2851405672U)))))));
    var_31 = ((/* implicit */long long int) 13189937708775401435ULL);
}
