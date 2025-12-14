/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107716
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_17)) & (var_1)))));
                    var_20 = ((/* implicit */unsigned long long int) var_13);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_11);
}
