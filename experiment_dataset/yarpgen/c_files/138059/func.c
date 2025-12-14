/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138059
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
    var_15 = ((/* implicit */short) (~(max((((/* implicit */int) (unsigned short)32768)), (((int) var_12))))));
    var_16 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */int) arr_7 [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1 - 1]))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) min((((18009092115524769696ULL) + (((/* implicit */unsigned long long int) -2635696186246627823LL)))), (((/* implicit */unsigned long long int) arr_1 [i_0])))));
                var_18 = ((_Bool) (+(((/* implicit */int) (signed char)125))));
            }
        } 
    } 
}
