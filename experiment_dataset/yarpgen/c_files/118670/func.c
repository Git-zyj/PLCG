/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118670
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 2]))))) && (((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (((/* implicit */short) var_10)))))));
        var_11 = ((/* implicit */short) (-(((max((var_8), (((/* implicit */unsigned long long int) (unsigned char)255)))) + (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))));
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) ((signed char) max((((/* implicit */short) var_0)), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) 2212668270U)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
    }
    var_13 = ((/* implicit */unsigned short) (unsigned char)2);
    var_14 = ((/* implicit */signed char) ((((10994296148012950612ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(var_7)))));
    var_15 = ((/* implicit */int) var_2);
}
