/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16805
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */long long int) var_11)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((min((((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))), ((~(-924158586234312883LL))))), (((((((/* implicit */_Bool) arr_0 [19])) ? (arr_1 [i_0]) : (var_10))) & (((arr_1 [i_0]) ^ (arr_1 [i_0])))))));
        var_20 = min((min((arr_1 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0]))));
    }
}
