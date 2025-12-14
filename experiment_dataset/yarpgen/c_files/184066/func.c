/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184066
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) ((short) var_12))) ? (max((((/* implicit */unsigned int) (short)11289)), (3264737591U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-26223), (var_7))))))), (((((/* implicit */_Bool) ((3264737591U) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17287))))) : (var_8)))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (arr_0 [i_0])));
    }
    var_18 = ((var_15) << ((((~(((/* implicit */int) (!(((/* implicit */_Bool) 1169452664U))))))) + (32))));
}
