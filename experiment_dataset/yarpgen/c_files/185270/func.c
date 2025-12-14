/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185270
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
    var_18 = ((/* implicit */long long int) 33554431);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_19 -= ((/* implicit */signed char) 5604129529378574144LL);
        var_20 = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_0 - 1])), ((~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)8)), (arr_1 [i_0]))))))));
    }
    var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
}
