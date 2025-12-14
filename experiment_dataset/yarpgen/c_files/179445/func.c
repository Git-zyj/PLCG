/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179445
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32746)) ? (3215446858U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29))) : (((((/* implicit */_Bool) var_9)) ? (arr_1 [(signed char)9]) : (arr_1 [i_0]))))) * (arr_1 [i_0])));
        var_16 |= ((/* implicit */short) var_4);
    }
    var_17 &= ((/* implicit */long long int) var_3);
}
