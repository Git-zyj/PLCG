/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181449
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
    var_17 = 18446744073709551615ULL;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = max((((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [14ULL]))) ? (min((17365532047734945455ULL), (36028788429029376ULL))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [11ULL]) : (18446744073709551592ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
        var_19 = 12248388949562245882ULL;
        arr_2 [i_0] = max((((((/* implicit */_Bool) (~(arr_1 [4ULL] [i_0])))) ? (min((17365532047734945451ULL), (arr_1 [i_0] [i_0]))) : (((unsigned long long int) arr_0 [i_0])))), (((unsigned long long int) max((14983575896914691235ULL), (36028788429029360ULL)))));
    }
}
