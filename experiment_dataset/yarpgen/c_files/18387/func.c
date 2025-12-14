/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18387
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-495695262040474583LL), (((/* implicit */long long int) 1867779014))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (1867779043))))))) ? (((/* implicit */int) var_7)) : (((((((/* implicit */int) var_4)) + (2147483647))) << (((((((((/* implicit */_Bool) -1323558840400834513LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) + (98))) - (25))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = arr_1 [i_0];
        var_13 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 15741548367037959105ULL)) || (((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 1867779064)) : (var_6))))), (arr_1 [i_0])));
    }
}
