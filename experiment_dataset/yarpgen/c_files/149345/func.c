/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149345
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
    var_10 &= ((/* implicit */unsigned short) ((var_1) & (((/* implicit */unsigned long long int) ((var_4) << (((((/* implicit */int) var_9)) - (47171))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (signed char)71);
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767)))))));
                var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
            }
        } 
    } 
}
