/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143020
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((var_8), (var_8)))))))));
    var_12 += ((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_2)) - (30807)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0 - 3] [i_0]));
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0 - 3] [i_0]) * (arr_0 [i_0 - 3] [i_0])));
    }
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))))))));
}
