/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157682
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
    var_19 += ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_14))))))))));
    var_20 = ((/* implicit */short) ((unsigned short) min((((/* implicit */int) var_0)), (((var_9) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0])))))));
        var_22 = var_6;
    }
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)32752)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)213))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)213)))) : (((/* implicit */int) (short)-7569)))))));
}
