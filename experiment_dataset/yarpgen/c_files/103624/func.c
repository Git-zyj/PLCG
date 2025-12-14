/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103624
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
    var_12 = var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
                var_13 = ((/* implicit */short) var_5);
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (var_11)))) - (var_1)));
            }
        } 
    } 
}
