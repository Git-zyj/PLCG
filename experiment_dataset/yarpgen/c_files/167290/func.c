/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167290
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
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    arr_11 [7U] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [2ULL] [i_4] [(unsigned char)0] [(unsigned short)8] [(signed char)6] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 15175677078615014399ULL)) ? (127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52751))))) : (((/* implicit */unsigned long long int) var_1))));
                                arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_3) | (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_0)))) : ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
                                var_10 = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                }
                for (int i_5 = 4; i_5 < 13; i_5 += 4) 
                {
                    arr_21 [i_0] = var_2;
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_6)))))));
                        arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) ^ (var_2))))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) var_1)))))))));
                        var_13 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1)))) : (var_7))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_0))));
                        arr_32 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))) : (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))) & (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_8))))))));
                    }
                    arr_33 [i_0] [5LL] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((+(((/* implicit */int) var_0)))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))) | (((/* implicit */unsigned long long int) var_7)))))));
                }
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((var_2) + (5054410905274521411LL)))))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) var_8)))))))));
                arr_34 [i_0] [(short)2] [(unsigned short)9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1)))) : (var_7))) * (((/* implicit */long long int) ((((var_8) * (var_8))) / (var_1))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_40 [i_10] [i_0] [1U] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 2) 
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) | (((var_2) & (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                                arr_43 [(short)4] [(signed char)13] [7LL] [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((var_9) ? (var_2) : (((/* implicit */long long int) var_1)))) : (((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            }
                            arr_44 [i_0] [i_9] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
                            arr_45 [1] [i_0] [13ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57330))) : (3271066995094537217ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((var_2) + (9223372036854775807LL))) >> (((var_8) - (3759982785U)))));
}
