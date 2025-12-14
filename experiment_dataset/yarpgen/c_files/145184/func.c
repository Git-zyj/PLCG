/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145184
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
    var_15 = var_13;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (~(arr_1 [i_0 + 4] [i_0 - 3])));
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) (((_Bool)0) ? (arr_1 [i_0 - 2] [i_0 - 1]) : (((/* implicit */int) var_14))));
    }
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)511)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((int) (signed char)-116))) : (var_0))));
}
