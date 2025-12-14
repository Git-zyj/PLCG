/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142795
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)56)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
    }
    var_17 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((11280853858634461231ULL) + (7583640697699419571ULL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))));
}
