/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120788
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
    for (int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 - 4]))))) ? ((+(((/* implicit */int) arr_0 [i_0 - 2])))) : (max((((/* implicit */int) arr_0 [i_0 - 1])), (((((/* implicit */_Bool) arr_0 [(unsigned short)18])) ? (((/* implicit */int) arr_0 [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 - 4]))))))));
        var_20 = ((/* implicit */unsigned short) min((-739283508), (((/* implicit */int) (unsigned short)14003))));
    }
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3639548961U)))) ? (((((/* implicit */int) var_0)) + (-947343380))) : ((+(-1624961783)))))), ((+(var_15)))));
    var_22 = ((/* implicit */unsigned short) var_8);
    var_23 *= ((/* implicit */unsigned int) var_18);
    var_24 = (+(var_5));
}
