/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116035
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_10)) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)62422)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [7LL] [i_1] = ((/* implicit */unsigned long long int) (+(var_3)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 3; i_4 < 11; i_4 += 3) 
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (signed char)121))))) <= (var_16)));
                                arr_15 [i_2] [i_3] [7] [i_0 - 2] [i_2] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (2799010445U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))))), (((/* implicit */unsigned int) arr_7 [(unsigned char)13] [(signed char)3] [i_2] [i_3]))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                            {
                                arr_18 [i_0] [i_1] [i_2] [5ULL] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [3U] [i_0] [i_0])), (-9223372036854775797LL)));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_5 [i_1 + 1] [i_1] [i_1]))) << (((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1])))) + (750))) - (4)))));
                            }
                            var_20 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (unsigned short)41297)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
