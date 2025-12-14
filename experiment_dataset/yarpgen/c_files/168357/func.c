/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168357
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
        var_20 -= arr_0 [i_0] [i_0];
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)53483)))) : (18446744073709551615ULL)))) ? ((-(((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))) : ((+(((/* implicit */int) max((((/* implicit */short) var_17)), (var_2)))))))))));
}
