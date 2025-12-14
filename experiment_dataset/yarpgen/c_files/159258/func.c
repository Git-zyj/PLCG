/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159258
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
    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2938)) ? (((/* implicit */int) (unsigned short)224)) : (((/* implicit */int) (short)-2935))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) ^ (min((((var_2) << (((/* implicit */int) var_4)))), (((/* implicit */unsigned long long int) ((unsigned short) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (+((~(arr_4 [(short)16] [i_1] [i_0])))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned short)65311)) : (-1145989586))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65311)) - (arr_8 [22U] [i_2 - 2] [i_2] [i_3])))) ? (((unsigned int) arr_7 [i_0] [i_2 - 2] [i_0] [i_3] [i_4 + 1] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 2] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_2] [i_3] [i_4 + 1] [i_3])) : (arr_5 [i_0] [i_2 - 2] [(signed char)11]))))));
                                arr_14 [i_0] [i_0] = min((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)211))) : (arr_12 [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_7))))))), (((/* implicit */unsigned int) (-(20)))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((min((20), (((/* implicit */int) (signed char)6)))) > (arr_8 [i_0] [i_1] [i_2 - 2] [i_4 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = var_9;
}
