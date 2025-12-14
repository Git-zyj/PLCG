/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122321
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
    var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((long long int) 10839839870076118474ULL))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 1] [i_0 - 1] [i_0] &= ((/* implicit */unsigned char) 10839839870076118474ULL);
                arr_5 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) 6235449883946326598LL);
                var_12 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
        } 
    } 
}
