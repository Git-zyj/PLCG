/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102270
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) min(((~(var_5))), (((((/* implicit */_Bool) 1276227444)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))), (var_9)));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = var_10;
        arr_5 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0 - 4]);
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) ^ ((~(((/* implicit */int) var_1))))))) | (max((((/* implicit */long long int) var_12)), (var_9)))));
}
