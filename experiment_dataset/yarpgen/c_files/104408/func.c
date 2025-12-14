/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104408
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) (-(arr_2 [i_0 - 2])));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((arr_2 [i_0]), ((-(max((((/* implicit */int) var_8)), (arr_2 [i_0])))))));
    }
    var_15 &= ((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_16 = ((/* implicit */short) var_2);
}
