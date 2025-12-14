/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171079
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3200933297264165746LL)) ? (var_14) : (4294967295U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 15)) : (1099509530624LL)))) ? (((((/* implicit */_Bool) var_5)) ? (-9115035395198346604LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1099509530611LL)) ? (-1099509530625LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 250558350U)) ? (3932870995U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))), (arr_2 [i_0] [i_0] [14ULL])));
                var_21 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) max((-1099509530628LL), (4392938488553877962LL)))))));
            }
        } 
    } 
}
