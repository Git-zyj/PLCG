/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144903
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_12))))))) : (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (2167939858U)))))))));
    var_19 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((short) (short)-13294)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_1 [(short)1] [i_0]), (((/* implicit */unsigned char) arr_0 [5U]))))) ? (((/* implicit */int) ((unsigned short) 9143690847477816682ULL))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2])) ? (var_7) : (((/* implicit */int) arr_1 [i_0] [i_0 + 2])))))) == (min((((arr_0 [i_0]) ? (-1314550063) : (((/* implicit */int) arr_0 [(_Bool)1])))), (((/* implicit */int) var_5))))));
    }
    var_22 = ((/* implicit */int) (~(var_16)));
}
