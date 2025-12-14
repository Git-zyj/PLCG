/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100334
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
    var_15 -= ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) var_13)), (var_6))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */int) var_13))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (0ULL)))))));
    var_16 &= ((/* implicit */unsigned long long int) (~(0)));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */short) var_14);
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((4294967295U) / (((/* implicit */unsigned int) -1)))), (((/* implicit */unsigned int) 0)))))));
                }
            } 
        } 
    } 
}
