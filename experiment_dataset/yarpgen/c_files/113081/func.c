/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113081
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
    var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)48322))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */signed char) var_5);
                var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) (signed char)78)) ? (min((6881772338847108912LL), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)116)))))))));
            }
        } 
    } 
}
