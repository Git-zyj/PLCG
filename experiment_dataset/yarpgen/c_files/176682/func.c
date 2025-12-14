/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176682
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = (-((-(arr_9 [i_3] [i_1] [8U] [i_1]))));
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))))) <= (arr_5 [i_4] [i_2]))) ? (((((/* implicit */int) (unsigned short)17807)) % (((/* implicit */int) (unsigned short)27581)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_2 [i_0] [i_0])))))))));
                                var_21 = (i_0 % 2 == 0) ? (((/* implicit */long long int) (((+(((/* implicit */int) arr_3 [i_0])))) | (((var_3) - (((((/* implicit */int) var_11)) >> (((arr_9 [i_0] [i_3] [i_1] [i_0]) + (237184094139543360LL)))))))))) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_3 [i_0])))) | (((var_3) - (((((/* implicit */int) var_11)) >> (((((arr_9 [i_0] [i_3] [i_1] [i_0]) + (237184094139543360LL))) + (2772303835989317558LL))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_22 &= ((/* implicit */long long int) (-(((unsigned long long int) max((((/* implicit */long long int) arr_11 [i_1] [1U] [i_2] [i_1])), (var_16))))));
                        var_23 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (short)-6060)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))) >= (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */long long int) var_14)) : (var_16)))));
                            var_25 = ((/* implicit */long long int) ((var_18) + (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_2] [i_2] [i_5]))));
                        }
                    }
                    var_26 = ((/* implicit */long long int) max(((!((!(((/* implicit */_Bool) (unsigned short)6)))))), (((((((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)1] [i_1] [i_2] [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) min((arr_19 [i_2] [14] [i_2] [i_0] [i_2] [i_2] [i_1]), (((/* implicit */unsigned int) arr_6 [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)127));
}
