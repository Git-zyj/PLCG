/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102400
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
    var_16 = ((signed char) 255U);
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) var_0);
        var_19 += (signed char)124;
        var_20 &= ((/* implicit */short) 10LL);
    }
}
