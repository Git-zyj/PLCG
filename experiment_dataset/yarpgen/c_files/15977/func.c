/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15977
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
    var_17 += ((/* implicit */long long int) var_16);
    var_18 &= ((/* implicit */short) 0U);
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((var_14) ^ (max((var_5), ((-(var_14))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) var_7)))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
    }
}
