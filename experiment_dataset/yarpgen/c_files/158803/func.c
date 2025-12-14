/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158803
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
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [(unsigned short)1] [3LL] = ((/* implicit */short) (+((~(((/* implicit */int) (unsigned short)21062))))));
                var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)28683), (((/* implicit */unsigned short) (short)-31881))))) ? (((/* implicit */int) (unsigned short)21062)) : (((((/* implicit */_Bool) 4294967295U)) ? (var_11) : (((/* implicit */int) (unsigned short)34271))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43644))))) : ((((~(var_4))) & (((-2814340940021229623LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)45)))))))));
                var_13 = max((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60608))))), (13204628754160829499ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-7077066488715876432LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-31881))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) var_8)) - (((((/* implicit */_Bool) (unsigned short)60334)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21048))) : (var_6)))))));
    var_16 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29885))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)28683)))) : ((~(((/* implicit */int) var_2))))))), (var_10)));
    var_17 = ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */_Bool) ((var_11) ^ (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_0)))), (var_5)))));
}
