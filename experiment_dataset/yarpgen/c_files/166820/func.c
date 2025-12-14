/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166820
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */unsigned short) max((((((3661578953U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2468018662U)))))) : ((-(3661578951U))))), ((+(((((/* implicit */_Bool) (unsigned short)2705)) ? (633388342U) : (2133215562U)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_5);
    var_21 ^= ((/* implicit */_Bool) var_17);
}
