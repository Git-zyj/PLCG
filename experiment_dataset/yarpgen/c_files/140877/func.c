/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140877
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
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (var_9) : (481001221))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (160710488) : (max((1566252972), (((/* implicit */int) arr_2 [i_0 + 3]))))))) ? ((-(arr_4 [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 - 2])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_3);
}
