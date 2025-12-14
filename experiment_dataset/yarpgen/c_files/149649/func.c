/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149649
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
    var_17 = ((/* implicit */long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4294967295U))));
    var_18 = ((/* implicit */int) var_16);
    var_19 = ((/* implicit */unsigned int) ((var_16) / (((/* implicit */long long int) min((1707038532), (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) 16ULL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-96))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)57);
        var_21 = ((/* implicit */short) arr_2 [i_0]);
    }
}
