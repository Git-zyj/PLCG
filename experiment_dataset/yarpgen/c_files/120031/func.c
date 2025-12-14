/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120031
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
    var_16 -= ((/* implicit */short) ((((/* implicit */int) var_11)) * ((((!(((/* implicit */_Bool) var_8)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_5))))));
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) max((((short) (signed char)(-127 - 1))), (min((var_1), (((/* implicit */short) var_8)))))))));
    var_18 = ((short) max((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) arr_2 [i_0]);
        var_20 = ((/* implicit */short) (-(((/* implicit */int) var_12))));
    }
}
