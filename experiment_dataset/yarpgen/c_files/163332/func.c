/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163332
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
    var_10 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)3])), (max(((+(3ULL))), (((/* implicit */unsigned long long int) (unsigned char)246))))));
        var_12 = ((/* implicit */short) max(((~(((unsigned long long int) var_6)))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))) & (min((18446744073709551615ULL), (1ULL)))))));
    }
    var_13 = var_2;
}
