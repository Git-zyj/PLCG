/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173088
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
    var_13 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    }
    var_16 = ((/* implicit */int) max((var_6), (var_12)));
}
