/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184128
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) 2346210494U);
                var_21 = max((((3170513385U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (arr_2 [i_0] [i_0]));
            }
        } 
    } 
    var_22 *= ((/* implicit */signed char) var_3);
}
