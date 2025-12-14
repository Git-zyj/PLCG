/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125589
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) arr_0 [i_0]);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) : (arr_0 [i_0])));
    }
    var_15 &= ((/* implicit */int) var_4);
}
