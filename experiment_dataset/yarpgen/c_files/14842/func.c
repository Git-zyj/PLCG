/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14842
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
    var_20 = var_14;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_16)))))))));
        var_22 = ((/* implicit */unsigned int) -1);
    }
    var_23 = ((/* implicit */_Bool) var_10);
}
