/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181117
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
    for (short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = min(((short)-31273), ((short)-31273));
                arr_6 [i_1] = ((/* implicit */unsigned int) (short)31268);
            }
        } 
    } 
    var_18 = var_9;
}
