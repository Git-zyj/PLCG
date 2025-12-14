/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158094
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
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_20 -= ((((((_Bool) (signed char)127)) ? (((/* implicit */int) ((signed char) var_9))) : (var_15))) == ((~(((/* implicit */int) arr_0 [i_0 - 1])))));
        var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (var_10)))) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0])));
    }
    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_17))));
}
