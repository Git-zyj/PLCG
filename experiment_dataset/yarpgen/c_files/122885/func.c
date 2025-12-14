/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122885
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
    var_20 = var_11;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 426146816026552447ULL)) || (((/* implicit */_Bool) var_9))))), (var_12))))));
                var_22 = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
}
