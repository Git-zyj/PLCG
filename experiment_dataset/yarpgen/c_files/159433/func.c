/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159433
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
        var_16 *= ((/* implicit */unsigned long long int) var_12);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
        var_17 = ((/* implicit */int) var_0);
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (var_8)));
}
