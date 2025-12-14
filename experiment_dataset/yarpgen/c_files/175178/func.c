/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175178
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
    var_17 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((short) ((arr_3 [i_1] [i_1] [i_1]) ^ (((/* implicit */long long int) 1048575U)))));
                arr_7 [i_1] [i_0] [2] = (+((-(((/* implicit */int) arr_5 [i_1])))));
                arr_8 [i_1] = ((/* implicit */int) min((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) > (var_11)))))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    arr_11 [i_0] [(short)0] [i_1] = var_4;
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (max((((/* implicit */long long int) var_5)), (arr_9 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_16)))))), (((/* implicit */long long int) ((arr_10 [10U] [7] [i_2] [i_1]) >= (((((/* implicit */int) arr_0 [(signed char)0] [i_2])) ^ (((/* implicit */int) var_2)))))))));
                }
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_15 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))), (var_16)));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) var_9))), (var_14)))) ? (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_3]))) | (var_4)))) : (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_3]))));
                }
                for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((arr_17 [i_0] [i_4 + 1] [i_4 + 2] [i_4 + 1]) / (arr_10 [(signed char)2] [i_4 - 2] [i_4 - 2] [i_0]))))))));
                    arr_19 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((18446744073709551609ULL) * (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3516794834U))))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [5U] [5U])))) ? (var_14) : (min((((/* implicit */int) arr_5 [i_1])), (arr_16 [(_Bool)0]))))))));
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_1] [(_Bool)1] [(short)0] [i_0] = (-(((((/* implicit */_Bool) 4293918705U)) ? (var_15) : (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_6] [i_7])))));
                                var_20 = ((/* implicit */unsigned long long int) (short)32767);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_21 = max(((+(arr_25 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [7U] [i_1]))), (var_12));
                                arr_34 [i_0] [i_1] [i_5] [i_1] [(unsigned short)8] = ((/* implicit */unsigned short) var_15);
                                arr_35 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (arr_3 [i_0] [i_1] [i_5])))) && (((/* implicit */_Bool) var_6))));
                                arr_36 [i_5] [(unsigned short)0] &= ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59125))))) ? (((((/* implicit */_Bool) arr_20 [i_9 - 2] [i_9] [i_5] [i_5])) ? (((/* implicit */long long int) var_7)) : (arr_20 [i_9 - 1] [i_5] [i_5] [i_5]))) : (((/* implicit */long long int) (+(2147483639)))));
                                arr_37 [i_0] [i_1] [i_5] [(unsigned short)7] [i_8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */_Bool) var_4)) ? (((arr_9 [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (min((arr_32 [i_0] [2LL] [7U]), (((/* implicit */long long int) arr_23 [(unsigned short)3] [i_8] [1ULL] [i_8]))))))));
                            }
                        } 
                    } 
                }
                arr_38 [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_1] [i_1]))) : (var_6))), (min((100663296LL), (((/* implicit */long long int) arr_17 [i_1] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((unsigned int) (short)-13)) : (((unsigned int) var_15))))), (max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_0)), (var_8)))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59155)))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_14)))) : (var_12)))));
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        arr_42 [i_10] [10U] = ((/* implicit */short) 18446744073709551593ULL);
        arr_43 [i_10] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) min((arr_40 [i_10]), (((/* implicit */unsigned int) -1))))))));
    }
    /* vectorizable */
    for (short i_11 = 2; i_11 < 20; i_11 += 1) 
    {
        arr_47 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_45 [i_11]))) ? (((((/* implicit */_Bool) arr_45 [i_11 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_11]))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_11 + 2])))));
        arr_48 [i_11] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_44 [i_11]))));
        arr_49 [i_11 - 2] [(short)21] = ((/* implicit */long long int) var_4);
    }
}
