/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116238
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 += ((/* implicit */short) 372182088);
        arr_3 [(short)5] [i_0] = var_6;
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [(short)1]);
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_17))));
    var_22 = ((/* implicit */int) var_3);
}
