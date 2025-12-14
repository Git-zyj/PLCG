/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131317
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
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */int) ((short) arr_0 [i_0 - 1]))) : (((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))))));
                var_16 = max((((/* implicit */unsigned long long int) var_10)), (max((var_6), ((-(var_0))))));
                var_17 = ((/* implicit */signed char) (((_Bool)1) ? (min((var_12), (((/* implicit */unsigned long long int) ((short) var_2))))) : ((~(var_0)))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_3), (var_10)))) : (((/* implicit */int) ((short) (short)-9135))))) : (((/* implicit */int) var_11))));
}
