/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15500
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_13)), (var_9)))) & (((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (var_6)))) : (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((/* implicit */int) min((var_11), (((/* implicit */short) var_13))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_0)))) ? (max((((/* implicit */long long int) var_7)), (var_4))) : (min((((/* implicit */long long int) var_1)), (var_12)))));
        var_17 = ((/* implicit */signed char) max((min((((var_8) | (var_8))), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) min((var_9), (var_11))))));
        arr_5 [i_0] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (short)13606)) : (((/* implicit */int) (unsigned short)11206)))), (((/* implicit */int) var_13))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? ((~(var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((~(var_1))) : (((/* implicit */int) var_3))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) -1063968370)) ? (3690843718U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18862)))))), (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
}
