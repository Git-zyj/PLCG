/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102027
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
    var_19 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (max(((~(var_6))), (((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) 2768801206406633258ULL))))), ((short)-30170))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (short)(-32767 - 1)));
        arr_4 [i_0] = ((/* implicit */_Bool) var_9);
    }
    for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1940135634U)) ? (((/* implicit */unsigned long long int) 2354831661U)) : (15677942867302918358ULL)))) ? (max((max((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (17U))), (var_0))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1 + 3] [i_1])))))));
        var_21 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 2])))))));
    }
}
