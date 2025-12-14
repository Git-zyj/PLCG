/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116812
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
    var_10 -= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))) / (min((var_3), (((/* implicit */unsigned long long int) var_5)))))) >> (((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)22385)))), (((1992340268) | (((/* implicit */int) (short)10681)))))) - (38382)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_11 = ((/* implicit */short) 15621363188240033470ULL);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_12 |= ((/* implicit */signed char) (-(6095097505216319198LL)));
                        var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [(unsigned char)4] [i_3])) : (44811074932773531ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    }
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_1] [15LL] [4LL] [4LL])) : (((/* implicit */int) (unsigned char)131))))) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0] [(unsigned short)11]))));
                    var_16 = ((/* implicit */unsigned short) -6095097505216319198LL);
                }
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_17 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_4] [15LL] [15LL] [i_0])) || (((/* implicit */_Bool) (unsigned short)55633)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2])))) : (arr_11 [(short)0])));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -6095097505216319198LL)) ? (((/* implicit */long long int) var_7)) : (arr_11 [i_0 - 3])))))) ? (((/* implicit */long long int) arr_12 [i_4] [i_1] [i_0])) : (max((((/* implicit */long long int) arr_9 [i_0 - 2] [15] [i_4])), (((((/* implicit */_Bool) (short)-1)) ? (arr_11 [i_4]) : (((/* implicit */long long int) var_9)))))))))));
                }
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned char) arr_7 [i_1] [i_5] [i_1] [9] [i_0]);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                            {
                                arr_21 [i_5] [(unsigned short)11] [(unsigned short)16] [i_7] [(unsigned short)16] = ((/* implicit */int) (~(arr_20 [i_0 - 3] [i_0 - 3])));
                                var_20 -= ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_0 [i_0]))))));
                                var_21 = arr_5 [i_0 + 1] [i_0 + 1] [10LL];
                                arr_22 [i_0] [i_6] [i_5] [i_1] [i_6] [i_0] &= ((/* implicit */unsigned char) (-(arr_17 [i_7] [i_5])));
                            }
                            arr_23 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (min((((/* implicit */unsigned long long int) (signed char)-72)), (max((((/* implicit */unsigned long long int) (unsigned char)119)), (6047059068659132184ULL)))))));
                            arr_24 [i_1] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((signed char) (~(-3653387910640314680LL))))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_5]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_3 [i_0] [2LL]))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_0 - 3] [i_0 - 3] [i_0 - 3])), (arr_11 [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0])) ? (arr_12 [i_0 - 3] [i_1] [i_1]) : (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : (((/* implicit */unsigned int) (+(var_7))))));
            }
        } 
    } 
}
