/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115769
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))));
    }
    var_10 += ((/* implicit */signed char) var_4);
}
