/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181393
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (4784132450130647063LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8)))) ? (((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (6663091763667097777LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_16))) | (var_5))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
        arr_3 [i_0] = (~(((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
    }
}
