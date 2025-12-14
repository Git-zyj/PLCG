/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14340
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
    var_19 *= ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((_Bool) (+(7858197470088349956ULL)))))));
                var_21 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -413303444)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_4 [10ULL] [i_1] [i_1])) ? (804851176) : (((/* implicit */int) (signed char)-21))))))));
            }
        } 
    } 
}
