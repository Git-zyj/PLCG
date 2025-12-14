/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159327
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_4 [i_0] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_1 [(signed char)19] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1]))))), ((+(-5439795759208173939LL)))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */_Bool) (short)701)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8708165215598145539ULL))) : (((/* implicit */unsigned long long int) ((2388261400U) << (((8738692307254646327LL) - (8738692307254646307LL))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)48739)))), ((+(((/* implicit */int) var_7)))))))));
}
