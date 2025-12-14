/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135151
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
    var_15 = ((/* implicit */unsigned int) (signed char)3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) (_Bool)1);
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-484408940)))) ? ((-((((_Bool)0) ? (4271132431U) : (127U))))) : (((((/* implicit */_Bool) -4556960469851031438LL)) ? (4294967295U) : (23834859U)))));
                var_18 ^= ((/* implicit */long long int) max((min((((/* implicit */unsigned int) 468713567)), (4271132420U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4271132455U)) ? (-1625197766) : (((((/* implicit */_Bool) 229540931U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)50)))))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */unsigned long long int) 4271132457U);
}
