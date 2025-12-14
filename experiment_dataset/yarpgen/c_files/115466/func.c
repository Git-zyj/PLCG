/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115466
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */short) max((((/* implicit */unsigned int) arr_5 [(signed char)1] [i_1])), (arr_6 [i_0] [12LL])));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((_Bool) (~(arr_6 [i_0] [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_1 [i_0] [16LL])), (arr_2 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_4 [13U])))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)44597)) : (((/* implicit */int) arr_5 [4U] [i_1]))))))))));
                arr_8 [i_0] [i_0] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)44597)), (arr_6 [i_0] [i_1]))))))), (max((((/* implicit */unsigned int) arr_1 [i_0] [(signed char)11])), (1653242915U))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_2 + 3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44598)))))));
                                var_16 *= ((/* implicit */unsigned int) ((short) (-(((((/* implicit */_Bool) arr_6 [i_3] [7LL])) ? (2245155076905419297ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(short)2] [i_0]))))))));
                                arr_17 [i_0] [i_1] [i_3] [i_3 - 2] [i_3] = ((/* implicit */unsigned char) min((max(((unsigned short)44604), (((/* implicit */unsigned short) (unsigned char)245)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [6ULL] [6ULL] [i_2] [i_3 + 1] [i_2 + 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_3);
}
