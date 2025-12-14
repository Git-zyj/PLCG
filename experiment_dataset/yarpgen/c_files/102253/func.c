/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102253
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
    var_18 = var_11;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_1])))))));
                arr_7 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 6301839039317815091LL)), (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_7))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_1)) : (var_5)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_19 |= ((/* implicit */long long int) (-((-(((/* implicit */int) (short)13711))))));
                var_20 *= ((/* implicit */_Bool) ((long long int) (signed char)54));
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)53)))) ? (((arr_15 [i_2] [(unsigned char)11] [i_4 + 1]) % (arr_15 [i_2] [i_3] [i_4 + 1]))) : (arr_15 [i_2] [i_3] [i_4 + 1])));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5422)))));
                                var_23 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_22 [i_6 - 1] [i_5 - 3] [(short)10] [i_3] [(signed char)4]) ? (((/* implicit */int) arr_21 [i_6] [i_5 + 1] [i_3] [i_2])) : (((/* implicit */int) arr_22 [i_5 - 1] [i_3] [16LL] [i_5 - 1] [i_5 - 1]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2]))) : (var_5)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
