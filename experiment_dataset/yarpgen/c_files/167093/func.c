/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167093
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
        var_12 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_0)))), (((max((var_8), (((/* implicit */unsigned int) var_7)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) var_0)))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (var_11))))));
        var_13 &= ((/* implicit */int) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */unsigned int) var_11)) / (var_1)))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((var_6) == (var_11)))) + (var_11)))) > (((((((/* implicit */int) var_5)) >= (var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) var_6))))))));
}
