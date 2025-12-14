/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17588
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [(signed char)20] [(signed char)20] |= ((/* implicit */long long int) var_7);
                var_15 *= ((/* implicit */unsigned int) ((signed char) (unsigned short)58297));
            }
        } 
    } 
    var_16 = ((1U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))));
}
