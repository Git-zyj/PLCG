/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150378
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_0 [i_0]);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) arr_2 [i_0] [i_1])))) + (((/* implicit */long long int) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */short) var_13);
}
