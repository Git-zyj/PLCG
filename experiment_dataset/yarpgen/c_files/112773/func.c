/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112773
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
    var_14 &= ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = max((((unsigned int) arr_1 [i_1 + 1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 758504947U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2821749465U)))) ? (1815624641U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)0)))));
                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned int) arr_0 [i_1 + 1])), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4094650424U)))))) ? (((unsigned int) 2633299329U)) : ((~((~(var_13)))))));
            }
        } 
    } 
}
