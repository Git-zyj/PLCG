/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129948
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)7046)) != (((/* implicit */int) var_4)))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])) : ((~(((/* implicit */int) var_9))))));
    }
    var_15 = ((/* implicit */long long int) (_Bool)1);
}
