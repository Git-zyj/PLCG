/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166041
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
    var_20 = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))))))));
    var_21 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))) : ((+(var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_22 = ((/* implicit */int) (~(var_17)));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 2])) ? ((~(((/* implicit */int) (unsigned char)77)))) : (((((/* implicit */int) (signed char)8)) << (((var_0) - (1175275988U))))))))));
    }
}
