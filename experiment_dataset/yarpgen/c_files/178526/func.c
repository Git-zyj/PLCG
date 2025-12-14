/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178526
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
    var_11 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (short)(-32767 - 1)));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_12 = ((/* implicit */int) max((((arr_5 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1]))))) : (arr_4 [i_1]))), (min((4953804962004331706ULL), (arr_4 [i_1])))));
        var_13 = ((/* implicit */signed char) arr_5 [i_1]);
        var_14 = min((((/* implicit */unsigned long long int) ((short) arr_4 [i_1]))), (arr_4 [i_1]));
    }
    var_15 = ((/* implicit */unsigned short) 4U);
    var_16 = ((/* implicit */unsigned int) (+((-(var_9)))));
}
