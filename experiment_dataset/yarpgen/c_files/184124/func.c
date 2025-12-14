/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184124
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
    var_14 = ((/* implicit */_Bool) min((var_14), (var_13)));
    var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) var_4))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = (((_Bool)1) && ((_Bool)1));
                var_17 &= ((/* implicit */unsigned int) (-(2147483647)));
            }
        } 
    } 
}
