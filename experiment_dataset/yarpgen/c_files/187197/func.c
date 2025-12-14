/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187197
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [3U])));
        var_13 = ((/* implicit */unsigned int) max((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0])));
    }
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (min((((/* implicit */unsigned int) (short)-2651)), (2069471396U)))));
}
