/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15303
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
    var_20 = ((/* implicit */unsigned char) var_9);
    var_21 = ((/* implicit */unsigned int) min((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4064)) ? (10645279397920008297ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) (unsigned char)86)) ? (2300633782U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (((/* implicit */short) var_8)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_22 *= ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((unsigned long long int) (unsigned short)58675))))));
                    arr_7 [i_2] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26846))) | (0ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) var_16))))))))) ? (((((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */short) (unsigned char)0)))))) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (var_3)));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 994117715U)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_18))))));
}
