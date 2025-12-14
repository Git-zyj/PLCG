/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156392
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
    var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_15), (max((var_9), (((/* implicit */unsigned int) -286849145)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (short)32763))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_1 [i_0] [i_0])))));
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((((/* implicit */int) (signed char)-113)) + (2147483647))) << (((((/* implicit */int) (signed char)113)) - (113))))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))), (((((((/* implicit */int) (signed char)-104)) < (((/* implicit */int) (signed char)-1)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -2105289070))))));
    }
}
