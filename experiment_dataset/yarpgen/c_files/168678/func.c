/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168678
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_4))));
        var_19 = ((/* implicit */unsigned short) (short)22509);
        arr_5 [i_0] = ((/* implicit */unsigned char) var_12);
    }
    var_20 = ((/* implicit */_Bool) ((((var_14) ? (var_5) : (((var_15) ^ (((/* implicit */unsigned long long int) var_11)))))) & (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_8)))))))));
}
