/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175207
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_4))));
    var_18 = ((/* implicit */short) var_10);
    var_19 = ((/* implicit */unsigned short) max(((+(var_0))), (((/* implicit */long long int) ((short) (+(((/* implicit */int) (unsigned char)227))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) var_3);
                    var_21 = ((/* implicit */unsigned short) ((short) min((((/* implicit */long long int) 2651246305U)), (((long long int) 1643720990U)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_3 [2ULL] [2ULL] [2ULL]))))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_8 [i_0] [(unsigned short)2] [i_0] [(unsigned short)2] [(unsigned short)2]))))))));
                                var_23 = ((/* implicit */unsigned char) var_1);
                                arr_15 [i_0] [i_0] [i_0] [(short)3] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) ((arr_16 [i_0]) != ((+(1529526238U)))));
                        var_25 &= ((unsigned long long int) ((int) var_1));
                        var_26 = ((/* implicit */unsigned short) ((arr_17 [(short)0] [(short)0] [(short)0] [(short)0] [i_2]) / (((/* implicit */unsigned int) ((((/* implicit */int) (short)-4880)) + (((/* implicit */int) arr_10 [(unsigned short)4])))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) (unsigned short)23);
                        arr_21 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((1643720992U), (((/* implicit */unsigned int) (signed char)-83))))) ? ((+((+(9223372036854775801LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                        arr_22 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775792LL))))) / (((/* implicit */int) ((unsigned short) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2] [11LL])))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [(short)5])) >= (((arr_5 [i_0 - 2]) >> (((((/* implicit */int) arr_1 [i_7])) - (24544))))))))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_7 [i_0]))))))), (((/* implicit */int) var_5))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_8] [i_1]), (((/* implicit */long long int) arr_7 [i_0]))))) ? ((-(arr_9 [i_0]))) : (((/* implicit */long long int) 2651246304U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2651246303U) > (((((/* implicit */_Bool) arr_19 [2U] [(signed char)1] [(signed char)1] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (389696475U))))))) : (max((2651246296U), (((/* implicit */unsigned int) arr_26 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1]))))));
                            var_30 = ((/* implicit */long long int) max((var_30), ((+(((var_7) - (var_7)))))));
                        }
                        arr_30 [i_0 - 1] [i_0 + 1] [(signed char)1] [i_0 - 1] [(short)13] [1U] = ((/* implicit */signed char) (+(min((((unsigned long long int) arr_8 [(unsigned short)5] [i_2] [i_2] [i_1] [i_0])), (((/* implicit */unsigned long long int) ((arr_16 [1U]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 1; i_9 < 13; i_9 += 2) 
                        {
                            arr_33 [i_9] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (short)4879)))), (((/* implicit */int) arr_1 [i_0 + 1]))));
                            var_31 = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_0 + 2]))))) < ((+(arr_11 [i_0 - 1] [i_1] [i_2] [i_2] [i_9 + 1])))))), (var_12)));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)55))))), (min((arr_9 [i_1]), (((/* implicit */long long int) arr_32 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]))))))) * (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_10] [1LL] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [(signed char)10] [i_0] [i_0])) ? (2147482624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                        var_33 = ((/* implicit */unsigned short) ((short) var_16));
                    }
                }
            } 
        } 
    } 
}
