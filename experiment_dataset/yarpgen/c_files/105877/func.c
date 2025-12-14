/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105877
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
    var_14 = ((/* implicit */unsigned long long int) var_12);
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [8U] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((12407776948471462997ULL), (6038967125238088604ULL)))));
        var_16 = ((/* implicit */short) var_5);
        arr_3 [i_0] = ((/* implicit */signed char) var_2);
    }
    var_17 ^= ((/* implicit */unsigned char) var_8);
    var_18 -= ((/* implicit */unsigned long long int) var_11);
}
