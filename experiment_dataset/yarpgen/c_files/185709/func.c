/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185709
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
    var_11 -= ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((-4491938652771364657LL), (-1071818999181394899LL)))) ? ((~(var_0))) : (((var_5) / (var_1))))) : (var_10));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_12 += arr_1 [i_0];
    }
    var_13 = (+(max((var_9), ((~(var_0))))));
}
