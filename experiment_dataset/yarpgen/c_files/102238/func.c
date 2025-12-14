/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102238
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
    var_14 -= ((/* implicit */long long int) min(((-(466194328U))), (4U)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0])) % (var_6)))) ? (max((arr_3 [i_0]), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [18ULL] [i_0]) : (arr_3 [i_0]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (4294967291U)))) ? (4U) : (4294967291U)))));
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_0 [18LL]), (((/* implicit */long long int) var_10)))), (min((var_7), (8079951156572969124LL)))))) ? (min((9047378631242156048LL), (((/* implicit */long long int) 4U)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
}
