/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18021
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) 1125899906834432LL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0]))));
        var_18 = (!(arr_0 [i_0]));
    }
    var_19 ^= var_14;
}
