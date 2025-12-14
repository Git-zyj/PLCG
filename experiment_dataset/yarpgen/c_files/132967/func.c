/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132967
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned int) (-(arr_0 [i_0])));
        var_16 = ((/* implicit */signed char) arr_3 [i_0] [13LL]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_18 += ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned short) arr_4 [i_1]))));
    }
    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (11387043671020091053ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (var_4))))));
    var_20 = ((/* implicit */signed char) 17438497619113879759ULL);
}
