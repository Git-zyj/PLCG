/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1002
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
    var_14 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4192256ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_1 [i_0]))) : (arr_1 [i_0]));
        var_16 += ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_1 [(short)10]))));
        arr_2 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) (signed char)127)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    }
}
