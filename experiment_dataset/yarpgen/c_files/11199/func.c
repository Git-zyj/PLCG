/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11199
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
    var_10 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
                var_12 = ((/* implicit */int) ((arr_1 [i_0 - 1] [i_0 - 1]) >> ((((~(max((((/* implicit */long long int) 1145906129)), (78328806070769916LL))))) + (78328806070769935LL)))));
            }
        } 
    } 
}
