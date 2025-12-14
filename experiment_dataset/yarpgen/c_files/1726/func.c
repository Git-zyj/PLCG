/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1726
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = var_5;
                var_15 -= ((/* implicit */unsigned long long int) (short)-32764);
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_5))));
    var_17 = ((/* implicit */long long int) ((min((max((var_11), (((/* implicit */unsigned long long int) -29LL)))), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) 1862915996))))))) != (((/* implicit */unsigned long long int) var_9))));
}
