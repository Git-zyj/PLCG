/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158141
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((var_2) / (((/* implicit */long long int) 2011727837U)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (max((var_3), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_9))))) : (max(((+(18446744073709551615ULL))), (min((var_11), (((/* implicit */unsigned long long int) var_2)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_5 [i_2]))));
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */short) (unsigned short)971);
                                var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42467)) * (((((/* implicit */int) (unsigned short)16)) / (((/* implicit */int) (signed char)-126))))))) ? (-8823911888274480876LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
                            }
                            for (int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) min((((5629323058330991731LL) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-5687)) || (arr_19 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_5] [i_0] [i_2]))))))), (((/* implicit */long long int) (short)-18899))));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) / (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [i_5])) ? (-8823911888274480868LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32746)))))))) ? (((((/* implicit */_Bool) (signed char)-32)) ? (((((/* implicit */_Bool) (unsigned short)47079)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_17 [i_1]))) : (2157083594U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28942)) >> (((((/* implicit */int) arr_2 [i_0 - 1])) - (6559))))))));
                                arr_22 [i_0] [(short)1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)2420), (((/* implicit */unsigned short) arr_19 [i_0 + 1] [i_1] [i_2] [i_1] [i_5] [i_0 + 1] [i_2])))))));
                            }
                            for (int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                            {
                                arr_27 [i_0 + 1] [i_0] [i_0 + 1] [i_3] [i_6] = ((/* implicit */unsigned int) arr_6 [i_6] [i_2] [2ULL]);
                                arr_28 [i_0] [1LL] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) var_2)) + (10587528917870334621ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) 2137883705U)))))))), (((/* implicit */unsigned long long int) ((signed char) arr_13 [i_0 - 1] [i_0 - 1] [i_6] [i_0 - 1] [i_6])))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                            {
                                arr_31 [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_0] [4] [i_0] [i_1] [i_2] [i_3] [i_7])) ? (arr_7 [i_7]) : (7204466506570145244LL))) / (((/* implicit */long long int) arr_17 [i_0]))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11660)) ? (((/* implicit */int) (short)-5684)) : (((/* implicit */int) (short)11660)))))));
                                arr_32 [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_2])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (10587528917870334631ULL))) : (((/* implicit */unsigned long long int) (-(-1119881695943888315LL))))));
                            }
                        }
                    } 
                } 
                arr_33 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2157083616U)))) <= (((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32757))) : (arr_26 [i_0 + 1] [i_0 + 1] [i_0])))));
            }
        } 
    } 
    var_16 = 2137883701U;
    var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_2)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)61440))))))));
}
