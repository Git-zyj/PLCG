/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149472
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max(((~(((/* implicit */int) min((var_4), ((signed char)99)))))), (((/* implicit */int) max((var_9), (arr_0 [i_0 - 1] [i_0 - 1]))))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)77))));
            }
        } 
    } 
    var_22 -= ((/* implicit */signed char) var_16);
}
