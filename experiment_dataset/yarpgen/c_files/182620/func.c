/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182620
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)18416)), ((-9223372036854775807LL - 1LL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) arr_0 [i_0 + 1]);
        var_22 = ((/* implicit */short) ((((/* implicit */int) arr_1 [(signed char)10])) / (var_5)));
        arr_2 [i_0] [1ULL] = ((/* implicit */signed char) ((var_14) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_23 = ((/* implicit */signed char) (short)-18403);
    }
}
