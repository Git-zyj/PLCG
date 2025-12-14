/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154637
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((arr_1 [i_0]) / (arr_2 [i_0])));
        var_13 = ((/* implicit */long long int) min((var_13), (arr_2 [i_0])));
    }
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((var_6) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7)))))))));
}
