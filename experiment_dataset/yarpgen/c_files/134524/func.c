/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134524
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
    var_14 += ((/* implicit */short) (+(((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)96)))) : ((+(((/* implicit */int) (short)2047))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2043)) ? (((/* implicit */int) (short)-2044)) : (((/* implicit */int) (_Bool)0))));
        var_15 = ((/* implicit */unsigned char) arr_0 [i_0 + 3]);
    }
}
