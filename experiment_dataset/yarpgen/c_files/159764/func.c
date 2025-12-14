/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159764
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
    var_10 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [4LL])))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
}
