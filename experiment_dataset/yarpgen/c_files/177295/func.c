/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177295
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
    var_19 = ((/* implicit */unsigned char) (+(((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    var_20 *= ((/* implicit */short) min((min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_10)))))), (((((/* implicit */int) var_1)) << (((/* implicit */int) var_16))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) (signed char)63)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)63)) != (((/* implicit */int) var_7)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 4] [i_0])))));
                var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))) : (((((((/* implicit */int) (unsigned short)62782)) ^ (((/* implicit */int) arr_0 [i_1])))) | (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)28583))))))));
                arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)51), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (arr_3 [i_0] [(unsigned char)11]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [4ULL])) * (((/* implicit */int) (_Bool)1))))) ? (((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                var_23 ^= ((/* implicit */short) var_16);
                arr_6 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-32)) : (341826937))) ^ (1481520533)))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (arr_3 [i_1] [i_0 - 1])))));
            }
        } 
    } 
}
