/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123731
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((min((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) arr_1 [i_2 + 2] [i_3])) / (2199023247360LL))))), (((/* implicit */long long int) max((573310169U), (((/* implicit */unsigned int) (unsigned char)61)))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_0) : (((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0] [(unsigned short)0])) ? (min((var_7), (((/* implicit */long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) var_16)))))))), (max((((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 + 2] [i_0 - 2])), (-9223372036854775790LL)))));
                    arr_12 [i_0] = ((/* implicit */short) min(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_2 - 1] [(unsigned char)10] [i_2 + 2] [i_2] [i_2])))));
                    arr_13 [i_0] [i_1] [i_0] = var_14;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1736637691)) ? (min((var_11), (((/* implicit */long long int) (unsigned char)0)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528)))));
    var_23 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_10))))))))));
    var_24 = ((/* implicit */_Bool) min((((long long int) var_16)), (((/* implicit */long long int) min((((/* implicit */int) ((signed char) var_6))), (var_15))))));
}
