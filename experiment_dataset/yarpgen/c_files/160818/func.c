/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160818
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned int) var_19)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) var_6)) : (2877470552U)))))));
    var_21 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) var_9);
        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(short)6])))))) ? (((((/* implicit */_Bool) var_15)) ? (var_15) : (var_6))) : (((/* implicit */int) arr_1 [i_0] [(short)4]))));
    }
}
