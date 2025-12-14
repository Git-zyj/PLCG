/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188741
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
    var_15 = var_4;
    var_16 = var_9;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((var_6), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) -2103769250)) : (min((((/* implicit */unsigned int) arr_0 [(signed char)6])), (var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (var_10)));
    }
}
