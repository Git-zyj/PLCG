/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145040
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
    var_17 = ((/* implicit */signed char) (+(var_16)));
    var_18 |= ((/* implicit */short) ((((var_14) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))))) ? (((/* implicit */int) (unsigned short)30287)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (8238026358670829213ULL)))) ? (((/* implicit */int) (unsigned short)34583)) : ((~(((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [(short)15] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_0])))) + ((~(((/* implicit */int) (unsigned char)132))))));
        var_19 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)59)) + (((/* implicit */int) (unsigned short)49152)))));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))));
    }
}
