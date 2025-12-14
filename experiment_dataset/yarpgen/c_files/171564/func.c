/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171564
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) ((((var_7) ? (var_8) : (var_6))) << (((18446744073709551615ULL) - (18446744073709551589ULL)))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_6))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) << (((/* implicit */int) arr_1 [(_Bool)1]))))) : ((+(var_4)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (0ULL))))) + (((4294967295U) >> (((9189845931314319243ULL) - (9189845931314319239ULL)))))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_5);
}
