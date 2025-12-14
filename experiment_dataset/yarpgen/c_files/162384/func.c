/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162384
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
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_6);
        var_14 = ((((/* implicit */int) arr_2 [i_0 + 1])) - (((/* implicit */int) arr_0 [i_0])));
    }
    var_15 = ((/* implicit */unsigned short) var_9);
}
