/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184574
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_13 ^= max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 994771917045294480LL)) ? (((/* implicit */long long int) var_11)) : (arr_1 [i_0 + 2])))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_7)) : (4653124964844031956ULL))));
        var_14 = ((long long int) ((((/* implicit */_Bool) -4653698554351692259LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28766))) : (-37550580158884232LL)));
    }
    var_15 &= ((/* implicit */short) ((((/* implicit */int) var_5)) ^ (var_11)));
}
