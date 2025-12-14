/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105773
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
    var_20 &= min((((/* implicit */short) (_Bool)1)), ((short)-31123));
    var_21 = var_9;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [(short)1] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0 - 1])) >> (((/* implicit */int) arr_0 [i_0 + 1])))) + (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (short)-9471)))))));
                arr_6 [i_0 + 1] [i_1] = var_16;
                var_22 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
