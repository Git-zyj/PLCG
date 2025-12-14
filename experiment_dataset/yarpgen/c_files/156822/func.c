/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156822
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((int) var_11));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */unsigned short) 17302853852439361983ULL);
}
