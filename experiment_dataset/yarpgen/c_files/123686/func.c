/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123686
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
    var_13 ^= ((/* implicit */signed char) ((_Bool) var_3));
    var_14 = ((/* implicit */signed char) ((unsigned long long int) 18446744073709551615ULL));
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) & (var_8)));
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(short)7] [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (var_5)));
        var_17 = ((/* implicit */signed char) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_4)))))));
        var_18 = var_5;
    }
}
