/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121703
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */_Bool) (+(0U)));
    var_15 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((((/* implicit */int) var_7)) - (((/* implicit */int) var_10))))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (4294967295U)))));
    var_16 = ((/* implicit */unsigned short) (-((-((-(var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 + 1]))) ? ((~(((/* implicit */int) (short)-29824)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1415431051)) ? (((/* implicit */int) (short)-29824)) : (((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) (~(var_3)))))))));
        arr_5 [i_0] |= ((/* implicit */signed char) arr_2 [i_0 - 1]);
        arr_6 [i_0] = ((/* implicit */signed char) (~(4294967277U)));
        arr_7 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)29836))));
    }
}
