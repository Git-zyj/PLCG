/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141871
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
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) var_2)), (var_1))) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))) >= (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0 - 2] [i_0])) < (2065022249))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (max((5917633282853193320LL), (((/* implicit */long long int) arr_1 [i_0] [i_0 - 1]))))));
    }
    var_13 = var_10;
}
