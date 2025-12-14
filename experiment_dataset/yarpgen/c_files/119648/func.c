/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119648
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_15 &= ((/* implicit */unsigned short) (short)5863);
        var_16 += ((/* implicit */unsigned short) (_Bool)1);
    }
    var_17 = ((/* implicit */short) var_6);
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_8))));
}
