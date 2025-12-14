/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108179
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
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((((arr_1 [i_0]) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (!(arr_0 [i_0 + 4] [i_0 - 3]))))));
        var_19 = arr_1 [i_0];
    }
    var_20 = ((/* implicit */short) var_18);
}
