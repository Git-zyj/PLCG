/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17404
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
    var_17 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        var_18 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6U]))) <= (var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_11)));
        var_19 += ((arr_2 [i_0]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (short)17233)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
}
