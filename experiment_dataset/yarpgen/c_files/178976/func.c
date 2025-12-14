/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178976
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_6);
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
        arr_4 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)127))))));
        var_18 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_0 [i_0])))));
    }
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (((-2147483647 - 1)) / (((/* implicit */int) (signed char)127))))))));
}
