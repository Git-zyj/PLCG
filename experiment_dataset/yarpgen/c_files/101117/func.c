/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101117
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((var_16) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_10))))))), (((unsigned long long int) min((((/* implicit */unsigned char) var_16)), (var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */short) arr_6 [i_0] [i_1 + 1]);
                    var_20 = ((/* implicit */unsigned int) ((max((arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1]), (arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 2]))) / (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1]))) : (arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21396)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967291U)))), (min((((/* implicit */long long int) arr_1 [i_1 + 1] [i_3 + 1])), (var_14)))));
                                var_22 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */long long int) var_9);
    var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)0))))))) ^ (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) var_5)), (var_14)))))));
}
