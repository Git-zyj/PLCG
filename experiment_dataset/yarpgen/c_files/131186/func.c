/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131186
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
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_4);
        var_16 = ((/* implicit */int) max(((-(arr_0 [i_0]))), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [(short)20]), (((/* implicit */unsigned char) var_5)))))));
    }
}
