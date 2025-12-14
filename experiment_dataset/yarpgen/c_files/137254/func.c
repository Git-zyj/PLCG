/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137254
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
    var_10 &= ((/* implicit */long long int) var_4);
    var_11 = max((var_9), (var_9));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((var_4) / (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        var_13 &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))));
    }
    var_14 = var_9;
}
