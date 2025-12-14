/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13736
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
    var_16 -= ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_1 [i_0 + 2]))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (var_13))))))) ^ (arr_1 [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12587))) & (7725798729535718472ULL))) : (((/* implicit */unsigned long long int) -1829464557))));
    }
    var_18 = ((/* implicit */unsigned int) var_11);
}
