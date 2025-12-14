/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100068
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_15)))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_3);
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54065)) ? ((-(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_13)) : (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_8)) ? (var_14) : (var_11)))));
        var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) var_11))))));
        var_20 = var_7;
    }
}
