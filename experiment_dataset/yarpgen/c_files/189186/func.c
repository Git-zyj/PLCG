/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189186
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
    var_11 = var_1;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) (((-((+(arr_1 [i_0]))))) == (var_7)));
        var_12 = ((((((/* implicit */_Bool) var_9)) ? (max((arr_2 [i_0]), (var_5))) : (((/* implicit */int) ((var_7) >= (var_0)))))) + ((-(((((/* implicit */_Bool) var_7)) ? (var_5) : (var_1))))));
        var_13 = ((int) max((((/* implicit */int) ((var_5) > (var_6)))), ((~(var_8)))));
    }
}
