/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136234
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
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_17 = arr_2 [i_0] [i_0];
    }
    var_18 = ((/* implicit */int) -6033063701869048817LL);
    var_19 = ((/* implicit */unsigned long long int) 201326592);
}
