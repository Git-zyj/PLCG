/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175290
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) var_13);
        arr_2 [i_0 - 1] = ((/* implicit */long long int) (unsigned short)46345);
    }
    var_17 = ((/* implicit */unsigned short) (_Bool)1);
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
}
