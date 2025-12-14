/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187306
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
    var_11 = var_2;
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = var_8;
        var_12 = (i_0 % 2 == zero) ? (((/* implicit */short) max((((/* implicit */int) ((short) (~(((/* implicit */int) (short)-23172)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (2014)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_0 [i_0] [i_0]))))))))) : (((/* implicit */short) max((((/* implicit */int) ((short) (~(((/* implicit */int) (short)-23172)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((((((/* implicit */int) arr_0 [i_0] [i_0])) - (2014))) + (21878))) - (14)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_13 += ((/* implicit */short) ((((/* implicit */int) ((short) var_6))) + (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))));
        var_14 = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (short)2137)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)-23173))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2))))))), (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
}
