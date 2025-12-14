/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107280
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
    var_17 = ((/* implicit */int) (-(var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1480620757))))));
                arr_8 [i_0] = ((/* implicit */signed char) arr_5 [i_0 + 3] [i_0 - 3]);
                arr_9 [i_0] &= ((/* implicit */int) min((((((/* implicit */int) arr_0 [i_0 - 3])) >= (((/* implicit */int) (unsigned short)25851)))), (((arr_6 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)58)))))));
            }
        } 
    } 
}
