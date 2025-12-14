/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136296
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
    var_15 -= ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_16 -= ((/* implicit */long long int) 2147483647);
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 1]);
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)-118)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_0 [(signed char)15] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0])))) / (((/* implicit */int) (unsigned short)454))));
    }
}
