/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122346
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (-(((unsigned int) arr_1 [i_0]))));
        var_19 = arr_1 [i_0];
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)1))))) - (((((/* implicit */_Bool) (-(var_7)))) ? (max((var_10), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) var_9)))))))));
    var_21 = ((/* implicit */unsigned int) var_13);
    var_22 = (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (signed char)-2))))))));
}
