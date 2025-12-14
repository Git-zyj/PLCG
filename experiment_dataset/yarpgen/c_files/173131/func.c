/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173131
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = var_12;
                var_20 += ((/* implicit */short) (+(-8437863592592034063LL)));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-77)) ? (((((/* implicit */_Bool) var_18)) ? (4294967295U) : (var_0))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) var_13))));
}
