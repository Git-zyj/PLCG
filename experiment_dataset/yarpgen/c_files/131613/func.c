/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131613
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
    var_19 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))) - (max((((/* implicit */long long int) var_11)), (2190373881481343993LL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_20 = var_15;
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) max((arr_1 [i_0]), ((unsigned short)13326)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_18))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) (unsigned short)52210)) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) ((signed char) (unsigned short)52226)))));
    }
}
