/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109325
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
    var_19 = ((int) 1073741824);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [19] = ((((/* implicit */_Bool) ((int) ((int) -1)))) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) 1490730906)) ? (((int) 2147483641)) : (min((1803254330), (var_1))))));
                var_20 = ((/* implicit */int) max((var_20), (((int) (+(-1442097233))))));
            }
        } 
    } 
}
