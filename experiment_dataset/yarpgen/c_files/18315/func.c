/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18315
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (min((var_11), ((((+(4294967288U))) ^ (var_14)))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 = arr_0 [i_0] [i_0];
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3263681487U)) ? (0U) : (2908277539U)))) ? (((((/* implicit */_Bool) 124515758U)) ? (1034034203U) : (1468584229U))) : (1975663542U));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_9) : (min((var_13), (var_1))))))));
    var_22 -= var_11;
}
