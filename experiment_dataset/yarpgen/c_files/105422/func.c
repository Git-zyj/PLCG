/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105422
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
    var_14 ^= var_7;
    var_15 *= ((/* implicit */unsigned int) var_6);
    var_16 = ((/* implicit */int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) 1642694469928549168ULL)) && (((/* implicit */_Bool) (signed char)121))))), (var_9)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 -= ((/* implicit */long long int) ((short) var_9));
        var_18 &= ((/* implicit */long long int) arr_0 [i_0]);
    }
}
