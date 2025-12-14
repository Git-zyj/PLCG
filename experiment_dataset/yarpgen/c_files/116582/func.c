/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116582
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_12)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((-2147483644) / (((/* implicit */int) var_11)))) == (((int) arr_0 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -2147483644)) || (((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_1 [i_0 + 3]))))) ? (((/* implicit */int) (signed char)-74)) : ((+(((/* implicit */int) arr_0 [i_0]))))))));
    }
}
