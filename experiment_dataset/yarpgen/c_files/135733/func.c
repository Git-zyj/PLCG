/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135733
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_12 = arr_0 [7];
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))));
    }
    var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18)) / ((-(((/* implicit */int) (_Bool)1))))))) ? ((-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))) & (((((/* implicit */int) var_2)) & (((((/* implicit */int) var_9)) / (((/* implicit */int) var_1))))))));
    var_16 = ((/* implicit */signed char) var_0);
}
