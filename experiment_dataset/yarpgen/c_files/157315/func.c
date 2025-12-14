/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157315
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
    var_18 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = (~(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 1048064U))))));
                arr_8 [i_0] [i_1 - 1] = var_7;
                arr_9 [i_1] [11LL] = ((_Bool) 4293919235U);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (var_0)));
}
