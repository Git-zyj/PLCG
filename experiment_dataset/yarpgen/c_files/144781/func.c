/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144781
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
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_10)) : (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_9))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4328263505030636696ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_21 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 + 1] [i_0]))), (min((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 2] [i_0])))));
        var_22 += ((/* implicit */unsigned int) min((arr_1 [i_0 + 1] [i_0 + 2]), (arr_1 [i_0 + 2] [i_0 + 2])));
        var_23 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    var_24 = ((/* implicit */int) var_14);
}
