/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188413
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
    var_20 = ((/* implicit */short) min((max((max((var_7), (var_14))), (var_2))), (var_19)));
    var_21 = var_10;
    var_22 = ((/* implicit */_Bool) var_13);
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_18)))) & ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_25 ^= ((/* implicit */unsigned int) ((((((((/* implicit */int) var_10)) + (((/* implicit */int) var_14)))) + (((/* implicit */int) arr_1 [i_0])))) + ((+(((/* implicit */int) arr_1 [i_0]))))));
    }
}
