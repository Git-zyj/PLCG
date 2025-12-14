/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143757
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (signed char)-78)) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))), ((~((~(((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)-78))) ? (((/* implicit */int) ((var_1) == (((/* implicit */long long int) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (var_14))))))) ? ((-(((/* implicit */int) min(((unsigned short)61356), (((/* implicit */unsigned short) (signed char)116))))))) : (((/* implicit */int) (signed char)-78)))))));
    var_23 = ((/* implicit */short) var_3);
}
