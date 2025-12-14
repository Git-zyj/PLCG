/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159326
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
    var_19 = ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */unsigned int) var_9);
                    var_21 = (-(max((5806486001798682731LL), (-5806486001798682731LL))));
                }
            } 
        } 
    } 
}
