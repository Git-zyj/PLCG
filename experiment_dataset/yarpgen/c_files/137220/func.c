/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137220
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned int) var_4);
                arr_6 [i_0 - 1] |= ((/* implicit */unsigned char) var_1);
                var_18 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((unsigned long long int) arr_4 [i_1])), (((/* implicit */unsigned long long int) var_7))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
    var_20 -= ((unsigned char) var_7);
}
