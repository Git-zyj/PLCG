/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117293
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
    var_11 = ((((((0) + (((/* implicit */int) var_4)))) == (((((/* implicit */_Bool) (short)18480)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (short)32767)))))) ? (492328149) : (((((/* implicit */_Bool) max((var_2), (var_10)))) ? (((int) var_2)) : ((~(((/* implicit */int) var_6)))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_0) + (-2073429073))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) min((var_6), (((/* implicit */short) ((var_8) < (var_0))))))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_5))))) ? (min((435423003), (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) var_7)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_7) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_14 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((arr_1 [i_0] [i_0]) / (((/* implicit */int) var_1)))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [3] [i_0])) : (((/* implicit */int) arr_0 [1] [1])))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) (short)-21571))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [3] [3]))))) : (((/* implicit */int) arr_0 [i_0] [i_0])))) * (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_3))))));
        var_16 = (-((~(0))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_1 [i_0] [i_0]))));
    }
    var_18 = ((/* implicit */short) max(((~(((/* implicit */int) (short)-21567)))), (((/* implicit */int) max(((short)0), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-21571))))))))));
    var_19 = ((/* implicit */int) (short)0);
}
