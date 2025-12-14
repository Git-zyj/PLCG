/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110160
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) + (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)-108))))))));
    var_18 = ((long long int) ((((var_16) ? (((/* implicit */int) var_12)) : (var_6))) & (((var_3) - (((/* implicit */int) (short)-23990))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned char) arr_3 [i_0])), (var_15))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-31914)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) ? (((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (var_3)))))))));
                arr_5 [10U] |= ((/* implicit */short) ((((/* implicit */int) (short)10232)) != (((/* implicit */int) (short)-31914))));
            }
        } 
    } 
}
