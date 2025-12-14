/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139769
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned short) (unsigned char)30);
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned char)225)))), (((/* implicit */int) (signed char)-1))));
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) var_2);
    var_18 &= ((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)98)), ((short)32753)));
}
