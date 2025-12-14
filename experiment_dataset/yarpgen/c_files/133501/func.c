/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133501
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = max((min((((/* implicit */int) arr_1 [i_1])), (var_7))), (((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) arr_2 [i_0])) : (((int) var_2)))));
                var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) -735754675)) ? (((/* implicit */int) (short)15282)) : (16368))) / (arr_5 [i_0])));
            }
        } 
    } 
    var_12 = (~(((((/* implicit */_Bool) 390669267)) ? (-1056146517) : (((/* implicit */int) var_9)))));
    var_13 -= min((((((((/* implicit */_Bool) (short)16382)) && (((/* implicit */_Bool) var_3)))) ? (max((((/* implicit */int) var_8)), (var_3))) : (var_3))), (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) -1281484889))))), (var_8)))));
    var_14 = max((var_9), ((short)32767));
}
