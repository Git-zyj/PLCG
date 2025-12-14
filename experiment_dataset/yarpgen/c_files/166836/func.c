/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166836
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_0 [(short)3])) & (((/* implicit */int) arr_1 [i_0])))) ^ (((int) var_7)))) / (((/* implicit */int) ((signed char) max((((/* implicit */int) var_6)), (var_9)))))));
        arr_2 [i_0] = (~(max((((var_9) % (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((signed char) (signed char)11))))));
        var_13 = arr_1 [i_0];
    }
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */short) var_1);
    var_16 &= ((/* implicit */int) var_5);
}
