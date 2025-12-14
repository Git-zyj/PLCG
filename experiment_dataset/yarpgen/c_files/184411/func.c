/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184411
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [10ULL] = max((max((18446744073709551615ULL), (18446744073709551591ULL))), (arr_1 [i_0] [4ULL]));
        arr_3 [i_0] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [14ULL]) : (arr_0 [i_0] [i_0]))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))) : (arr_1 [i_0] [i_0])))));
    }
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (max((18446744073709551615ULL), (18446744073709551614ULL)))));
}
