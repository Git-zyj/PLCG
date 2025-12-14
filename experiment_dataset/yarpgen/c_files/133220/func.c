/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133220
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = min((((/* implicit */long long int) ((unsigned char) arr_1 [i_0]))), (2LL));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65529)) || (((/* implicit */_Bool) (short)14))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_15 = ((/* implicit */signed char) var_0);
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)59);
    }
    var_16 = ((/* implicit */short) var_8);
    var_17 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) << ((((~(var_7))) - (3149803658312755823ULL)))))) : (((((/* implicit */_Bool) 18667217U)) ? (-2146989992026043075LL) : (((/* implicit */long long int) 4294967295U)))));
}
