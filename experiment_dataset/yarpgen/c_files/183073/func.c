/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183073
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
    var_19 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) ((unsigned char) var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0 - 1]))));
        arr_4 [i_0] [i_0] = ((long long int) arr_0 [2LL]);
        var_21 ^= arr_3 [i_0 - 1];
        var_22 = ((((/* implicit */int) ((_Bool) var_15))) != (((/* implicit */int) arr_2 [i_0 - 1])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
        var_24 -= ((/* implicit */short) max((((/* implicit */unsigned char) arr_3 [(_Bool)1])), (arr_6 [0LL])));
    }
}
