/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131992
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
    var_16 &= ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) arr_0 [i_1] [i_0]);
                var_18 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (short)-10187)), (0ULL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_8);
}
