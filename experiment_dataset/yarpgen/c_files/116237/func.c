/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116237
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (short)-25873))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((signed char) arr_0 [i_0 + 2] [i_0 + 1]));
        var_14 ^= ((/* implicit */short) 3544839123U);
        arr_2 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [9U] [i_0])) < ((~(((/* implicit */int) (short)-11331))))));
    }
}
