/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15730
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
    var_18 &= max((((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_16)))), (((/* implicit */int) var_17)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (494600554901843828ULL)))) ? (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))) : (((/* implicit */int) max((arr_4 [i_0 - 1] [20LL] [i_0 - 1]), (var_8))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) max(((_Bool)1), (((_Bool) (_Bool)1))))) / (((/* implicit */int) (signed char)116))));
            }
        } 
    } 
    var_21 = var_3;
}
