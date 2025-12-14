/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182295
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0 + 1] [i_0 + 2]))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))))))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1572800243U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) (short)32767)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_16)))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967294U)))), (min((((/* implicit */long long int) var_2)), (var_12)))))));
}
