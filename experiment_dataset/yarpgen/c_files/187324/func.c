/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187324
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
    var_18 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1]));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_2))));
    }
}
