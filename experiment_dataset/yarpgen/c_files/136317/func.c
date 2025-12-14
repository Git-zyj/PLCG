/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136317
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [12U] &= ((/* implicit */unsigned int) arr_3 [i_1] [(_Bool)1] [i_0]);
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1684311100264040857LL)) ? (3809750620534343200LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
