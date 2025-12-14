/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105522
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (unsigned char)145)));
        var_15 = ((/* implicit */int) ((unsigned char) (_Bool)1));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)110)) && (((/* implicit */_Bool) (unsigned char)177)))))));
        arr_4 [i_0] = ((unsigned char) var_8);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((arr_5 [i_1]) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)124)) : (var_3))) : (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_1 [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */short) (unsigned char)153);
    }
    var_18 = (!((!(((/* implicit */_Bool) var_13)))));
}
