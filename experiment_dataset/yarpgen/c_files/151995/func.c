/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151995
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 3]);
        arr_2 [(short)2] [i_0] = ((/* implicit */long long int) arr_1 [i_0 - 3] [i_0 - 1]);
        var_16 = ((/* implicit */long long int) arr_1 [i_0 - 3] [i_0 - 3]);
    }
    var_17 = ((/* implicit */signed char) ((max((((/* implicit */int) (_Bool)1)), (min((1373870157), (((/* implicit */int) var_1)))))) + (((/* implicit */int) var_3))));
}
