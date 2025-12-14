/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131713
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) var_5)) >> (((524287U) - (524282U)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])))) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (max((arr_4 [i_1]), (((/* implicit */unsigned int) var_6))))));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    arr_9 [(signed char)12] [i_1] [(signed char)12] [i_1] = ((/* implicit */unsigned long long int) min((var_2), (((((/* implicit */_Bool) arr_4 [8ULL])) ? (arr_6 [i_2] [i_1] [(short)11] [i_0]) : (((/* implicit */unsigned int) var_6))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 4; i_4 < 15; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294443014U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned short) var_9);
                            var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (8191LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48334)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_6])) ? (((((/* implicit */_Bool) 4294443016U)) ? (-8192LL) : (((/* implicit */long long int) 3053324583U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [(unsigned short)0] [i_3])))))));
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 524291U);
                        }
                        arr_21 [i_0] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_0 [i_1]) / (((/* implicit */int) var_1))))) <= (var_7)));
                        arr_22 [i_0] [i_1] = ((/* implicit */unsigned short) arr_0 [i_2]);
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294442999U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31404))) : (var_4))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        arr_25 [i_7] [i_0] = (!(((4294443014U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)7))))));
                        var_16 -= ((/* implicit */unsigned char) arr_18 [i_7] [i_7] [i_7] [i_7] [(short)9] [3LL] [i_7]);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524287U)) ? (((((/* implicit */int) (unsigned short)24)) - (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_7] [i_7])))) : ((+(264038356)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_7] [i_2])), ((+(var_6)))))) : (((((/* implicit */unsigned long long int) var_4)) * (var_9)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_28 [i_8] [i_7] [5] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : ((-(0)))));
                            var_18 = ((/* implicit */_Bool) (signed char)127);
                        }
                    }
                    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        arr_31 [i_1] [i_1] [i_9] = (!(((/* implicit */_Bool) (unsigned char)60)));
                        arr_32 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */short) arr_27 [i_0] [i_0] [i_1] [i_1] [i_2] [i_9] [i_9]);
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_2);
}
