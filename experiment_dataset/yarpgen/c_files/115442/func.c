/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115442
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
    var_11 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(short)6] [i_1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-23948))))));
                arr_7 [i_0] [1ULL] [i_1] = ((/* implicit */_Bool) (unsigned short)2470);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) (_Bool)1))), (((int) (~(((/* implicit */int) var_1)))))));
}
