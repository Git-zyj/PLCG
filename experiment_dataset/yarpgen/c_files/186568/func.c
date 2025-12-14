/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186568
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_10 = var_1;
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [18U]))) / (var_5))))))))));
    }
    var_12 = ((/* implicit */short) ((((_Bool) (+(0U)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5)))) ? (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_1)) + (31099))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (unsigned char)236)))))))));
}
