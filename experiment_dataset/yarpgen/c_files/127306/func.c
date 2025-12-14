/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127306
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
    var_17 = var_3;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) (short)-14051))))) : (((((/* implicit */_Bool) -674361946512904244LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23))) : (var_11))))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) (_Bool)1))))));
                var_19 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
                var_20 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (674361946512904243LL) : (((/* implicit */long long int) var_8)))))))));
                var_21 = ((/* implicit */unsigned int) (short)-14055);
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(var_0)))), (((var_5) ? (-8536482060572166818LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) 2862885776557385146ULL)) ? (((/* implicit */unsigned long long int) 674361946512904259LL)) : (9513861398337743022ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_7)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
}
