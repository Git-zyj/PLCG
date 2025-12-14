/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179358
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
    var_18 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [0] [(short)12] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (-(var_12))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)57))))), (((4164605106763662626LL) - (5208155677826588944LL)))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) -262144LL)))));
                        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [6] [(signed char)3] [i_2]))))) ? (max((arr_12 [(signed char)6] [i_3] [i_2] [i_2] [i_1] [(unsigned char)12]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((int) var_12))))), (((arr_0 [i_0] [i_1]) + (arr_0 [i_1] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) var_0);
                        var_23 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_2)))));
                        arr_15 [i_2] = ((/* implicit */short) ((((_Bool) var_15)) ? (max(((-(((/* implicit */int) arr_5 [i_0] [8ULL] [i_2])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_2] [i_2])))))) : ((-((+(((/* implicit */int) var_0))))))));
                        var_24 = ((/* implicit */int) (((!((_Bool)0))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_4]) : (((/* implicit */int) (unsigned short)36263)))))));
                        var_25 ^= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_4]);
                    }
                    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] [8] [i_1] [i_0] [i_2] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_15))))));
                        var_26 ^= ((/* implicit */long long int) ((unsigned short) (((-(9223372036854775800LL))) != (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                        var_27 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_2] [i_5]))), (((int) (short)-5618)))));
                        var_28 = max((((/* implicit */long long int) ((short) max((((/* implicit */long long int) 4021673913U)), (var_3))))), (((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)141)), (arr_16 [i_2] [i_1] [i_2])))) : (((((/* implicit */_Bool) (unsigned short)29286)) ? (((/* implicit */long long int) 1478332269)) : (var_12))))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_2] [i_2] [1] = ((/* implicit */unsigned long long int) (!(var_7)));
                                arr_24 [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) var_6);
                                var_29 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
