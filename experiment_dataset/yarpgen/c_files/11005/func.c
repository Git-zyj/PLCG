/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11005
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
    var_14 += ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */_Bool) arr_2 [i_0] [(short)4]);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_0 [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_9);
}
