/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160391
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
    var_18 |= ((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                var_19 ^= ((/* implicit */int) var_4);
            }
        } 
    } 
}
