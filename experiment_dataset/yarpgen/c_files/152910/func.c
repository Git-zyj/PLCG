/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152910
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
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((_Bool) var_18))), (var_6)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_2 [(signed char)6] [i_0 - 1] = ((/* implicit */signed char) arr_1 [i_0 + 3] [i_0 + 1]);
        var_20 ^= ((/* implicit */signed char) arr_0 [i_0] [14ULL]);
    }
}
