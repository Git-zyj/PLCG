/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132672
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
    var_10 = ((/* implicit */signed char) min((var_10), (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0 + 2] [(unsigned short)18] &= ((/* implicit */short) arr_0 [i_0 - 2] [i_0 - 4]);
        var_11 = arr_0 [i_0 + 1] [i_0];
        var_12 = ((/* implicit */int) (!((_Bool)1)));
    }
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
}
