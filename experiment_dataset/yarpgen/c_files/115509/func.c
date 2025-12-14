/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115509
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_19)))))));
        var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */int) (short)7835)) : (((/* implicit */int) (short)7835))));
        arr_3 [(unsigned char)13] [(unsigned char)13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)7848)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned char)217)))) * ((-(((/* implicit */int) var_4))))));
    }
    var_22 = ((/* implicit */short) (-(((/* implicit */int) var_17))));
    var_23 = ((/* implicit */short) max((var_9), (var_10)));
}
