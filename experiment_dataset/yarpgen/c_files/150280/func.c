/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150280
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((-441483960) / (((/* implicit */int) arr_0 [i_0 + 1])))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0]))));
        var_15 *= ((/* implicit */_Bool) 496);
    }
    var_16 = ((/* implicit */signed char) var_2);
}
