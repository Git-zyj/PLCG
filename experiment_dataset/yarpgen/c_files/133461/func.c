/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133461
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
    var_20 = ((/* implicit */unsigned char) ((min(((-(((/* implicit */int) var_14)))), ((~(-63196249))))) != (((/* implicit */int) var_14))));
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(-63196249)))) : (var_9))), (max((4128768U), (var_18)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = min((arr_2 [i_0]), (((/* implicit */unsigned int) min((((/* implicit */int) ((var_4) != (var_4)))), (arr_1 [i_0] [i_0])))));
        var_22 = min((((((/* implicit */unsigned int) arr_3 [i_0])) / (arr_2 [i_0]))), (((((4290838527U) < (((/* implicit */unsigned int) -63196249)))) ? (4128768U) : (arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) var_1);
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_2 [(short)12]))));
    }
}
