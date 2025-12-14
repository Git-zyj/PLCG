/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163077
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) 0U))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) (short)1555))))))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_1 [i_0] [(short)2]))));
    }
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 10U))));
}
