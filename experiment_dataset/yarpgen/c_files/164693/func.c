/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164693
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (9325871032199154319ULL))))))));
        var_13 *= ((/* implicit */unsigned char) max((-9223372036854775805LL), (((/* implicit */long long int) var_6))));
    }
    var_14 |= ((/* implicit */_Bool) max((9120873041510397296ULL), (((/* implicit */unsigned long long int) var_5))));
}
