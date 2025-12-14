/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155481
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((3018492436278078872LL) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2])))));
        var_14 += ((/* implicit */long long int) arr_0 [i_0 + 1]);
    }
    var_15 = ((/* implicit */unsigned short) var_5);
}
