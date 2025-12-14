/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182305
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
    var_20 = ((/* implicit */_Bool) var_11);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned int) (-(var_16)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(var_16)))) : (((unsigned int) var_6))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) var_14))))));
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13)))) && (((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_15))))));
        var_24 = ((unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (var_17)))));
        var_25 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11))))));
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_14))));
}
