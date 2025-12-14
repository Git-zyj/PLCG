/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116807
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
    var_15 &= ((((unsigned long long int) ((((/* implicit */_Bool) 9670364272090620305ULL)) ? (16283981172334206004ULL) : (856326887524273263ULL)))) << (((((((var_0) << (((var_14) - (12019445431920104433ULL))))) ^ (var_10))) - (16848187269417448138ULL))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_16 |= ((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) var_11)) ? (18446744073709551610ULL) : (arr_1 [i_0 - 2] [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 419180997621451131ULL)) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [14ULL])))))));
        var_17 = min((var_10), ((~(18168714611586600870ULL))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_0 [i_0 - 1] [16ULL])));
    }
}
