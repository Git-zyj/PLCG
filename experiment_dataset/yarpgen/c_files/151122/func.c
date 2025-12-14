/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151122
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) (~((~((~(arr_1 [i_0 - 1])))))));
        arr_4 [i_0] [i_0 + 2] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        arr_5 [i_0] &= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_21 &= ((/* implicit */signed char) ((unsigned int) arr_6 [i_1]));
        var_22 = (~(-1750885496));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1] [i_1])))))));
    }
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2138401231398088592LL))));
    var_25 = var_11;
}
