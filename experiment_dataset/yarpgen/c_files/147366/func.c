/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147366
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
    var_15 = ((/* implicit */short) var_9);
    var_16 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) arr_0 [i_0]);
                var_18 ^= arr_3 [i_1];
            }
        } 
    } 
    var_19 = var_12;
    var_20 = ((/* implicit */unsigned short) var_1);
}
