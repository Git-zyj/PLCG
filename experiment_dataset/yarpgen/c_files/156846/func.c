/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156846
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((((/* implicit */int) arr_0 [i_0])) != ((-(((/* implicit */int) arr_2 [i_0] [i_0 - 1])))));
        var_11 = ((/* implicit */int) arr_2 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
        var_13 *= ((/* implicit */unsigned int) arr_4 [i_1]);
        var_14 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_15 = var_9;
}
