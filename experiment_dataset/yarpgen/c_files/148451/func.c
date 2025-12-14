/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148451
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) ((unsigned long long int) var_7));
        var_11 |= ((var_6) - (((/* implicit */int) var_4)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */int) var_5))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((unsigned long long int) var_7)) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (var_0))))));
        var_13 = ((var_0) & (((/* implicit */int) var_8)));
    }
    var_14 = var_5;
}
