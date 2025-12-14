/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136068
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((4358032962188036361LL) - (((/* implicit */long long int) 536793613)))) - (((/* implicit */long long int) ((arr_1 [i_0]) << (((/* implicit */int) var_8)))))));
                var_12 = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_13 = var_9;
}
