/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157074
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 -= ((/* implicit */signed char) (_Bool)1);
        var_21 = ((/* implicit */_Bool) ((unsigned long long int) var_5));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned long long int) arr_0 [i_0]));
    }
    var_22 = ((/* implicit */unsigned char) ((unsigned short) var_0));
}
