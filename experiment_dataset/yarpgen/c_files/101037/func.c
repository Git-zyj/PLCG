/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101037
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
    var_19 = ((/* implicit */unsigned int) var_16);
    var_20 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((!((_Bool)1))) && (((/* implicit */_Bool) arr_1 [i_0 - 2])))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) var_16))));
    }
}
