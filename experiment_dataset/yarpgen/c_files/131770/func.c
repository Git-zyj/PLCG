/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131770
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
    var_20 = var_16;
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_21 = ((/* implicit */long long int) ((int) arr_1 [i_0 - 4] [i_0 - 4]));
    }
    var_22 = ((/* implicit */int) max((var_6), ((unsigned char)254)));
}
