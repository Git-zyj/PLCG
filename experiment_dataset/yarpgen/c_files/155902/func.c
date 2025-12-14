/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155902
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
    var_20 = var_4;
    var_21 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((unsigned short) var_13))));
        var_23 = (unsigned short)49010;
    }
}
