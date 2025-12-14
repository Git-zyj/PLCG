/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129991
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
    var_13 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(((/* implicit */int) (_Bool)0)))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_7))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_7);
}
