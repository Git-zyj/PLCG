/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18498
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (8411077367849565433LL))))))));
        var_13 = ((/* implicit */unsigned long long int) ((-8411077367849565445LL) ^ (((/* implicit */long long int) -864730957))));
        var_14 -= ((/* implicit */unsigned long long int) (+(((long long int) var_3))));
        arr_2 [i_0] = ((/* implicit */int) (~(14699020742481682315ULL)));
    }
    var_15 = ((/* implicit */long long int) var_2);
}
