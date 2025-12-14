/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138338
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60124))) * (((unsigned long long int) arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_0 [i_0]) - (((/* implicit */long long int) 1800489676)))));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15600029357839508512ULL)) ? (1800489683) : (var_9)))), (4413160032353813858ULL)))) ? (((/* implicit */unsigned long long int) var_5)) : (var_0)));
}
