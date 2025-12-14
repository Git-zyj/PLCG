/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17201
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
    var_12 -= ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1])))), (min((var_5), (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */short) ((((min((max((var_3), (var_9))), (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (var_6)))))) + (9223372036854775807LL))) >> (((arr_0 [i_0]) + (1316567644)))));
        var_14 *= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) var_8)), (arr_1 [i_0 + 1])))) % (((/* implicit */int) ((var_5) != (((/* implicit */int) arr_1 [i_0 - 1])))))));
    }
    var_15 = var_9;
    var_16 = ((/* implicit */signed char) ((min((((/* implicit */long long int) 139973615)), (6291456LL))) * (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
