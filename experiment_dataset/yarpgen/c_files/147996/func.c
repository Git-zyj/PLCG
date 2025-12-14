/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147996
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
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) 3445838418U);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
    }
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (((unsigned int) var_4))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (var_3))), (var_7))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_6))))) ? (var_0) : (((/* implicit */int) ((unsigned char) var_3)))))));
    var_14 = ((/* implicit */_Bool) var_4);
}
