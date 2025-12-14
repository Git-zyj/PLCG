/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178202
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_5);
                arr_6 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 14U)) ? (min((2871200406U), (((/* implicit */unsigned int) 1401019812)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) var_5))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2351722852U), (2351722852U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2102811639U)) : (var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_13)))) : (var_2)))));
            }
        } 
    } 
}
