/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166203
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
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((arr_2 [i_0]), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    var_19 = ((/* implicit */long long int) var_9);
    var_20 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_6)));
}
