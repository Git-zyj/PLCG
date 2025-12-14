/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179137
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
    var_10 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) -928375631)), (max((var_6), (var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_11 *= (signed char)96;
                var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-95))));
            }
        } 
    } 
    var_13 = ((((((/* implicit */_Bool) ((signed char) 2642607093U))) || (((/* implicit */_Bool) min((((/* implicit */int) (signed char)-3)), (-678857115)))))) ? (((/* implicit */int) var_9)) : (min((((/* implicit */int) ((signed char) 1985694110))), (min((1534377520), (67100672))))));
}
