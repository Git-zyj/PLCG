/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154954
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */int) var_9)) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 458752)) ? (-6015603557702560959LL) : (((/* implicit */long long int) 458763))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((-6015603557702560948LL) % (6015603557702560935LL)))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_0) : (var_14))))))) ? ((+(var_6))) : (((/* implicit */unsigned int) ((var_8) - (((((/* implicit */int) (short)23923)) - (var_8))))))));
    var_20 = ((/* implicit */unsigned short) var_0);
}
