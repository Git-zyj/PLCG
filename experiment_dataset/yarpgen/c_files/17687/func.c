/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17687
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
    var_15 = var_5;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) < (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (~(-1476495398)));
        arr_6 [i_1] |= ((/* implicit */long long int) var_7);
        var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_1 [i_1]))) + ((~(((/* implicit */int) var_5))))));
    }
}
