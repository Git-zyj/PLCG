/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162277
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (+(((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((signed char) arr_3 [i_0]));
        var_14 *= ((/* implicit */unsigned char) ((arr_1 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        var_15 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) ((signed char) arr_0 [5LL]))) : (((((/* implicit */_Bool) 634795165U)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (_Bool)1))))));
    }
}
