/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178503
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
    var_14 = ((/* implicit */short) max((var_7), (var_11)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = arr_0 [i_0] [i_0];
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)18034)) >= (min((((/* implicit */int) (signed char)85)), (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) (short)29644)) : (((/* implicit */int) (signed char)96))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_3 [i_1]))) / (((/* implicit */int) arr_3 [i_1]))));
        var_16 = ((unsigned int) ((((/* implicit */int) (signed char)-73)) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)-106))))));
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 3539530592U))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_7))), ((+(((((/* implicit */int) (short)-32765)) ^ (((/* implicit */int) (short)-1)))))))))));
}
