/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1193
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
    var_11 &= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (_Bool)1)), (min((var_0), (((/* implicit */unsigned int) var_1))))))));
    var_12 = var_7;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = arr_2 [i_0];
        var_14 = (_Bool)1;
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_15 = arr_3 [i_1];
        var_16 = ((/* implicit */unsigned int) min((var_16), ((+(((((/* implicit */_Bool) arr_3 [i_1])) ? (var_3) : (var_3)))))));
    }
    var_17 = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_1))));
}
