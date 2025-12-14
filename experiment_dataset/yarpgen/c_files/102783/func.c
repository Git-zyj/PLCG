/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102783
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (var_8)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] &= min(((~(((2244980959U) | (4053473688U))))), (((var_8) << (((var_11) - (2114280996U))))));
                var_18 = 0U;
            }
        } 
    } 
}
