/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101879
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
    var_13 = ((((/* implicit */_Bool) (-(9970117477721771378ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (var_12));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_14 *= max((var_7), (arr_2 [i_0]));
        var_15 = max((max((arr_1 [i_0]), (min((var_12), (15318810708275253315ULL))))), ((-(0ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_16 += ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]));
        arr_5 [i_1] = (~(14085067561473713845ULL));
    }
}
