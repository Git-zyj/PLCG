/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189275
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)113)) : (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_0)) - (157)))))));
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) max((((((/* implicit */int) var_14)) - (((/* implicit */int) var_0)))), (((/* implicit */int) var_5))))), (((var_6) >> (((7489551939216456187LL) - (7489551939216456156LL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) var_6);
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0]))))), (((arr_0 [i_0] [i_1]) ? (min((((/* implicit */unsigned long long int) var_15)), (var_9))) : (((/* implicit */unsigned long long int) var_8)))))))));
                var_20 += ((/* implicit */_Bool) 5210648704685587728LL);
                var_21 = ((/* implicit */unsigned long long int) (+(((long long int) var_3))));
            }
        } 
    } 
}
