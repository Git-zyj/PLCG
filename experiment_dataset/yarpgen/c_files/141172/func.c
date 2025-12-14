/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141172
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
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) || (((/* implicit */_Bool) arr_3 [i_0 - 1]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))));
        var_15 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_14);
    var_17 = ((/* implicit */short) ((max((9775774453569095352ULL), (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    var_18 = var_4;
}
