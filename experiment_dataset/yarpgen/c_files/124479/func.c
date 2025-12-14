/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124479
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
    var_15 = var_6;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_16 += ((/* implicit */_Bool) var_2);
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)7484)))));
        var_18 = ((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0] [i_0 - 1])));
    }
}
