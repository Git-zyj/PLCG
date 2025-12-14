/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170908
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)21)))), (min((0U), (((/* implicit */unsigned int) (_Bool)1))))));
                var_15 = ((/* implicit */_Bool) min((-7742807806545012292LL), (((/* implicit */long long int) (unsigned short)252))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)65284)), (-6690676145114611647LL)));
}
