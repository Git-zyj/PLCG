/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161627
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
    var_16 = ((/* implicit */unsigned char) max((4011681011248444604LL), (-4011681011248444607LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-4011681011248444607LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_1 [4U])) : (((/* implicit */int) arr_1 [i_0]))));
    }
}
