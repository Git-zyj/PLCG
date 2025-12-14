/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114584
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
    var_14 = ((/* implicit */_Bool) (+(var_0)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (var_0) : (3808676238U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((arr_0 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (var_9)))));
                var_16 = ((/* implicit */unsigned int) arr_4 [19U]);
            }
        } 
    } 
}
