/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170409
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)24282))));
                var_14 -= ((/* implicit */unsigned char) arr_1 [(short)1]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_11)), (var_3)));
}
