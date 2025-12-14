/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159833
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
    var_18 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_0] [(signed char)16]));
                var_20 = ((/* implicit */signed char) max((((arr_2 [i_0]) | (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
        } 
    } 
}
