/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108942
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = max(((~(max((18446744073709551615ULL), (arr_0 [i_0]))))), (((unsigned long long int) 1152921504606781440ULL)));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (arr_1 [i_0])))));
        var_14 = arr_2 [i_0] [i_0];
    }
    var_15 = ((unsigned long long int) (+(201326592ULL)));
}
