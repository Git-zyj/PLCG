/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153894
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) -1360843662)), (var_2)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_2 [9U] [i_0 - 1] = ((/* implicit */unsigned char) arr_1 [i_0 + 2]);
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_13 = ((/* implicit */int) var_8);
}
