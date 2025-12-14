/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144528
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [(signed char)13] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-4875)) ? (236295491U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        var_10 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_4 [(short)11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-24570)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8352))) : (2890474467U)));
    }
    var_11 += ((/* implicit */_Bool) var_4);
}
