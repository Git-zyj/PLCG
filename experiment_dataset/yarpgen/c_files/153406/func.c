/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153406
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
    var_12 = var_9;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)10166)) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        var_13 = ((/* implicit */signed char) (_Bool)0);
        var_14 |= ((/* implicit */signed char) ((unsigned int) arr_1 [i_0 - 2]));
    }
}
