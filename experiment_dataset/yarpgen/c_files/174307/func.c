/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174307
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
    var_12 = ((/* implicit */short) max((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(-1587291059)))), (var_5))))));
    var_13 = 1630039812U;
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = arr_3 [(short)3] [i_1];
                arr_7 [i_0] = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
}
