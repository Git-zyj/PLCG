/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168817
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(-4546013989158259683LL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(-401440476)));
                var_20 = ((/* implicit */long long int) var_11);
                var_21 = ((/* implicit */_Bool) (-(arr_0 [i_0])));
                var_22 = ((/* implicit */unsigned short) (+(-2147483634)));
                var_23 = ((/* implicit */int) var_5);
            }
        } 
    } 
}
