/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177690
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) ? ((-(((/* implicit */int) (unsigned char)130)))) : (((/* implicit */int) var_14))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))));
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)193)) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_15))))));
    }
    var_24 = var_2;
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned char)255)) - (250))))))))));
}
