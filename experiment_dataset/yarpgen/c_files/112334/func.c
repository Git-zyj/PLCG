/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112334
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
    var_10 = ((/* implicit */long long int) max((var_10), (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)66)))))));
    var_11 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (signed char)(-127 - 1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((4290772992U) ^ (((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_1 [i_0]))), (((((/* implicit */_Bool) 3829079603U)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_0)))))))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) 0U))));
    }
}
